#include <iostream>
using namespace std;

int RozszerzonyEuklides(int a, int b) {
    
    int u = 1, v = 0, z = b, x = 0, y = 1, w = a;
    while (w!=0) {
        if (w < z) {
            int f = w;
            w = z;
            z = f;
            f = v;
            v = y;
            y = f;
            f = u;
            u = x;
            x = f;
        }
        int q = w / z;
        w = w - (q * z);
        v = v - (y * q);
        u = u - (q * x);
    }
    if (z == 1) {
        if (x < 0)
        {
            return x+b;
        }
        else {
            return x;
        }
    }
    else {
        cout << "Odwrotnosc modulo dla tego zestawu liczb nie istnieje";
        return NULL;
    }
    
}
int main()
{
    int a, b;
    cout << "Program wyznacza odwrotnosc modulo"; //równanie ---> (a * x) mod b = 1    rozszerzony algorytm euklidesa: a*u+b*v=w
    cout << "\nPodaj a: ";                                                                                    //       a*x+b*y=z       
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    int x = RozszerzonyEuklides(a, b);
    if (x!=NULL)
    {
        cout << "Wartosc odwroconego modulo liczb " << a << " i " << b << " wynosi: " << x;
    }

}
