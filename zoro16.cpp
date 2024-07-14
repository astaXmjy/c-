#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
   // it is for writing into the file

    ofstream likho;

    likho.open("zoro13.txt");

    likho<<"This is me \n";
    likho<<"Ronoa Zoro";
    likho.close();

    // it is for reading from a file
 
  string x;
    ifstream pdho;
    pdho.open("zoro13.txt");
    while (pdho.eof()==0)
    {
        getline(pdho,x);
        cout<<x<<endl;
    }
    
    return 0;
}
