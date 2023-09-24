#include <iostream>
#include "MyString.h"

using namespace std;

int MyString::AmountOBJ = 0;


int main() {


    //MyString firstString("Hello, ");
    //MyString secondString("my friend!");

    ////firstString.Input(); //if you want
    //cout << "First string: ";
    //firstString.Print();
    //cout << endl;

    //cout << "First string length: " << firstString.MyStrLen() << endl;
    //cout << endl << endl;

    ////secondString.Input(); //if you want
    //cout << "Second string: ";
    //secondString.Print();
    //cout << endl;

    //cout << "Second string length: " << secondString.MyStrLen() << endl;

    ///*cout << "Copying the first line to the second..." << endl;
    //secondString.MyStrcpy(firstString);

    //cout << "Second line after copying: ";
    //secondString.Print();
    //cout << endl;*/
    //cout << endl << endl;

    //cout << "Concatenating strings..." << endl;
    //firstString.MyStrCat(secondString);

    //cout << "String after concatenation: ";
    //firstString.Print();
    //cout << endl;

    //cout << endl << endl;

    //cout << "Search for a substring 'my' in string: ";
    //if (firstString.MyStrStr("my"))
    //    cout << "Found" << endl;
    //else
    //    cout << "Not found" << endl;

    //cout << endl << endl;

    //cout << "Search for a symbol 'i' in string: ";
    //int position = firstString.MyChr('i');
    //if (position != -1)
    //    cout << "Symbol found at position " << position << endl;
    //else
    //    cout << "Symbol not found" << endl;

    //cout << endl << endl;

    //cout << "Deleting a symbol 'y' from the string......" << endl;
    //firstString.MyDelChr('y');

    //cout << "String after deleting: ";
    //firstString.Print();
    //cout << endl;

    //cout << endl << endl;

    //cout << "String comparison: ";
    //int comparisonResult = firstString.MyStrCmp(secondString);
    //if (comparisonResult == -1)
    //    cout << "firstString < secondString" << endl;
    //else if (comparisonResult == 1)
    //    cout << "firstString > secondString" << endl;
    //else
    //    cout << "firstString == secondString" << endl;

    //cout << endl << endl;
    // overloading []

    MyString overload1("Halo");
    cout << "Full text for overloading[]" << endl;
    overload1.Print();
    cout << endl << "Print element with index 2: " << overload1[2] << endl;

    cout << endl << endl;

    cout << endl << endl;

    // overloading  ()
    MyString overload2;
    cout << "Input: " << endl;
    overload2();
    cout << "Text for overloading()" << endl;
    overload2.Print();

    cout << endl << endl;

    cout << endl << endl;

    MyString overTask1("Hello");
    MyString result1 = overTask1 + 'A';
    cout << "obj + 'A'" << endl;
    result1.Print();

    cout << endl << endl;

    MyString overTask2("text");
    MyString result2 = 'A' + overTask2;
    cout << "'A' + obj" << endl;
    result2.Print();

    cout << endl << endl;

    MyString overTask3("text");
    MyString result3 = overTask3 + 10;
    cout << "obj + 10(A)" << endl;
    result3.Print();

    cout << endl << endl;

    MyString overTask4("text");
    MyString result4 = 10 + overTask4;
    cout << "10(A) + obj" << endl;
    result4.Print();

    cout << endl << endl;

    MyString task1("Well");

    MyString test1 = task1++;
    cout << "obj++: " << endl;
    test1.Print();

    cout << endl << endl;

    MyString task2("Null");

    MyString test2 = ++task2;
    cout << "++obj: " << endl;
    test2.Print();

    cout << endl << endl;
}
