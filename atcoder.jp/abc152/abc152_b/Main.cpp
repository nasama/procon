#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
char in[110];
int main(){
    int a,b;scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++)in[i]='0'+a;
    string L=in;
    for(int i=0;i<a;i++)in[i]='0'+b;
    string R=in;
    printf("%s\n",min(L,R).c_str());
}