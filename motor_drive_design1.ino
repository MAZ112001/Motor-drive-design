// C++ code
//
#include <Servo.h>

int servo1 = 0;

int i = 0;

int j = 0;

int k = 0;

int m = 0;

int n = 0;

Servo servo_13;

Servo servo_7;

Servo servo_11;

Servo servo_10;

Servo servo_8;

void setup()
{
  servo_13.attach(13, 500, 2500);

  servo_7.attach(7, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_8.attach(8, 500, 2500);

}

void loop()
{
  servo1 = 0;
  for (i = 0; i <= 90; i += 10) {
    servo_13.write(90);
  }
  servo1 = 0;
  for (j = 0; j <= 90; j += 10) {
    servo_7.write(90);
  }
  servo1 = 0;
  for (k = 1; k <= 10; k += 10) {
    servo_11.write(90);
  }
  servo1 = 0;
  for (m = 0; m <= 90; m += 10) {
    servo_10.write(90);
  }
  servo1 = 0;
  for (n = 0; n <= 90; n += 10) {
    servo_8.write(90);
  }
  delay(10); // Delay a little bit to improve simulation performance
}