/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
float vlrtp,vlrdp,vlrpcd;

cout<<"Insira o valor total do produto:"<<endl;
cin>>vlrtp;

vlrdp= vlrtp*0.25;
//Para alterar a % de desconto , altere o valor de 0.25 (corresponde a 25%).
cout<<"Valor de desconto do produto: "<<vlrdp<<endl;

vlrpcd= vlrtp-vlrdp;

cout<<"Valor do produto com desconto incluido : "<<vlrpcd<<endl;


    return 0;
}


