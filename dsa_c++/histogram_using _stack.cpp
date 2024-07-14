#include<bits/stdc++.h>
using namespace std;

int MaxRectangleArea(int a[],int n){
 int maxArea=0,tp,currentArea;
 stack<int> s;
 int i=0;
while (i<n)
{
    if (s.empty()||a[s.top()]<=a[i])
    {
        s.push(i++);
    }
    else
    {
        tp=s.top();
        s.pop();
        currentArea=a[tp]*(s.empty()?i:i-s.top()-1);

        if (maxArea<currentArea)
        {
            maxArea=currentArea;
        }
        
    }
    
}

while (!s.empty())
{
    tp=s.top();
    s.pop();
    currentArea=a[tp]*(s.empty()? i:i-s.top()-1);

    if (maxArea<currentArea)
    {
        maxArea=currentArea;
    }
    
}

 return maxArea;
}
    

int main(int argc, char const *argv[])
{
       int a[]={1,2,3,4,5};
       cout<<MaxRectangleArea(a,5);
    return 0;
}
