/*
* (C) 2014 Liam Middlebrook
* This software is released under
* the MIT License
* For a copy of the license please
* visit the following URL
* http://opensource.org/licenses/MIT
*/

// Store the LED pin number for later use
int ledPin = 13;

// Make a new array of bools
// This will store the pattern
bool pattern[] = {false, true, true, true, true, false, true, true, false};

void setup()
{
  // Set ledPin to OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  //Loop through each value in the pattern
  for(int i = 0; i < sizeof(pattern); i++)
  {
    // set the state of our ledPin to
    // the value of the pattern at position i
    digitalWrite(ledPin, pattern[i]);

    // Wait 50 milliseconds
    delay(50);
  }
}
