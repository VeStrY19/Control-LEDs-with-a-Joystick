const char axeX = 2;
const char axeY = 1;
const char button = 3;
const char  ledG = 9;
const char ledR = 6;
const char ledB = 11;
const char ledW = 5;

unsigned int valeurX = 0;
unsigned int valeurY = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(axeX, INPUT);
  pinMode(axeY, INPUT);
  pinMode(button, INPUT_PULLUP);

  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledW, OUTPUT);

  digitalWrite(button, HIGH);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x, y, sw;
  valeurX = analogRead(axeX);
  valeurY = analogRead(axeY);
  int valeurB = digitalRead(button);
  //sw = digitalRead(joy_sw);
  Serial.print("X : ");
  Serial.println(valeurX);
  Serial.print("Y : ");
  Serial.println(valeurY);
  Serial.print("SWITCH : ");
  Serial.println(valeurB);
  delay(100);

  if(valeurX > 700 )
  {
    digitalWrite(ledG, HIGH);
  }
  else {
    digitalWrite(ledG, LOW);
  }

  if(valeurX < 400 )
  {
    digitalWrite(ledR, HIGH);
  }
  else {
    digitalWrite(ledR, LOW);
  }

  if(valeurY > 700 )
  {
    digitalWrite(ledW, HIGH);
  }
  else {
    digitalWrite(ledW, LOW);
  }

  if(valeurY < 400 )
  {
    digitalWrite(ledB, HIGH);
  }
  else {
    digitalWrite(ledB, LOW);
  }

  /*if(valeurB == LOW)
  {
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledW, HIGH);
    digitalWrite(ledB, HIGH);
  }
  else {
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledW, LOW);
    digitalWrite(ledB, LOW);
  }*/
  
  
}
