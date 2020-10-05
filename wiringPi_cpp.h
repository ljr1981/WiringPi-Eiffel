# 1 "/usr/include/wiringPi.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "/usr/include/wiringPi.h"
# 117 "/usr/include/wiringPi.h"
extern const char *piModelNames [20] ;
extern const char *piRevisionNames [16] ;
extern const char *piMakerNames [16] ;
extern const int piMemorySize [ 8] ;
# 143 "/usr/include/wiringPi.h"
struct wiringPiNodeStruct
{
  int pinBase ;
  int pinMax ;

  int fd ;
  unsigned int data0 ;
  unsigned int data1 ;
  unsigned int data2 ;
  unsigned int data3 ;

           void (*pinMode) (struct wiringPiNodeStruct *node, int pin, int mode) ;
           void (*pullUpDnControl) (struct wiringPiNodeStruct *node, int pin, int mode) ;
           int (*digitalRead) (struct wiringPiNodeStruct *node, int pin) ;

           void (*digitalWrite) (struct wiringPiNodeStruct *node, int pin, int value) ;

           void (*pwmWrite) (struct wiringPiNodeStruct *node, int pin, int value) ;
           int (*analogRead) (struct wiringPiNodeStruct *node, int pin) ;
           void (*analogWrite) (struct wiringPiNodeStruct *node, int pin, int value) ;

  struct wiringPiNodeStruct *next ;
} ;

extern struct wiringPiNodeStruct *wiringPiNodes ;



extern volatile unsigned int *_wiringPiGpio ;
extern volatile unsigned int *_wiringPiPwm ;
extern volatile unsigned int *_wiringPiClk ;
extern volatile unsigned int *_wiringPiPads ;
extern volatile unsigned int *_wiringPiTimer ;
extern volatile unsigned int *_wiringPiTimerIrqRaw ;
# 191 "/usr/include/wiringPi.h"
extern int wiringPiFailure (int fatal, const char *message, ...) ;



extern struct wiringPiNodeStruct *wiringPiFindNode (int pin) ;
extern struct wiringPiNodeStruct *wiringPiNewNode (int pinBase, int numPins) ;

extern void wiringPiVersion (int *major, int *minor) ;
extern int wiringPiSetup (void) ;
extern int wiringPiSetupSys (void) ;
extern int wiringPiSetupGpio (void) ;
extern int wiringPiSetupPhys (void) ;

extern void pinModeAlt (int pin, int mode) ;
extern void pinMode (int pin, int mode) ;
extern void pullUpDnControl (int pin, int pud) ;
extern int digitalRead (int pin) ;
extern void digitalWrite (int pin, int value) ;
extern unsigned int digitalRead8 (int pin) ;
extern void digitalWrite8 (int pin, int value) ;
extern void pwmWrite (int pin, int value) ;
extern int analogRead (int pin) ;
extern void analogWrite (int pin, int value) ;




extern int wiringPiSetupPiFace (void) ;
extern int wiringPiSetupPiFaceForGpioProg (void) ;



extern int piGpioLayout (void) ;
extern int piBoardRev (void) ;
extern void piBoardId (int *model, int *rev, int *mem, int *maker, int *overVolted) ;
extern int wpiPinToGpio (int wpiPin) ;
extern int physPinToGpio (int physPin) ;
extern void setPadDrive (int group, int value) ;
extern int getAlt (int pin) ;
extern void pwmToneWrite (int pin, int freq) ;
extern void pwmSetMode (int mode) ;
extern void pwmSetRange (unsigned int range) ;
extern void pwmSetClock (int divisor) ;
extern void gpioClockSet (int pin, int freq) ;
extern unsigned int digitalReadByte (void) ;
extern unsigned int digitalReadByte2 (void) ;
extern void digitalWriteByte (int value) ;
extern void digitalWriteByte2 (int value) ;




extern int waitForInterrupt (int pin, int mS) ;
extern int wiringPiISR (int pin, int mode, void (*function)(void)) ;



extern int piThreadCreate (void *(*fn)(void *)) ;
extern void piLock (int key) ;
extern void piUnlock (int key) ;



extern int piHiPri (const int pri) ;



extern void delay (unsigned int howLong) ;
extern void delayMicroseconds (unsigned int howLong) ;
extern unsigned int millis (void) ;
extern unsigned int micros (void) ;
