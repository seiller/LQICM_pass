#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void use(int y){
    printf("y=%d\n",y);
}

int main(){
    int i=0,y=0;
    srand(time(NULL));
    int x=rand()%100;
    y=rand()%100;
    int n=rand()%1000;
    int x2=rand()%100;
    int z=0;
    while(i<n){
        z=y*y;
        use(z);
        y=x+x;
        use(y);
        i++;
    }
    return 42;
}
