/*
* First off lets declare that pin 13
* is going to be our LED's Pin. I'm
* doing this because on the arduino 
* itself pin13 is hooked up onto
* an on-board LED
*/
int ledPin = 13;

/*
* We start off every arduino program
* with a setup function. This function
* is called when the arduino first 
* "boots up" Normally we would
* place code that only needs to be
* called once inside our setup()
*/
void setup()
{
  // Set the mode of our led's pin
  // to be an output
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // Send a digital HIGH signal to
  // our ledPin, telling it to turn on
  digitalWrite(ledPin, HIGH);

  // Wait 500 milliseconds (.5 seconds)
  delay(500);

  // Send a digital LOW signal to
  // our ledPin, telling it to turn off
  digitalWrite(ledPin, LOW);

  // Wait 500 milliseconds (.5 seconds)
  delay(500);
}
