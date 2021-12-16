#include <stdio.h>

#include <wiringPi.h>

#include <sys/time.h>

const int ledPin = 13;

int main(){
    wiringPiSetupGpio(); // Initialise WiringPi with Broadcom GPIO pins

    pinMode(ledPin, OUTPUT); // Set LED Pin as an output

    while(1){
        // Turn LED On
        printf("LED On\n");
        digitalWrite(ledPin, HIGH);

        delay(500);
 
        // Turn LED off
        printf("LED Off\n");
        digitalWrite(ledPin, LOW);

        delay(500);
    }

    return 0;
    
}
