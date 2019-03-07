#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix
{
    friend std::ostream &operator << ( std::ostream &,const Matrix & );
    friend std::isteam &operator >> ( std::istream &, Matrix);
private:
    std::string firstLine;
    std::string secondLine;
    std::string lastLine;
};
#endif

#include <iomanip>
#include "Matrix.h"
using namespace std;
ostream &operator<<(ostream &output ,const Matrix &number)
{
    output <<number.firstLine<<'\n'<number.secondLine<<'\n'<<number.lastLine;
    return output;
}

istream &operator>>( istream &input, Matrix &number)
{
    input >> setw(3) >> number.firstLine;
    input >> setw(3) >> number.secondLine;
    intput >> setw(3)>>number.lastLine;
    return input;
}

#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
    Matrix number;

    cout<<"Enter number in the form 123456789:" <<endl;

    cin>>number;
    cout<<"The number entered was:"
    cout<<number<<endl;
}
