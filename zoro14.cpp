#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string x;
    ifstream in("zoro13.txt");
    in>>x;
    getline(in,x);
    cout<<x;
    return 0;
}
