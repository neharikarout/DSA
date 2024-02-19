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


// Segmented sieve



// GCD/HCF

// int gcd(int a, int b)
// {
//     if(a==0)
//     {
//         return b;
//     }
//     if(b==0){
//         return a;
//     }

//     while(a>0 && b>0) 
//     {
//         if(a>b)
//         a = a-b;
//         else{
//             b=b-a;
//         }
//     }
//     return a==0 ? b : a;
// }

// // LCM - a*b/gcd(a,b)

// int lcm(int a,int b)
// {
//     int ans = (a*b)/gcd(a,b);

//     return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<" enter a"<<endl;
//     cin>>a;
//     cout<<"enter b"<<endl;
//     cin>>b;

//     int hcf = gcd(a,b);
//     int largestCommonfactor = lcm(a,b);

//     cout<<"HCF : "<<hcf<<" LCM : "<<largestCommonfactor<<endl;
// }


// Exponentiation

int slowExponentiation(int a, int b)
{
    int ans = 1;
    for(int i=0;i<b;i++)
    {
        ans*=a;
    }
    return ans;
}

int fastExponentiation(int a, int b)
{
    int ans = 1;
    while(b>0)
    {
        if(b & 1) // odd
        {
            ans*=a;
        }
        a = a*a;
        b>>=1; // b divided by 2
    }
    return ans;
}
int main()
{
    cout<<slowExponentiation(5,2);
    cout<<fastExponentiation(5,2);
}