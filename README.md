# suuuuumooooo
# Controll motor via L298n, -> motor_test.h

## 📌 Mô tả
Controlling 2 L298n, 4 motor for sumo robot
## ⚙️ Phần cứng
- Arduino Uno
- 2x L298N
- 4x DC motor
- Power: 5V: for stm (blue pill) and signal
-        12V: for L298n, main power for motor

## 🔌 Sơ đồ chân kết nối

| Motor | IN1 | IN2 | ENA |
|---------|-----|-----|-----|
| M1      | D2  | D4  | D3  |
| M2      | D5  | D7  | D6  |
| M3      | D8  | D10 | D9  |
| M4      | D12 | A0  | D11 |

## 🧠 Chức năng
- Forward 5s
- Stop 1s
- Backward 5s
- Stop 1s

## 🧾 Code mẫu

```cpp
void setup() {
  pinMode(13, OUTPUT);
}
