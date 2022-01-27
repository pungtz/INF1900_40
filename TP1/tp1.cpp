#include <avr/io.h> 

//FONCTION DEBOUNCE?
bool boutonEnfonce(const uint8_t bouton)
{
    const uint8_t delai = ?????;

    if (PIND & (1 << bouton))
    {
        delay_ms(delai);

        if (PIND & bouton)
        {
            return true;
        }
    }
    return false;
}


int main()
{
  DDRA = 0xff; // PORT A est en mode sortie
  
  DDRD = 0x00; // PORT D est en mode sortie

  unsigned long compteur = 0;
  
  for(;;)  // boucle sans fin
  {
    while (PIND & 0x04) 
    {
      if (compteur % 2 == 1)
      {
        PORTA = 1 << 0;
      }

      else
      {
        PORTA = 1 << 1;
      }
      compteur++;
    }
  }  

  return 0; 
}



// int main()
// {
//   DDRA = 0b11; // PORT A est en mode sortie
  
//   DDRD = 0b00; // PORT D est en mode sortie

//   unsigned long compteur = 0;
  
//   while (PIND & 0x04) 
//   {
//     if (compteur % 2 == 1)
//     {
//       PORTA = 1 << 0;
//     }
    
//     else
//     {
//       PORTA = 1 << 1;
//     }
//     compteur++;
//   }
//   return 0; 
// }
