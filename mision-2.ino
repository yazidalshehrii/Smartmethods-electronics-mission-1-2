#define LED_PIN 8 
#define BUTTON_PIN 7

byte lsatbutton;
byte led_state = LOW;

unsigned long LastTimeButtomStateChanged = millis();
unsigned long debouncedDuration = 50;
void setup(){

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
 lsatbuttton = digitalread(BUTTON_PIN); 
}
void loop(){
  if(millis() - LastTimeButtomStateChanged >= debouncedDuration){
    byte buttonState = digitalRead(BUTTON_PIN);
    if(buttonState != lsatbutton){
      LastTimeButtomStateChanged = millis();
      lsatbutton=buttonState;
      if(buttonState == LOW){
        if(led_state == HIGH)
        {
          led_state = LOW;
        }
        else
          {
            ledtstate = HIGH;
          }
      digitalWrite(LED_PIN,led_state);
    }
  }
}
}
