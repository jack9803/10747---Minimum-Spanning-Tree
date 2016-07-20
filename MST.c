#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int adj[1010][1010]={0};





int main(){

int T,i,N,M,j;
int src,dst,weight;
scanf("%d",&T);

for(i=0;i<T;i++){

    scanf("%d %d",&N,&M);

    for(j=0;j<M;j++){
        scanf("%d %d %d",&src,&dst,&weight);
        adj[src][dst]=weight;
    }






}





return 0;
}
