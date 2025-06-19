// LESSON_7 LCD-display(MT-16S2H v.7) with Latin and Kyrillic letters (old version) ... https://wiki.amperka.ru/products:display-lcd-text-16x2#%D0%BF%D1%80%D0%B8%D0%BC%D0%B5%D1%80%D1%8B_%D1%80%D0%B0%D0%B1%D0%BE%D1%82%D1%8B_%D0%B4%D0%BB%D1%8F_arduino
// Библиотека для работы с текстовым дисплеем  .. https://docs.arduino.cc/libraries/liquidcrystal/
//#include <LiquidCrystalRus.h>
// 
//// Задаём имя пинов дисплея
//constexpr uint8_t PIN_RS = 6;
//constexpr uint8_t PIN_EN = 7;
//constexpr uint8_t PIN_DB4 = 8;
//constexpr uint8_t PIN_DB5 = 9;
//constexpr uint8_t PIN_DB6 = 10;
//constexpr uint8_t PIN_DB7 = 11;
//
///*
// * Создаём объект для работы с текстовым дисплеем
// * LiquidCrystal lcd(RS, EN, DB4, DB5, DB6, DB7);
// * Подробности подключения:
// * http://wiki.amperka.ru/products:display-lcd-text-16x2
//*/
// 
//LiquidCrystalRus lcd(PIN_RS, PIN_EN, PIN_DB4, PIN_DB5, PIN_DB6, PIN_DB7);
//
// 
//void setup() {
//  // Устанавливаем размер экрана
//  // Количество столбцов и строк
//  lcd.begin(16, 2);
//  // Устанавливаем курсор в колонку 5 и строку 0
//  lcd.setCursor(5, 0);
//  // Печатаем  строку
//  lcd.print("Привет");
//   lcd.setCursor(5, 1);
//  lcd.print("Hello");
//}
// 
//void loop() {
//  
//}
//LESSON_6 keypad 4x4 with LEDs
//#include <Keypad.h>
//
//const byte ROWS = 4;  //four rows
//const byte COLS = 4;  //four columns
//const byte redLed = 11;
//const byte greenLed = 10;
//
//char keys[ROWS][COLS] = {
//  { '1', '2', '3', 'A' },
//  { '4', '5', '6', 'B' },
//  { '7', '8', '9', 'C' },
//  { '*', '0', '#', 'D' }
//};
//
//byte rowPins[ROWS] = { 9, 8, 7, 6 };  //connect to the row pinouts of the keypad
//byte colPins[COLS] = { 5, 4, 3, 2 };  //connect to the column pinouts of the keypad
//const String passNumbers;
//const String password = "1234";
//boolean isPasswordCorrect = false;
////Create an object of keypad
//Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
//
//void setup() {
//  Serial.begin(9600);
//  pinMode(redLed, OUTPUT);
//  pinMode(greenLed, OUTPUT);
//}
//
//void loop() {
//  char key = keypad.getKey();  // Read the key
////   analogWrite(redLed, LOW);
////   analogWrite(greenLed, LOW);
//  // Print if key pressed
//  if (key && !isPasswordCorrect && passNumbers.length() != 4) {
//    Serial.print("Key Pressed : ");
//    Serial.println(key);
//    passNumbers = passNumbers + key;
//    Serial.println(passNumbers);
//  } else if (passNumbers.length() == 4 && passNumbers.equals(password)) {
//    analogWrite(redLed, LOW);
//    analogWrite(greenLed, HIGH);
//    isPasswordCorrect = true;
//    Serial.println("Password is correct");
////    analogWrite(greenLed, LOW);
//    isPasswordCorrect = false;
//    passNumbers = "";
//  } else if (passNumbers.length() == 4 && !passNumbers.equals(password)) {
//    passNumbers = "";
//    analogWrite(greenLed, LOW);
//    analogWrite(redLed, HIGH);
//    isPasswordCorrect = false;
//    Serial.println("Password is not correct try again");
//  } 
//}
//LESSON_5 potentiometer with zummer combined manaing
//#define NOTE_B0  31
//#define NOTE_C1  33
//#define NOTE_CS1 35
//#define NOTE_D1  37
//#define NOTE_DS1 39
//#define NOTE_E1  41
//#define NOTE_F1  44
//#define NOTE_FS1 46
//#define NOTE_G1  49
//#define NOTE_GS1 52
//#define NOTE_A1  55
//#define NOTE_AS1 58
//#define NOTE_B1  62
//#define NOTE_C2  65
//#define NOTE_CS2 69
//#define NOTE_D2  73
//#define NOTE_DS2 78
//#define NOTE_E2  82
//#define NOTE_F2  87
//#define NOTE_FS2 93
//#define NOTE_G2  98
//#define NOTE_GS2 104
//#define NOTE_A2  110
//#define NOTE_AS2 117
//#define NOTE_B2  123
//#define NOTE_C3  131
//#define NOTE_CS3 139
//#define NOTE_D3  147
//#define NOTE_DS3 156
//#define NOTE_E3  165
//#define NOTE_F3  175
//#define NOTE_FS3 185
//#define NOTE_G3  196
//#define NOTE_GS3 208
//#define NOTE_A3  220
//#define NOTE_AS3 233
//#define NOTE_B3  247
//#define NOTE_C4  262
//#define NOTE_CS4 277
//#define NOTE_D4  294
//#define NOTE_DS4 311
//#define NOTE_E4  330
//#define NOTE_F4  349
//#define NOTE_FS4 370
//#define NOTE_G4  392
//#define NOTE_GS4 415
//#define NOTE_A4  440
//#define NOTE_AS4 466
//#define NOTE_B4  494
//#define NOTE_C5  523
//#define NOTE_CS5 554
//#define NOTE_D5  587
//#define NOTE_DS5 622
//#define NOTE_E5  659
//#define NOTE_F5  698
//#define NOTE_FS5 740
//#define NOTE_G5  784
//#define NOTE_GS5 831
//#define NOTE_A5  880
//#define NOTE_AS5 932
//#define NOTE_B5  988
//#define NOTE_C6  1047
//#define NOTE_CS6 1109
//#define NOTE_D6  1175
//#define NOTE_DS6 1245
//#define NOTE_E6  1319
//#define NOTE_F6  1397
//#define NOTE_FS6 1480
//#define NOTE_G6  1568
//#define NOTE_GS6 1661
//#define NOTE_A6  1760
//#define NOTE_AS6 1865
//#define NOTE_B6  1976
//#define NOTE_C7  2093
//#define NOTE_CS7 2217
//#define NOTE_D7  2349
//#define NOTE_DS7 2489
//#define NOTE_E7  2637
//#define NOTE_F7  2794
//#define NOTE_FS7 2960
//#define NOTE_G7  3136
//#define NOTE_GS7 3322
//#define NOTE_A7  3520
//#define NOTE_AS7 3729
//#define NOTE_B7  3951
//#define NOTE_C8  4186
//#define NOTE_CS8 4435
//#define NOTE_D8  4699
//#define NOTE_DS8 4978
//#define REST 0
//int buzzerPin = 13;
//int potPin = A0;
//int ANALOG_THRESHOLD = 500;
//int tempo=114; 
//int melody[] = {
//
//  
//  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//1
//  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
//  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
//  NOTE_E4,-4, NOTE_D4,8,  NOTE_D4,2,
//
//  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//4
//  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
//  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
//  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2,
//
//  NOTE_D4,4,  NOTE_D4,4,  NOTE_E4,4,  NOTE_C4,4,//8
//  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_C4,4,
//  NOTE_D4,4,  NOTE_E4,8,  NOTE_F4,8,  NOTE_E4,4, NOTE_D4,4,
//  NOTE_C4,4,  NOTE_D4,4,  NOTE_G3,2,
//
//  NOTE_E4,4,  NOTE_E4,4,  NOTE_F4,4,  NOTE_G4,4,//12
//  NOTE_G4,4,  NOTE_F4,4,  NOTE_E4,4,  NOTE_D4,4,
//  NOTE_C4,4,  NOTE_C4,4,  NOTE_D4,4,  NOTE_E4,4,
//  NOTE_D4,-4,  NOTE_C4,8,  NOTE_C4,2
//  
//};
//
//// sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
//// there are two values per note  (pitch and duration), so for each note there are four bytes
//int notes=sizeof(melody)/sizeof(melody[0])/2; 
//
//// this calculates the duration of a whole note in ms (60s/tempo)*4 beats
//int wholenote = (60000 * 4) / tempo;
//
//int divider = 0, noteDuration = 0;
//void playToneWithVolume(int frequency, int duration, int volumePercent) {
//  // frequency - частота ноты
//  // duration - длительность ноты в мс
//  // volumePercent - громкость 0-100%
//
//  unsigned long startTime = millis();
//  unsigned long elapsed = 0;
//  int period = 1000000 / frequency; // период в микросекундах
//  int pulseWidth = period * volumePercent / 100; // длительность "высокого" сигнала
//
//  while (elapsed < duration) {
//    digitalWrite(buzzerPin, HIGH);
//    delayMicroseconds(pulseWidth);
//    digitalWrite(buzzerPin, LOW);
//    delayMicroseconds(period - pulseWidth);
//
//    elapsed = millis() - startTime;
//  }
//}
//
//void setup() {
//  pinMode(buzzerPin, OUTPUT);
//  pinMode(potPin, INPUT);
//  Serial.begin(9600);
//}
//void loop () {
// 
//
//  for (int thisNote = 0; thisNote < notes * 2; thisNote += 2) {
//     int potValue = analogRead(potPin); // 0-1023
//  int volume = map(potValue, 0, 1023, 0, 100); // 0-100%
//    int note = melody[thisNote];
//    int divider = melody[thisNote + 1];
//
//    int noteDuration = 0;
//    if (divider > 0) {
//      noteDuration = wholenote / divider;
//    } else if (divider < 0) {
//      noteDuration = wholenote / abs(divider);
//      noteDuration = noteDuration * 1.5;
//    }
//
//    if (note == 0) { // пауза
//      delay(noteDuration);
//    } else {
//      playToneWithVolume(note, noteDuration * 0.9, volume);
//      delay(noteDuration * 0.1);
//    }
//  }
//}
/*   DATE: Jun 16 2025
     Writer: Abdliashim Nuraiym 
     Theme: Potentiometer, buzzer and RGB module KY-016
*/
//LESSON_4 zummer
//#define ZUMER 3 // https://www.youtube.com/watch?v=5x7qKZbYifI => https://dragaosemchama.com/en/2019/02/songs-for-arduino/
//
//void setup() {
//  pinMode(ZUMER, OUTPUT);
//}
//
//void loop() {
////  tone(ZUMER, 230);
//  delay(150);
//
////  tone(ZUMER, 250, 150);
//  noTone(1000);
//}
//LESSON_3 manage potentiometer
//#define AO 0
//#define RED_PIN 11
//#define GREEN_PIN 10
//#define BLUE_PIN 9
//
//int val;
//
//void setup() {
//  Serial.begin(9600);
//}
//
//void loop() {
//  val = analogRead(AO);
//  int newVal = map(val, 0, 1023, 0, 1530); // map(имя переменной, минимальное значение 0, макс. знач 1023, нов. мин. знач, нов. макс. знач)；
//  Serial.println(val);
//  delay(1000);
//  if (newVal <= 255) {
//    setColor(newVal, 0, 0);
//  } else if (newVal > 255 && newVal <= 510) {
//    setColor(255, newVal - 255, 0);
//  } else if (newVal > 510 && newVal <= 765) {
//    setColor(765 - newVal, 255, 0);
//  } else if (newVal > 765 && newVal <= 1020) {
//    setColor(0, 255, newVal - 765);
//  } else if (newVal > 1020 && newVal <= 1275) {
//    setColor(0, 1275 - newVal, 255);
//  } else if (newVal > 1275 && newVal <= 1530) {
//    setColor(newVal - 1275, 0, 255);
//  }
//}
//LESSON_2 manage KY-016 RGB module 
//#define RED_PIN 11
//#define GREEN_PIN 10
//#define BLUE_PIN 9
//
//void setup() {
//  pinMode(RED_PIN, OUTPUT);
//  pinMode(GREEN_PIN, OUTPUT);
//  pinMode(BLUE_PIN, OUTPUT);  
//}
//
//void loop() {
//  setColor(255, 225, 255); // white 
//  delay(1000);
//  setColor(255, 0, 0); // red
//  delay(1000);
//  setColor(0, 225, 0); // green
//  delay(1000);
//  setColor(0, 0, 255); // blue
//  delay(1000);
//}
//
//void setColor(int redVal, int greenVal, int blueVal) {
//  // Invert values for common anode LED
//  analogWrite(RED_PIN, redVal);
//  analogWrite(GREEN_PIN, greenVal);
//  analogWrite(BLUE_PIN, blueVal);
//}

// LESSON_1 default led 13 Does your arduino works?
//void setup() {
//  pinMode(13, OUTPUT);
//
//}
//
//void loop() {
//  digitalWrite(13, HIGH);
//  delay(100);
//  digitalWrite(13, LOW);
//  delay(100);
//}
