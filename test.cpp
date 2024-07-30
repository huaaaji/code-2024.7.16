#include <iostream>
#include <algorithm>
using namespace std;

char a[60],b[60];
int len_a,len_b;
bool similar = true;

int main()
{
    cin.getline(a,50);
    cin.getline(b,50);
    int i = 0;
    while(a[i]!=0)
    {
        i++;
        len_a++;
    }
    i = 0;
    while(b[i]!=0)
    {
        i++;
        len_b++;
    }
    cout<<len_a<<len_b;
    int cont = 0;
    if (len_a==len_b)
    {
        for(int i=0;i<=len_a;i++)
        {
            if (a[i]!=b[i])
            {
                cont++;
            }
        }
        if (cont > 1){
            similar = false;
        }
    }
    else if(len_a-len_b>1||len_a-len_b<1){
        similar = false;
    }
    else {
        for (int i = 0,j = 0;i<=min(len_a,len_b);i++,j++){

            if(a[i])
        }
    }
    return 0;
}
bool compare(char a[],char b[])
{
    if
}