int redPin = 10;
int greenPin = 11;
int bluePin = 9;
void colourTransition();
void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}
void loop()
{
  colourTransition();
}
void colourTransition()
{
  for(int i=0;i<=255;i+=3)
  {
    analogWrite(redPin,255-i);
    analogWrite(greenPin, i);
    delay(100);
  }
  for(int i=0;i<=255;i+=3)
  {
    analogWrite(greenPin,255-i);
    analogWrite(bluePin, i);
    delay(100);
  }
  for(int i=0;i<=255;i+=3)
  {
    analogWrite(bluePin,255-i);
    analogWrite(redPin, i);
    delay(100);
  }
}
