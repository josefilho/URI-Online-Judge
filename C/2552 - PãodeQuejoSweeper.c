#include<stdio.h>

int main()
{
    int N=0,M=0, i,j;
    while(scanf("%d%d", &N, &M) == 2){
        int a[N][M];
        for(i=0;i<N;i++){
            for(j=0;j<M;j++) scanf("%d", &a[i][j]);
        }
        if(M==1){
            if(N==1){
                if(a[0][0]==1) printf("9\n");
                else printf("0\n");
            }
            else{
                for(i=0;i<N;i++){
                    int sum=0;
                    if(i!=N-1){
                        if(a[i][0]==1) printf("9\n");
                        else{
                            if(a[i+1][0]==1) sum+=1;
                            printf("%d\n", sum);
                        }

                    }
                    else{
                        if(a[i][0]==1) printf("9\n");
                        else{
                            if(a[i-1][0]==1) sum+=1;
                            printf("%d\n", sum);
                        }
                    }
                }
            }
        }
        else if(M==2){
            if(N==1){
                //int sum=0;
                if(a[0][0]==1) printf("9");
                else{
                    if(a[0][1]==1) printf("1");
                    else printf("0");
                }
                if(a[0][1]==1) printf("9");
                else{
                    if(a[0][0]==1) printf("1");
                    else printf("0");
                }
                printf("\n");
            }
            else{
                for(i=0;i<N;i++){
                    for(j=0;j<M;j++){
                        int sum=0;
                        if(a[i][j]==1) printf("9");
                        else{
                            if(j==0){
                                if(i==0){
                                    if(a[i][j+1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                }
                                else if(i==N-1){
                                    if(a[i][j+1]==1) sum+=a[i][j+1];
                                    if(a[i-1][j]==1) sum+=a[i-1][j];
                                }
                                else{
                                    if(a[i][j+1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=a[i-1][j];

                                }
                            }
                            else{
                                if(i==0){
                                    if(a[i][j-1]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                }
                                else if(i==N-1){
                                    if(a[i][j-1]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=1;
                                }
                                else{
                                    if(a[i][j-11]==1) sum+=1;
                                    if(a[i+1][j]==1) sum+=1;
                                    if(a[i-1][j]==1) sum+=1;
                                }
                            }
                            printf("%d", sum);
                        }
                    }
                    printf("\n");
                }
            }
        }
        else{
            for(i=0;i<N;i++){
                for(j=0;j<M;j++){
                    int sum=0;
                    if(a[i][j]==1) printf("9");
                    else{
                        if(j==0){
                            if(i==0){
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i+1][j]==1) sum+=a[i+1][j];
                            }
                            else if(i==N-1){
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i-1][j]==1) sum+=a[i-1][j];
                            }
                            else{
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i-1][j]==1) sum+=a[i-1][j];
                                if(a[i+1][j]==1) sum+=a[i+1][j];
                            }
                        }
                        else if(j<M-1){
                            if(i==0){
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i+1][j]==1) sum+=a[i+1][j];
                                if(a[i][j-1]==1) sum+=a[i][j-1];
                            }
                            else if(i==N-1){
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i-1][j]==1) sum+=a[i-1][j];
                                if(a[i][j-1]==1) sum+=a[i][j-1];
                            }
                            else{
                                if(a[i][j+1]==1) sum+=a[i][j+1];
                                if(a[i+1][j]==1) sum+=a[i+1][j];
                                if(a[i][j-1]==1) sum+=a[i][j-1];
                                if(a[i-1][j]==1) sum+=a[i-1][j];
                            }
                        }
                        else{
                            if(i==0){
                                if(a[i][j-1]==1) sum+=a[i][j-1];
                                if(a[i+1][j]==1) sum+=a[i+1][j];
                            }
                            else if(i==N-1){
                                if(a[i][j-1]==1) sum+=a[i][j-1];
                                if(a[i-1][j]==1) sum+=1;
                            }
                            else{
                                if(a[i][j-1]==1) sum+=1;
                                if(a[i-1][j]==1) sum+=1;
                                if(a[i+1][j]==1) sum+=1;
                            }
                        }
                        printf("%d", sum);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
