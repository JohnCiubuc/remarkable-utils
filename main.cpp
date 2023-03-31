#include <iostream>
#include "devinput.h"
using namespace std;

devinput * dev = new devinput;

int main(int argc, char *argv[])
{

    dev->process();
    cout << "test\n";
    return 0;
}
