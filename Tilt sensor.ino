int motor = 5;
int tilt = 3;
void setup()
{
  pinMode(tilt, INPUT);
  pinMode(motor, OUTPUT);
}

void loop()
{
  int reading;
  reading = digitalRead(tilt);
  if (reading){
  digitalWrite(motor, LOW);
  }
  else {
    digitalWrite(motor, HIGH);
  }
}