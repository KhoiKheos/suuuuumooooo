// Motor 1
#define IN1 2
#define IN2 4
#define EN1 3  // PWM

// Motor 2
#define IN3 5
#define IN4 7
#define EN2 6  // PWM

// Motor 3
#define IN5 8
#define IN6 10
#define EN3 9  // PWM

// Motor 4
#define IN7 12
#define IN8 A0
#define EN4 11 // PWM

// === Hàm tiện ích ===
void forwardMotor(int inA, int inB, int en, int speed) {
  digitalWrite(inA, HIGH);
  digitalWrite(inB, LOW);
  analogWrite(en, speed);
}

void reverseMotor(int inA, int inB, int en, int speed) {
  digitalWrite(inA, LOW);
  digitalWrite(inB, HIGH);
  analogWrite(en, speed);
}

void stopMotor(int inA, int inB, int en) {
  digitalWrite(inA, LOW);
  digitalWrite(inB, LOW);
  analogWrite(en, 0);
}

void setup() {
  // Đặt tất cả các chân làm OUTPUT
  pinMode(IN1, OUTPUT); pinMode(IN2, OUTPUT); pinMode(EN1, OUTPUT);
  pinMode(IN3, OUTPUT); pinMode(IN4, OUTPUT); pinMode(EN2, OUTPUT);
  pinMode(IN5, OUTPUT); pinMode(IN6, OUTPUT); pinMode(EN3, OUTPUT);
  pinMode(IN7, OUTPUT); pinMode(IN8, OUTPUT); pinMode(EN4, OUTPUT);
}

void loop() {
  // 1. Chạy tiến 5 giây
  forwardMotor(IN1, IN2, EN1, 255);
  forwardMotor(IN3, IN4, EN2, 255);
  forwardMotor(IN5, IN6, EN3, 255);
  forwardMotor(IN7, IN8, EN4, 255);
  delay(5000);

  // 2. Dừng 1 giây
  stopMotor(IN1, IN2, EN1);
  stopMotor(IN3, IN4, EN2);
  stopMotor(IN5, IN6, EN3);
  stopMotor(IN7, IN8, EN4);
  delay(1000);

  // 3. Chạy lùi 5 giây
  reverseMotor(IN1, IN2, EN1, 255);
  reverseMotor(IN3, IN4, EN2, 255);
  reverseMotor(IN5, IN6, EN3, 255);
  reverseMotor(IN7, IN8, EN4, 255);
  delay(5000);

  // 4. Dừng 1 giây
  stopMotor(IN1, IN2, EN1);
  stopMotor(IN3, IN4, EN2);
  stopMotor(IN5, IN6, EN3);
  stopMotor(IN7, IN8, EN4);
  delay(1000);
}
