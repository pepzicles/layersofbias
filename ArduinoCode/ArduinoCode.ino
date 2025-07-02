#define whiteButton 4
#define whiteButton_LED 13
#define redButton 5
#define redButton_LED 12

void setup() {
  //start serial connection
  Serial.begin(9600);
  pinMode(whiteButton, INPUT_PULLUP);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(whiteButton_LED, OUTPUT);
  pinMode(redButton_LED, OUTPUT);
}

void loop() {
  //read the pushbutton value into a variable
  int whiteButtonState = digitalRead(whiteButton);
  int redButtonState = digitalRead(redButton);

  if (whiteButtonState == LOW) { //when pressed
    digitalWrite(whiteButton_LED, LOW);
    Serial.println("Start Button Pressed");
  } else {
    digitalWrite(whiteButton_LED, HIGH);
  }

  if (redButtonState == LOW) { //When pressed
    digitalWrite(redButton_LED, LOW);
    Serial.println("Stop Button Pressed");
  } else { //When not pressed
    digitalWrite(redButton_LED, HIGH); 
  }

  delay(100);
}