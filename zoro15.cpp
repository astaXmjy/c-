#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string x;
    ofstream xout("zoro13.txt");
cout<<"Enter your name : ";
cin>>x;
xout<<x+" is your name";

xout.close();

ifstream xin("zoro13.txt");
string content;
xin>>content;
cout<<"The content of your file is : "<<content;

xin.close();


    return 0;
}
