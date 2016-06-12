int upButton = 2;
int downButton = 3;
int leftButton = 4;
int rightButton = 5;
int aButton = 6;
int bButton = 7;

int upSignal = 8;
int downSignal = 9;
int leftSignal = 10;
int rightSignal = 11;
int aSignal = 12;
int bSignal = 13;

int upBtnState = 0;
int downBtnState = 0;
int leftBtnState = 0;
int rightBtnState = 0;
int aBtnState = 0;
int bBtnState = 0;

void setup() {
  pinMode(upButton, INPUT);
  pinMode(downButton, INPUT);
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
  pinMode(aButton, INPUT);
  pinMode(bButton, INPUT);

  pinMode(upSignal, OUTPUT);
  pinMode(downSignal, OUTPUT);
  pinMode(leftSignal, OUTPUT);
  pinMode(rightSignal, OUTPUT);
  pinMode(aSignal, OUTPUT);
  pinMode(bSignal, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
 upBtnState = digitalRead(upButton);
 downBtnState = digitalRead(downButton);
 leftBtnState = digitalRead(leftButton);
 rightBtnState = digitalRead(rightButton);
 aBtnState = digitalRead(aButton);
 bBtnState = digitalRead(bButton);
  if(upBtnState == HIGH) {
    digitalWrite(upSignal, HIGH);
    } else if(downBtnState == HIGH) {
      digitalWrite(downSignal, HIGH);
      } else if(leftBtnState == HIGH) {
        digitalWrite(leftSignal, HIGH);
        } else if(rightBtnState == HIGH) {
          digitalWrite(rightSignal, HIGH);
          } else if(aBtnState == HIGH){
            digitalWrite(aSignal, HIGH);
            } else if(bBtnState == HIGH) {
              digitalWrite(bSignal, HIGH);
              } else {
                digitalWrite(upSignal, LOW);
                digitalWrite(downSignal, LOW);
                digitalWrite(leftSignal, LOW);
                digitalWrite(rightSignal, LOW);
                digitalWrite(aSignal, LOW);
                digitalWrite(bSignal, LOW);
            }
}
