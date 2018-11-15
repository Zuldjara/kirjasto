/*
 * Ritari ässän teemoilla mennään, eli perkele otetaa 6x lediä
 * ja vedetää sellasella rytmillä että tulee Hasselhoffit mieleen.
 */

 #ifndef ritari_h
 #define ritari_h
 
 #include "Arduino.h"

  class ritari
  {
    public:
      ritari(int pin);
      void dot();
      void dash();

      private:
        int _pin;
  };

  #endif

  
