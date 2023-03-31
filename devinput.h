
#ifndef DEVINPUT_H
#define DEVINPUT_H

#include <sys/file.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <linux/input.h>

class devinput
{

    enum evdev_pen
    {
        evtype_abs = 3,
        evcode_stylus_distance = 25,
        evcode_stylus_xtilt = 26,
        evcode_stylus_ytilt = 27,
        evcode_stylus_xpos = 1,
        evcode_stylus_ypos = 0,
        evcode_stylus_pressure = 24,
        evcode_stylus_present = 320

    };

public:
    explicit devinput();
    ~devinput();
    void process();
    bool bStop = false;

};

#endif // DEVINPUT_H
