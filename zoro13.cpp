#include<iostream>
#include<fstream>
#include<string>


using namespace std;

int main(int argc, char const *argv[])
{
    string s;
cout<<"enter the words which you want to print in an file : ";

    cin>>s;
    cout<<"\n";


    ofstream out("zoro13.txt");
    out<<s;
    return 0;
}
