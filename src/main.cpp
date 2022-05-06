#include "include/perpan.hpp"
#include <iostream>

using namespace std;

int main()
{
   
    while(1)
    {
        int dex;
    persegipanjang p1(1,2,3,4),p2(5,6,7,8),p3(9,10,11,12),pP3(6,5,8,4), pP4(15,7,6,4);

    cout << "Pilih Menu: " << endl;
    cout << "1. Contoh penggunaan operator overloading +" << endl;
    cout << "2. Contoh penggunaan operator overloading -" << endl;
    cout << "3. Contoh penggunaan operator overloading ==" << endl;
    cout << "4. Contoh penggunaan operator overloading ++" << endl;
    cout << "5. Contoh penggunaan operator overloading --" << endl;
    cout << "6. Contoh penggunaan operator overloading []" << endl;
    cout << "0. Exit Program" << endl;
    cin >> dex ;

   switch(dex)
   {
       case 1:
       {
           cout << "Sebelum :\n" << endl;
           p1.print();
           p2.print();
           persegipanjang temp_l(0,0,0,0);
           temp_l = p1 + p2;
            cout << "Sesudah dijumlah :\n" << endl;
           temp_l.print();
           
        break;
       }

        case 2:
        {
            cout << "Sebelum :\n" << endl;
            p1.print();
            p2.print();
            persegipanjang temp_a(0,0,0,0);
            temp_a = p1 - p2;
            cout << "Sesudah dikurang :\n" << endl;
            temp_a.print();
        break;
        }

        case 3 :
        {
            if(p1==p2)
            {
                cout <<"persegi panjang saling beririsan"<< endl;
            }
            else
            {
                cout << "persegi panjang tidak saling beririsan" << endl;
            }
            break;
        }

        case 4 :
        {
            cout << "sebelum :\n" << endl;
            p1.print();
            p1++;
            cout << endl << endl;
            cout << "sesudah :\n" << endl;
            p1.print();
        break;
        }

        case 5:
        {
            cout << "sebelum :\n" << endl;
            p1.print();
            p1--;
            cout << endl << endl;
            cout << "sesudah :\n" << endl;
            p1.print();

        break;
        }

        case 6:
        {
            p1.print();
            int lit;
            cout << "pilih nilai yang ingin di tampilkan :\n" <<  endl;
            cout << "1. Xmin" << endl;
            cout << "2. Ymin" << endl;
            cout << "3. Xmax" << endl;
            cout << "4. Ymax" << endl;
            
            cin >> lit;
            switch(lit)
            {
                case 1:
                {
                    cout << "Xmin :" << p1[1] << endl << endl;
                
                break;
                }

                case 2:
                {
                    cout << "Ymin :" << p1[2] << endl << endl;
                break;
                }
                
                case 3:
                {
                    cout << "Xmax :" << p1[3] << endl << endl;
                break;
                }

                case 4:
                {
                    cout << "Ymax :" << p1[4] << endl << endl;
                break;
                }

                default:
                {
                    cout << "Wrong input" << endl;
                break;
                }

            }
        break;
        }
             case 0:
             {
                 return 0;
                 break;
             }
    
    }
    }
    return 0;
}
