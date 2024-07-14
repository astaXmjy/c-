#include<bits/stdc++.h>
using namespace std;

// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
   
int is_prime(int n)
{
    if (n<=1)
    {
        return 0;
    }
    for (int i = 2; i < sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            return 0;
        }
        
    }
    return 1;

}

int main(int argc, char const *argv[])
{     int n=7;
  if (is_prime(n))
  {
     cout<<"bagh bsdk";
  }
  else
  {
    cout<<"lele ";
  }

  SieveOfEratosthenes(n);
    return 0;
}
