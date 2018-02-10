#include <stdio.h>
#include <string.h>

using namespace std;

int cnt = 1;
int N;
int Nqueen[15][15]={};

void dfs(int n, int p){
    for(int j = 1; j <= n-1; j++){
        if((Nqueen[n-1-j][p] == -1) ||
            ((p-j >= 0) && Nqueen[n-1-j][p-j] == -1) ||
            ((p+j < N) && Nqueen[n-1-j][p+j] == -1)){   
                return;
            }
    }

    if(N == n){
        printf("%d\n", cnt);
        cnt++;
        for(int i = 0; i<N;i++){
            if (i==0) printf("[");
            for(int j=0;j<N;j++){
                if(Nqueen[i][j]==-1){
                    printf("%d ", j);
                }
            }
            if(i==N-1) printf("]");
        }
        printf("\n");
        return;
    }

    for(int i = 0; i<N; i++){
        Nqueen[n][i] = -1;
        dfs(n+1, i);
        Nqueen[n][i] = 0;
    }
}


int main(){
    printf("enter N's value : ");
    scanf("%d", &N);
    dfs(0, 0);
    return 0;
}