#include<bits/stdc++.h>
using namespace std;
typedef int Elem; // base element type
class ArrayVector {
public:
ArrayVector(); // constructor
int size() const; // number of elements
bool empty() const; // is vector empty?
Elem& operator[ ](int i); // element at index
Elem& at(int i) ; // element at index
void erase(int i); // remove element at index
void insert(int i, const Elem& e); // insert element at index
void reserve(int N); // reserve at least N spots
// . . . (housekeeping functions omitted)
private:
int capacity; // current array size
int n; // number of elements in vector
Elem* A; // array storing the elements
};
ArrayVector::ArrayVector() // constructor
: capacity(0), n(0), A(NULL) { }
int ArrayVector::size() const // number of elements
{ return n; }
bool ArrayVector::empty() const // is vector empty?
{ return size() == 0; }
Elem& ArrayVector::operator[ ](int i) // element at index
{ return A[i]; }
// element at index (safe)
Elem& ArrayVector::at(int i)  {

return A[i];
}
void ArrayVector::erase(int i) { // remove element at index
for (int j = i+1; j < n; j++) // shift elements down
  A[j-1] = A[j];
n--; // one fewer element
}
void ArrayVector::reserve(int N) { // reserve at least N spots
if (capacity >= N) return; // already big enough
Elem* B = new Elem[N]; // allocate bigger array
for (int j = 0; j < n; j++) // copy contents to new array
B[j] = A[j];
if (A != NULL) delete [ ] A; // discard old array
A = B; // make B the new array
capacity = N; // set new capacity
}
void ArrayVector::insert(int i, const Elem& e) {
if (n >= capacity) // overflow?
reserve(max(1, 2 * capacity)); // double array size
for (int j = n - 1; j >= i; j--) // shift elements up
A[j+1] = A[j];
A[i] = e; // put in empty slot
n++; // one more element
}
int main(int argc, char const *argv[])
{
  
  return 0;
}
