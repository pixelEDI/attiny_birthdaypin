<img src="https://img.shields.io/badge/-ATtiny%20Project-blue.svg?&amp;style=flat-square&amp" style="max-width: 100%;"> <img src="https://img.shields.io/badge/-Arduino%20IDE-%2300979D.svg?&amp;style=flat-square&amp;logo=arduino&amp;logoColor=white" style="max-width: 100%;">


# General info
[![](https://yt-embed.live/embed?v=QRGCOJkVUwM)](http://www.youtube.com/watch?v=QRGCOJkVUwM "Birthday Pin")

## Code
- For this project we are working with the TimerFreeTone library, which allows us to play a note on a pin with a specific frequency in Hz for a desired duration in milliseconds.
- The additional pitches.h defines the musical notes and associates them with their frequency so that you can address the notes by their names.
- It is important that you flash your ATtiny25 with 8mHz, otherwise the sound will not play properly.
- The ATtiny25 is big enough for a song with up to 28 notes. If you want to play a longer song, you have to take an ATtiny45.
- First we create an array for the melody, consisting of the notes we want to play. For a pause in the music we define a NO_SOUND variable that has 0 Hz.
- Next, we create an array for the duration. You have to enter a certain duration for each note, also for NO_SOUND. 
- The calculation of the musicLength was given, so just take it as it is.
- In the loop, we let the LEDs flash alternately at the frequency of the notes and play the music.

## Hardware
- This little DIY pin runs on an ATtiny25.
- For the sound we added a piezo buzzer and a 100 Ω resistor to make the sound softer
- There are also three 3mm LEDs connected with a 100 Ω resistor as well.
- We power the pin with a CR2032 3V button cell battery

![Verdrahtung](https://github.com/pixelEDI/attiny_birthdaypin/blob/main/HappyBirthday_wiring.jpg)


## 3D Case
Get the Case:   [Thingiverse](https://www.thingiverse.com/thing:5434717)

You like it? Then I would be very happy if you treat me to a coffee on [ko-fi.com/pixeledi](https://www.ko-fi.com/pixeledi)
