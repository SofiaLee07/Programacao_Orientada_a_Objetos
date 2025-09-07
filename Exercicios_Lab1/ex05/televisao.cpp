#include "televisao.h"

void Televisao::AumentaVolume()
{
    if (this->volume < 100) {
        ++this->volume;
    }
}

void Televisao::DiminuiVolume()
{
    if (this->volume > 0) {
        --this->volume;
    }
}

void Televisao::setVolume(int v)
{
    if (v < 0)   v = 0;
    if (v > 100) v = 100;
    this->volume = v;
}

void Televisao::AumentaCanal()
{
    if (this->canal < 75) {
        ++this->canal;
    }
}

void Televisao::DiminuiCanal()
{
    if (this->canal > 0) {
        --this->canal;
    }
}

void Televisao::setCanal(int c)
{
    if (c < 0)   c = 0;
    if (c > 75)  c = 75;
    this->canal = c;
}
