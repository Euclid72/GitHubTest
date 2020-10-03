// IKC Levent God.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double yuzeyAlani(double r, double h) {
    const double pi = 3.14159265358979323846;
    double sonuc = (((sqrt(2 * h * r - h*h)) * (h - r)) + (1 - ((acos((abs(h - r) / r))) / pi)) * pi * r * r);
    if (r < h) {
        return (((sqrt(2 * h * r - h * h)) * (h - r)) + (1 - ((acos((abs(h - r) / r))) / pi)) * pi * r * r);
    }
    else if(r > h) {
        return r*r*acos(abs(1-(h/r)))-sqrt(2*h*r-h*h)*(r-h);
    }
    else {
        return (pi * r * r) / 2;
    }
}

int main()
{
    double radius, height, length, volume;
    cout << "       ****Yatay Silindirde Yukseklige Bagli Alan Hesaplama Uygulamasi!****";
    cout << "\n Sizden dairenin yaricapini alalim; "; cin >> radius;
    cout << "\n Sizden suyun yuksekligini alalim; "; cin >> height;
    cout << "\n Sizden silindirin uzunlugunu alalim; "; cin >> length;
    volume = yuzeyAlani(radius,height) * length;
    cout << "\nSizin suyun hacmi " << volume << " birimkuptur. \n";
    cout << "Please type something to exit... \n";
    cin >> volume ;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
