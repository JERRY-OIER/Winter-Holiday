
#include <iostream>

#include<cstring>

#include<stdio.h>

using namespace std;

int main()

{

    char a[255],b[255][255]={};

    gets(a);

    int l=strlen(a),d=0;

    for(int i=0,j=0;i<l;i++,j++)

    {

        if(a[i]==' '){d++;j=-1;continue;}

        b[d][j]=a[i];

    }

    for(int i=d;i>=0;i--)cout<<b[i]<<" ";

    return 0;

}
