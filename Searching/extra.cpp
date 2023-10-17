#include<iostream>
using namespace std ;

int main()
{
int i, j, k;

for(i=1;i<=5;i++)
{
cout<<"*"<<endl;
}
cout<<endl;

for(i=1;i<=5;i++)
{
if (i<5)
{
cout<<"*"<<endl;
}
else
{
for(i=1;i<=5;i++)
{
cout<<"*";
}
}
}

cout<<endl;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)        
                cout << "*";            
            else
                cout << " ";
        }
        cout << endl;
    }
    cout<<endl;
   
    for(i=5;i>=1;i--)
{
for(k=1;k<=5-i;k++)
{
cout<<" ";
}
for(j=1;j<=(2*i)-1;j++)
{
if(j==1 || j==(2*i)-1)
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<endl;
}

    for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i==1 || i==3 || i==5 || j==1)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}

cout<<endl;

for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j==1 || j==5 || i==5)
cout<<"*";
else
cout<<" ";
}
cout<<endl;
}
}
