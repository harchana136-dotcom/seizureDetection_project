#include <Wire.h>
#include <MPU6050.h>
#include <SPI.h>
#include <SD.h>

MPU6050 mpu;

int buzzer = 8;
int motor = 9;
int heartPin = A0;
int chipSelect = 4;

File dataFile;

void setup() {

  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);

  Wire.begin();
  mpu.initialize();

  if (!SD.begin(chipSelect)) {
    Serial.println("SD card failed");
    return;
  }

  Serial.println("System Ready");
}

void loop() {

  int heartValue = analogRead(heartPin);

  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  int motion = abs(ax) + abs(ay) + abs(az);

  String stage = "NORMAL";

  // Stage 1: Normal
  if (motion < 12000 && heartValue < 600) {
    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
    stage = "NORMAL";
  }

  // Stage 2: Warning
  else if (motion >= 12000 && motion < 20000) {
    digitalWrite(motor, HIGH);
    digitalWrite(buzzer, LOW);
    stage = "WARNING";
  }

  // Stage 3: Emergency
  else if (motion >= 20000 || heartValue > 700) {
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor, HIGH);
    stage = "EMERGENCY";
  }

  Serial.print("Motion: ");
  Serial.print(motion);
  Serial.print(" Heart: ");
  Serial.print(heartValue);
  Serial.print(" Stage: ");
  Serial.println(stage);

  // Save to SD card
  dataFile = SD.open("data.txt", FILE_WRITE);

  if (dataFile) {

    dataFile.print(millis());
    dataFile.print(",");
    dataFile.print(motion);
    dataFile.print(",");
    dataFile.print(heartValue);
    dataFile.print(",");
    dataFile.println(stage);

    dataFile.close();
  }

  delay(500);
}
