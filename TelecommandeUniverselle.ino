#include <IRremote.h>

//déclaration des variables
int pinBouton;
int pinLed1, pinLed2;

IRsend irsend;

void setup()
{
  Serial.begin(9600);

  pinBouton = 2;
  pinLed1 = 9;
  
  //définition des modes
  pinMode(pinBouton, INPUT); //mode lecture pour le bouton
  pinMode(pinLed1, OUTPUT); //mode écriture pour led1


}
void loop()
{
  //lecture de l'état du bouton et stockage dans etatBouton
  boolean etatBouton = digitalRead(pinBouton);
  //test des conditions
  if (etatBouton==HIGH)//test si bouton appuyé
  {

    irsend.sendNEC(0xC1AA09F6, 32);
  }
  if (etatBouton==LOW)//test si bouton levé
  {

    
  }
  delay(100); //petite attente
}
