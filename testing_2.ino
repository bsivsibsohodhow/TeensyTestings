#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=275,270
AudioOutputI2S           i2s1;           //xy=518,262
AudioConnection          patchCord1(waveform1, 0, i2s1, 0);
AudioConnection          patchCord2(waveform1, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=315,423
// GUItool: end automatically generated code

void setup() {
  Serial.begin(9600);
  AudioMemory(20);
  sgt15000_1.enable();
  sgt15000_1.volume(0.32);
  waveform1.begin(WAVWFORM_SAWTOOTH);
  waveform1.frequency(50);
  waveform1.pulseWidth(0.15);
}

void loop() {
  for (int freq = 50; freq <=500; freq++) {
    waveform1.frequency(freq);
    delay(10);
  }
}
