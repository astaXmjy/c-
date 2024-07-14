#include <iostream>
#include <vector>
using namespace std;
void dispaly(vector<int> &v1)
{
    for (int i = 0; i < v1.size(); i++)
    {
        cout<< v1[i]<<" ";

    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    /*vector<int> v1;
    int elem, size;
    cout << "Enter the size of vector you want : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element which you want to add in an vector: ";
        cin >> elem;
        v1.push_back(elem);
    }
    dispaly(v1);
v1.pop_back();
v1.push_back(23);
dispaly(v1);

vector<int>::iterator itr=v1.begin();
v1.insert(itr,4444);
dispaly(v1);*/

/*vector<pair<int,int>>v1;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y;
    v1.push_back({x,y});
}
dispaly(v1);*/


/* int N;
cout<<"Enter the no. of vec u want: ";
cin>>N;
vector<int> v[N];
for (int i = 0; i < N; i++)
{     int n;
  cout<<"Enter the no. of element you want in your vec : ";
  cin>>n;
    for (int j = 0; j < n; j++)
    {
        int x;
        cout<<"Enter the value u want to store : ";
        cin>>x;
        v[i].push_back(x);
    }
    
}
for (int i = 0; i < N; i++)
{
     dispaly(v[i]);
} */

// vector inside vector

vector<vector<int>> v;

int N;
cout<<"Enter the no. of vec u want: ";
cin>>N;
for (int i = 0; i < N; i++)
{     int n;
  cout<<"Enter the no. of element you want in your vec : ";
  cin>>n;
  vector<int> temp;
    for (int j = 0; j < n; j++)
    {
        int x;
        cout<<"Enter the value u want to store : ";
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
}
for (int i = 0; i < v.size(); i++)
{
    dispaly(v[i]);
}

cout<<"\n"<<v[0][1];

    return 0;
}
