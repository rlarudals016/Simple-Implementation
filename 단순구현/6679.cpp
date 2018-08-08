#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    for(int i=2992;i<10000;i++){
        int suma=0,sumb=0,sumc=0;
        for(int j=i;j>0;j/=10)
            suma+=j%10;
        for(int j=i;j>0;j/=12)
            sumb+=j%12;
        for(int j=i;j>0;j/=16)
            sumc+=j%16;
        if(suma==sumb&&sumb==sumc)
            printf("%d\n",i);
    }
}
