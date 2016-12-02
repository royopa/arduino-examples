//photoresistor

int Pr = 0; // will be used for analog 0.
int PrValue = 0; // value of output
int Pr_Input = 1000; // value of when light is on
int PrLedOutput = 13;

void setup() {
  Serial.begin(9600); //start serial Monitor
  pinMode(13, OUTPUT); // pin 8 as output
}

void loop() {

  PrValue = analogRead(Pr);

  Serial.println(PrValue); //prints photoresistor value

  delay(100); // value updated every 0.1 second.

  if (PrValue > Pr_Input) // if sensor value is less than 19, light will turn on.
  {
     digitalWrite(PrLedOutput, HIGH);
  }
  else
  {
     digitalWrite(PrLedOutput, LOW);
  }
 }
