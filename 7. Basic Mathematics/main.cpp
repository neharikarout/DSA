#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

// Count primes  
//        Naive approach  - T.C = O(n^2)

// bool isPrime(int n)
// {
//     if(n<=1) return 0;
//     for(int i=2; i<n ; i++)
//     {
//         if(n%i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int countPrimes(int n)
// {
//     int count = 0;
//     for(int i=2; i<n; i++ )
//     {
//         if(isPrime(i))
//         {
//             ++count;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout<< " Enter n"<<endl;
//     cin>> n;

//     int count = countPrimes(n);
//     cout<<count;

//  return 0;
// }


//      OPTIMIZED APPROACH  - T.C = O(nsqrt(n))

//Count primes

// bool isPrime(int n)
// {
//     if(n<=1) return 0;
//     int sqrtN = sqrt(n);
//     for(int i=2; i<sqrtN ; i++)
//     {
//         if(n%i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int countPrimes(int n)
// {
//     int count = 0;
//     for(int i=2; i<n; i++ )
//     {
//         if(isPrime(i))
//         {
//             ++count;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int n;
//     cout<< " Enter n"<<endl;
//     cin>> n;

//     int count = countPrimes(n);
//     cout<<count;

//  return 0;
// }



//            More optimized approach - Sieve of eratosthenes


int countPrime(int n)
{
    if(n == 1) return 0;

    vector<bool> prime(n,true); // all are marked prime
    prime[0] = prime[1] = false;

    int ans = 0;

    for(int i=0; i<n ; i++)
    {
        if(prime[i])
        {
            ans++;

            int j= 2*i;
            while(j<n)
            {
                prime[j] = false;
                j+=i;
            }
        }
    }

    return ans;


    

}