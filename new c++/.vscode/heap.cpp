#include <bits/stdc++.h>
using namespace std;
class heap
{


public:
    vector<int> items;

    int getLeftChildIndex(int parentIndex)
    {
        return 2 * parentIndex + 1;
    }
    int getRightChildIndex(int parentIndex)
    {
        return 2 * parentIndex + 2;
    }
    int getParentIndex(int childIndex)
    {
        return (childIndex - 1) / 2;
    }
    bool hasLeftIndex(int Index)
    {
        return getLeftChildIndex(Index) < items.size();
    }
    bool hasRightIndex(int Index)
    {
        return getRightChildIndex(Index) < items.size();
    }

    bool hasParent(int Index)
    {
        return getParentIndex(Index) >= 0;
    }

    int leftChild(int Index)
    {
        return items[getLeftChildIndex(Index)];
    }

    int RightChild(int Index)
    {
        return items[getRightChildIndex(Index)];
    }

    int parent(int Index)
    {
        return items[getParentIndex(Index)];
    }

    void swap(int indexOne, int indexTwo)
    {
        int temp = items[indexOne];
        items[indexOne] = items[indexTwo];
        items[indexTwo] = temp;
    }

    int peek(){
        if(items.size()==0) return -1;
        return items[0];

    }

    int  poll(){
        if(items.size()==0) return -1;
        int item=items[0];
        items[0]=items[items.size()-1];
        items.pop_back();
        heapifyDown();
         return item;
    }
    void add(int item){
        items.push_back(item);
        heapifyUp();
    }
    void heapifyUp(){
        int index=items.size()-1;
        while(hasParent(index) and parent(index)>items[index]){
            swap(getParentIndex(index),index);
            index=getParentIndex(index);
        }
    }
    void heapifyDown(){
        int index=0;
        while(hasLeftIndex(index)){
            int smallerChildIndex=getLeftChildIndex(index);
            if(hasRightIndex(index) and RightChild(index)<leftChild(index)){
                smallerChildIndex=getRightChildIndex(index);
            }
            if(items[index]<items[smallerChildIndex])
            {
                break;
            }

            else{
                swap(index,smallerChildIndex);
            }
              index=smallerChildIndex;

        }
    }
};

int main(int argc, char const *argv[])
{

    int x=2;
    if(x==2) cout<<"chla ja bsdk"<<endl;
    if(x<2) cout<<"lnd ke apna kaam kr"<<endl;
    else{
        cout<<"madarchood"<<endl;
    }

    cout<<"Khatam tata bye bye"<<endl;

    return 0;
}
