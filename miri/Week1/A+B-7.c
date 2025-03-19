#include <stdio.h>
int main(){
    int T; // declare an array to store the number of cases
    scanf("%d",&T); // input the number of cases
    int sum[1000];// declare an array to store the sum of each case
    for(int i=0;i<T;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        sum[i]=a+b; // store the sum of each case in the array
    }
    for (int j=1;j<=T;j++){
        // 각 테스트 케이스마다 A+B를 출력한다.
        printf("Case #%d: %d\n",j, sum[j-1]); // output the sum of each case
    }
    return 0;
}
