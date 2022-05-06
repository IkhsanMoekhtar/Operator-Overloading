#include "include/perpan.hpp"
#include <iostream>
#include <stdlib.h>

using namespace std;

persegipanjang::persegipanjang()
{

}


persegipanjang::persegipanjang(float center_x, float center_y, float l, float w)
               
{
    this->xmin = center_x - l/2;
    this->ymin = center_y - w/2;

    this->xmax = center_x + l/2;
    this->ymax = center_y + w/2;
}

 bool persegipanjang::operator==(persegipanjang const &obj)
{
    if(this->xmin < obj.xmax && obj.xmin < this->xmax )
        if(this->ymin < obj.ymax && obj.ymin < this->ymax)
        return true;
    return false;
}

persegipanjang persegipanjang::operator+(persegipanjang const &obj)
{

    
    float l,w,Cdx,Cdy;
    persegipanjang temp(0,0,0,0);
    if(*this==obj)//same variable or not?
    {

        //update x
        temp.xmin = min(this->xmin, obj.xmin);
        temp.xmax = max(this->xmax, obj.xmax);

        //update y
        temp.ymin = min(this->ymin,obj.ymin);
        temp.ymax = max(this->ymax,obj.ymax);

        l = abs(temp.xmax - temp.xmin);
        w = abs(temp.ymax - temp.ymin);

        Cdx = temp.xmin + l/2;
        Cdy = temp.ymin + l/2;

    }
    else
    {
        cout << "Proses tidak dapat dilakukan dikarenakan persegi panjang tidak beririsan" << endl;
    }
        return temp;
}

persegipanjang persegipanjang::operator-(persegipanjang const &obj)
{
    if(*this == obj)
    {
        persegipanjang temp(0,0,0,0);

        //update x
        temp.xmin = max(this->xmin,obj.xmin);
        temp.xmax = min(this->xmax,obj.xmax);

        //update y
        temp.ymin = max(this->ymin,obj.ymin);
        temp.ymax = min(this->ymax,obj.ymax);

        return temp;
    }
    else
    {
        cout << "wrong data input" << endl;
    }
    
}

void persegipanjang::operator++()
{
    float temp_l,temp_w,CDx,CDy;

    // get length and weight of square
    temp_l = this->xmax - this->xmin;
    temp_w = this->ymax - this->ymin;

    CDx = this->xmax - temp_l/2;
    CDy = this->ymax - temp_w/2;

    //double the size
    temp_l *=2;
    temp_w *=2;

    this->xmin = CDx - temp_l/2;
    this->ymin = CDy - temp_w/2;

    this->xmax = CDx + temp_l/2;
    this->ymax = CDy + temp_w/2;
    
}
void persegipanjang::operator++(int)
{
    float temp_l,temp_w,CDx,CDy;

    // get length and weight of square
    temp_l = this->xmax - this->xmin;
    temp_w = this->ymax - this->ymin;

    CDx = this->xmax - temp_l/2;
    CDy = this->ymax - temp_w/2;

    //double the size
    temp_l *=2;
    temp_w *=2;

    this->xmin = CDx - temp_l/2;
    this->ymin = CDy - temp_w/2;

    this->xmax = CDx + temp_l/2;
    this->ymax = CDy + temp_w/2;
    
}


void persegipanjang::operator--()
{
    float temp_l,temp_w,CDx,CDy;

    //get length and weight
    temp_l = this->xmax - this->xmin;
    temp_w = this->ymax - this->ymin;

    //get center dot
    CDx = this->xmax - temp_l/2;
    CDy = this->ymax - temp_w/2;

    //operator --
    temp_l /=2;
    temp_w /=2;

    //get min dot
    this->xmin = CDx - temp_l/2;
    this->ymin = CDy - temp_w/2;

    //get max dot
    this->xmax = CDx + temp_l/2;
    this->ymax = CDy + temp_w/2;
}
void persegipanjang::operator--(int)
{
    float temp_l,temp_w,CDx,CDy;

    //get length and weight
    temp_l = this->xmax - this->xmin;
    temp_w = this->ymax - this->ymin;

    //get center dot
    CDx = this->xmax - temp_l/2;
    CDy = this->ymax - temp_w/2;

    //operator --
    temp_l /=2;
    temp_w /=2;

    //get min dot
    this->xmin = CDx - temp_l/2;
    this->ymin = CDy - temp_w/2;

    //get max dot
    this->xmax = CDx + temp_l/2;
    this->ymax = CDy + temp_w/2;
}



float persegipanjang::operator[](int dex )
{

switch (dex)
    {
        case 1:
        return this->xmin;
        break;

        case 2:
        return this->ymin;
        break;

        case 3:
        return this->xmax;
        break;

        case 4:
        return this->ymax;
        break;

        default:
        break;
    }

    
}

void persegipanjang::print()
{
    float center_x,center_y,l,w;
    l = this->xmax - this->xmin;
    w = this->ymax - this->ymin;

    center_x = this->xmax - l/2;
    center_y = this->ymax - w/2;

    cout << "Data persegi panjang :"<< endl;
    cout << "Sb-x titik tengah : " << center_x << endl;
    cout << "Sb-y titik tengah : " << center_y << endl;
    cout << "Panjang : " << l << endl;
    cout << "lebar : " << w << endl;
    cout << "Xmin : " << xmin << endl;
    cout << "Ymin : " << ymin << endl;
    cout << "Xmax : " << xmax << endl;
    cout << "Ymax : " << ymax << endl << endl; 

}