#include<bits/stdc++.h>

using namespace std;

void solidSquare(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void triangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Numeric Triangle 
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
void numericTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

// Numeric Triangle 2
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
void numericTriangle2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }    
}

// Inverted Triangle
// * * * * * *
// * * * * *
// * * * *
// * * *
// * * 
// *
void invertedTriangle(int n)
{
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }     
}

// Inverted Numeric Triangle
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1
void invertedNumericTriangle(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }  
}

//Full Pyramid
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
void fullPyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        // space's triangle
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }

        //for stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// Inverted full pyramid
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void invertedFullPyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        // space's triangle
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }

        //for stars
        for(int j=0;j<2*n - (2*i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }       
}

// Diamond
//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * * 
//   * * * * * * *
//     * * * * *
//       * * *
//         *
void diamond(int n)
{
    //upper half
    for(int i=0;i<n;i++)
    {
        // space's triangle
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }

        //for stars
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half
      for(int i=1;i<n;i++)
    {
        // space's triangle
        for(int j=0;j<i;j++)
        {
            cout<<"  ";
        }

        //for stars
        for(int j=0;j<2*n - (2*i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;  
    }  
}

// half diamond
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * 
// * * *
// * *
// *
void halfDiamond(int n)
{
    //upper half
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // lower half
     for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }   
}
// print 11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
void print11(int n)
{
    for(int i=0;i<n;i++)
    {
        int start =1;
          if(i%2 == 0) start = 1;
            else start = 0;
        for(int j=0;j<i+1;j++)
        {
            cout<<start<<" ";
            start = 1 - start;
        }
        cout<<endl;
    }

}

//print 12
// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1
void print12(int n)
{
    int space = 2*n -2;
    for(int i=0;i<n;i++)
    {
        // Ist triangle
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<" ";
        }

        // spaces
        for(int j=0;j<space;j++)
        {
            cout<<"  ";
        }

        // IInd triangle

        for(int j=i+1;j>0;j--)
        {
            cout<<j<<" ";
        }
     cout<<endl;
     space-=2;
    }
}

// pattern 13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
void print13(int n)
{
    int count = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

//Pattern 14
// A
// A B
// A B C
// A B C D
void print14(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char ch = 'A';ch <= 'A' + i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

//pattern 15
// A B C D E
// A B C D
// A B C
// A B
// A
void print15(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char j = 'A'; j<='A' + (n-i-1);j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

// pattern 16
// A
// B B
// C C C
// D D D D
// E E E E E
void print16(int n)
{
    for(int i=0;i<n;i++)
    {
        char ch ='A' + i;
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// alphabet palindromic pyramid
//         A
//       A B A
//     A B C B A 
//   A B C D C B A
// A B C D E D C B A
void alphabetPalindromicPyramid(int n)
{
    for(int i=0;i<n;i++)
    {
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }

        //characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++)
        {
            cout<<ch<<" ";
            if(j<=breakpoint)
            {
                ch++;
            }
            else{
                ch--;
            }
        }

        cout<<endl;
    }
}

//pattern 18
// E
// D E
// C D E
// B C D E
// A B C D E
void print18(int n)
{
    for(int i = 0; i<n;i++)
    {
       for(char ch = 'E' - i;ch<='E';ch++)
       {
         cout<<ch<<" ";
       }
        cout<<endl;
    }
}

// pattern 19
// * * * * * * * *
// * * *     * * *
// * *         * * 
// *             *
                
// *             *
// * *         * * 
// * * *     * * * 
void print19(int n)
{
    //upper half
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }

        for(int j=1;j<=2*i;j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }

        for(int j=0;j<2*(n-i);j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// butterfly
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * *     * * *
// * *         * * 
// *             *
void butterfly(int n)
{
    //upper half
    for(int i=1;i<=n;i++)
    {
        //stars
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        //spaces
           for(int j=0;j<2*(n-i);j++)
        {
            cout<<"  ";
        }

        //stars
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }

        for(int j=1;j<=2*i;j++)
        {
            cout<<"  ";
        }

        for(int j=1;j<=n-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

// hollow square
// * * * *
// *     *
// *     *
// * * * *
void hollowSquare(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || i==n-1)
            {
                cout<<"* ";
            }
            else{
                if(j==0 || j==n-1)
                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
         cout<<endl;
    }
}

// pattern 22
void print22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n - 2) - i;
            cout<<(n - min(min(top,down),min(left,right)))<<" ";
        }
        cout<<endl;
    }
}
        
int main()
{
    int t;
    cout<<" Enter no. of test cases:"<<endl;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        // solidSquare(n);
        // triangle(n);
        // numericTriangle(n);
        // numericTriangle2(n);
        // invertedTriangle(n);
        // invertedNumericTriangle(n);
        // fullPyramid(n);
        // invertedFullPyramid(n);
        // diamond(n);
        // halfDiamond(n);
        // print11(n);
        // print12(n);
        // print13(n);
        // print14(n);
        // print15(n);
        // print16(n);
        // alphabetPalindromicPyramid(n);
        // print18(n);
        // print19(n);
        // butterfly(n);
        // hollowSquare(n);
        print22(n);
    }

    

    return 0;
}