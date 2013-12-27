#include <stdio.h>
#include "SDL/SDL.h"

int main(void)
{
 
  printf("Joystick Test \r\n");

  SDL_Joystick *joy;

  // Initialize the joystick subsystem
  SDL_InitSubSystem(SDL_INIT_JOYSTICK);

  // Check for joystick
  if(SDL_NumJoysticks()>0){
    // Open joystick
    joy=SDL_JoystickOpen(0);
  
    if(joy)
    {
      printf("Opened Joystick 0\n");
      printf("Name: %s\n", SDL_JoystickName(0));
      printf("Number of Axes: %d\n", SDL_JoystickNumAxes(joy));
      printf("Number of Buttons: %d\n", SDL_JoystickNumButtons(joy));
      printf("Number of Balls: %d\n", SDL_JoystickNumBalls(joy));
    }
    else
      printf("Couldn't open Joystick 0\n");
  
    // Close if opened
    if(SDL_JoystickOpened(0))
      SDL_JoystickClose(joy);
  }

  return 0;  
}
