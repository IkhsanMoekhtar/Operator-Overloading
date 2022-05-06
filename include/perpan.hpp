#ifndef __PERPAN_HPP__
#define __PERPAN_HPP__
#include <iostream>

using namespace std;

class persegipanjang
{
    private :

    float xmin,xmax,ymin,ymax;

    public :

    persegipanjang();
    persegipanjang(float dotx,float doty, float x, float y);
    bool operator==(persegipanjang const &);
    persegipanjang operator+(persegipanjang const &);
    persegipanjang operator-(persegipanjang const &);
    void operator++(int);
    void operator--(int);
    void operator++();
    void operator--();
    float operator[](int arr);
    void print();
};
#endif