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
        print11(n);
    }

    

    return 0;
}