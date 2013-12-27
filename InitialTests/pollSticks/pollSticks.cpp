#include <stdio.h>
#include "SDL/SDL.h"
#include <stdint.h>
#include <unistd.h>

int main(void)
{
  printf("Example polling PS3 Joystick \r\n");

  int16_t x_val, y_val;
  SDL_Joystick *joy1;

  // Initialize the joystick subsystem
  SDL_InitSubSystem(SDL_INIT_JOYSTICK);


  // Check for joystick
  if(SDL_NumJoysticks()>0)
    joy1=SDL_JoystickOpen(0);
  
  printf("Name: %s\n", SDL_JoystickName(0));
  
SDL_JoystickEventState(SDL_ENABLE);
 

  while(1)
  {
    /*
    x_val = SDL_JoystickGetAxis(joy1, 6);
    y_val = SDL_JoystickGetAxis(joy1, 7);

    printf("x: %d \r\ny: %d \r\n",x_val,y_val);
    */
SDL_JoystickEventState(SDL_ENABLE);

    for (int8_t i=0;i<29;i++)
    {
     x_val = SDL_JoystickGetAxis(joy1, i);
     printf("Axis %d: %d \r\n",(i+1), x_val);
    }   
    
   sleep(1);
  } 
  
  return 0;
}
