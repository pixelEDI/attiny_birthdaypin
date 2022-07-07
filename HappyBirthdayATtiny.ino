/*
        _          _ ______ _____ _____ 
       (_)        | |  ____|  __ \_   _|
  _ __  ___  _____| | |__  | |  | || |  
 | '_ \| \ \/ / _ \ |  __| | |  | || |  
 | |_) | |>  <  __/ | |____| |__| || |_ 
 | .__/|_/_/\_\___|_|______|_____/_____|
 | |                                    
 |_|                                    
                             
www.pixeledi.eu | twitter.com/pixeledi
Happy Birthday ATtiny| V1.0 | 06/2022

*/

//ATtiny 25 mit 8mHz (bis 28 töne funzt gut)

#include "TimerFreeTone.h"
#include "pitches.h"
#define NO_SOUND 0 // make the rests in the music
const byte TONE_PIN = 3;
const byte LED1 = 2;
const byte LED2 = 1;
const byte LED3 = 0;

// Melody (lib pitche.h)
uint16_t melody[] = { NOTE_D4,NOTE_D4,NOTE_E4,NOTE_D4,NOTE_G4,NOTE_FS4,NOTE_D4,NOTE_D4,NOTE_E4,NOTE_D4,
                      NOTE_A4,NOTE_G4,NOTE_D4,NOTE_D4,NOTE_D5,NOTE_B4,NOTE_G4,NOTE_G4,NOTE_FS4,NOTE_E4,
                      NOTE_C5,NOTE_C5,NOTE_B4,NOTE_G4,NOTE_A4,NOTE_G4, NO_SOUND};

// durations: 2 = half note, 4 = quarter note, 8 = eight note, etc
byte noteDurations[] = { 8,16,4,4,4,2,8,16,4,4,4,2,8,16,4,4,8,16,4,4,8,16,4,4,4,2,1};

int musicLength=sizeof(melody)/sizeof('NOTE_F5');

void setup() {
  // put your setup code here, to run once:
  pinMode(TONE_PIN,OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  
  for (int thisNote = 0; thisNote < musicLength; thisNote++) {

      // blink the three LEDs in sequence
      if (thisNote%3==0){    
        digitalWrite(LED1, HIGH);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, LOW);
      }
      else if (thisNote%3==1){    
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, HIGH);
        digitalWrite(LED3, LOW);
      }
      else if (thisNote%3==2){    
        digitalWrite(LED1, LOW);
        digitalWrite(LED2, LOW);
        digitalWrite(LED3, HIGH);
      }
    
    int noteDuration = 2000/noteDurations[thisNote];
    TimerFreeTone(TONE_PIN, melody[thisNote], noteDuration, 10); // Play melody[thisNote] for duration[thisNote].
    
    delay(50);
    
  }
  //while(1); // Stop (so it doesn't repeat forever driving you crazy--you're welcome).
}
