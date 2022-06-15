#include<bits/stdc++.h>
using namespace std;
class LowerTriangular
{
private:
    int *A;
    int n;
public:
    LowerTriangular()
    {
        n=2;
        A=new int[2];
    }
    LowerTriangular(int n)
    {
        this->n=n;
        A=new int[n];
    }
    ~LowerTriangular()
    {
        delete []A;
    }
    void Set(int i, int j, int x);
    int  Get(int i, int j);
    void Display();
};

void LowerTriangular::Set(int i, int j, int x)
{
    if(i>=j)
    {
        A[i*(i-1)/2+j-1]=x;
    }
}

int  LowerTriangular::Get(int i, int j)
{
    if(i>=j)
    {
        return A[i*(i-1)/2+j-1];
    }
    return 0;
}
void LowerTriangular::Display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<A[i*(i-1)/2+j-1]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int d;
    cout<<"Enter Dimensions :- ";
    cin>>d;
    LowerTriangular lm(d);
    int x;
    cout<<"Enter all elements :- ";
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }
    }
    cout<<"\n"<<"\n";
    lm.Display();
}