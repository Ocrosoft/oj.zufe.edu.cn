#include<iostream>
#include<string>
using namespace std;
//this is c++ code,creat a new cpp project to test it
bool surrisingJudge(string str)         //1 is surprising
{
    int len,j,k,i;
    len=str.length();
    for(i=0;i<len;i++)
        for(j=i+1;j<len;j++)
            if(str.at(i)==str.at(j))
                for(k=1;k+j<len;k++)
                    if(str.at(i+k)==str.at(j+k))
                        return 0;
    return 1;
}

int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="*")
            return 0;
        if(surrisingJudge(str))
            cout<<str<<" is surprising."<<endl;
        else
            cout<<str<<" is NOT surprising."<<endl;
    }
}
