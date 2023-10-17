#include<iostream>
#include<map>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
     map<string,int> m;

    // insert method 1 
    pair<string,int> a("Archika",1);
    m.insert(a);

    // insert method 2
    m["kartikey"] = 2;

    // print method 1
    cout<<m["kartikey"]<<endl;

    cout<<m["Archika"]<<endl;

    unordered_map<int,string>k;

    k[1]="baby ";
    k[2]="i ";
    k[3]="love ";
    k[4]="you";

    cout<<k[1]<<k[2]<<k[3]<<k[4];

    // size of map

    cout<<endl<<m.size();
    cout<<endl<<k.size();

    // count 

    cout<<endl<<m.count("Archika");

    cout<<endl<<k.count(3);

    // Delete or erase  

    m.erase("kartikey");

     cout<<endl<<m.size();
    cout<<endl<<k.size();
    cout<<endl;

    // for Traversing map ->

    // METHOD 1 :
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;

    }
   cout<<endl;
    for(auto j:k)
    {
        cout<<j.first<<" "<<j.second<<endl;
    }

    
}