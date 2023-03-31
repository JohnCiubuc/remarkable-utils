#include <iostream>
#include "devinput.h"

devinput::devinput()
{

}

devinput::~devinput()
{

}

void devinput::process()
{
  // allocate resources using new here
  struct input_event ev;
  int fd, rd;

  //Open Device
  if ((fd = open ("/dev/input/event1", O_RDONLY|O_NONBLOCK)) == -1)
  {
    printf ("not a vaild device.\n");
    return;
  }

  bool bOnTablet = false;
  memset((void*)&ev, 0, sizeof(ev));
  while (!bStop)
  {

    rd = read (fd, (void*)&ev, sizeof(ev));
//%std::cout << (ev.code) << "\n";

    if (ev.code == evdev_pen::evcode_stylus_present)
    {
std::cout << (ev.value == 1 ? "Stylus Present" : "Stylus Left") << "\n";
    }
    else if (ev.code == evdev_pen::evcode_stylus_pressure)
    {
      if(ev.value > 600 )
      {
        if(!bOnTablet)
        {
          std::cout << "Pen is on the tablet\n";
        }
        bOnTablet = true;
      }
      else if (ev.value < 400 && bOnTablet)
      {
        bOnTablet = false;
        std::cout << "Pen left the tablet's surface";
      }

    }
  }
  std::cout << "finished\n";
}


