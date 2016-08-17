/*
 * main.cpp
 * Author: Bartlomiej Styczen
 */
#include "vectors.h"
#include <cstdlib>

using std::cerr;

int main( void ) {
    try {
        Vector a;
        Vector b;
        Vector c;
        //writing data BEGIN
        cout << "Write data to vector a: ";
        cin >> a;

        cout << "Vector a: ";
        cout << a;

        cout << "Write data to vector b: ";
        cin >> b;

        cout << "Vector b: ";
        cout << b;
        //writing data END

        //testing functions
        c = a + b;
        cout << "\nC = A + B: " << c;

        c = a - b;
        cout << "\nC = A - B: " << c;

        c = a * 3;
        cout << "\nC = A * 3: " << c;

        c = 3 * a;
        cout << "\nC = 3 * A: " << c;

        cout << "\nA * B (scalar): " << a * b;
        cout << endl;

        c += b;
        cout << "\nC += B: " << c;

        c -= b;
        cout << "\nC -= B: " << c;

        c *= 6;
        cout << "\nC *= 6: " << c;

        b = a;
        cout << "\nB = A: " << b;

        int l = 0;
        cout << "\nA[0]: " << ( a[l] ) << "\n";

        cout << "A == B: " << (a == b) << "\n";

        cout << "A != B: " << (a != b) << "\n";
        system("pause");
    }
    //exceptions
    catch ( const char * s ) {
        cerr << s << endl;
        cerr << "Ending program\n";
        exit( EXIT_FAILURE );
    }

    catch ( std::bad_alloc & v ) {
        cerr << v.what() << endl;
        cerr << "Ending program";
        exit( EXIT_FAILURE );
    }


    return 0;
}
