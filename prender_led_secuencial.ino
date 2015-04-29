int leds[] = {4,8,9,10,11,12};
int tiempo=500;
void setup() {
   for(int pin=0; pin<=5; pin++)
  {
    pinMode(leds[pin], OUTPUT);
  }

}

void loop() {
  for(int pin=0; pin<=5; pin++)
  {
      digitalWrite(leds[pin], HIGH);
      delay(tiempo);
   }
   for(int pin=5; pin>=0;pin--)
   {
    digitalWrite(leds[pin], LOW);
    delay(tiempo);
   }
}
