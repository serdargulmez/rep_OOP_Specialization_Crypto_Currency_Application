//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

// character strings

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

// #include <iostream>

// using namespace std;

// int main()
// {
//     char greeting[6]={'H', 'e', 'l', 'l', 'o', '\0'};

//     cout << "Greeting message: ";
//     cout << greeting << endl;

//     return 0;
// }

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

// data types

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main()
// {
//     char c = 0;
//     cout << "char: " << sizeof(c) << endl;

//     unsigned int i = 0;
//     cout << "unsigned int: " << sizeof(i) << endl;
    
//     float f = 0.0f;
//     cout << "float: " << sizeof(f) << endl;

//     long double d = 0.0;
//     cout << "long double: " << sizeof(d) << endl;
// }

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

// data types

//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int a{-5};
    unsigned int b{+3};

    short c{-2};

    unsigned int short d{4};

    short int e(3);

    int short g{5};

    cout << "a: " << a << endl;
    cout << "type of a: " << sizeof(a) << endl;

    cout << "b: " << b << endl;
    cout << "type of b: " << sizeof(b) << endl;

    cout << "c: " << c << endl;
    cout << "type of c: " << sizeof(c) << endl;

    cout << "d: " << d << endl;
    cout << "type of d: " << sizeof(d) << endl;

    cout << "e: " << e << endl;
    cout << "type of e: " << sizeof(e) << endl;

    cout << "g: " << g << endl;
    cout << "type of g: " << sizeof(g) << endl;

    return 0;
}
