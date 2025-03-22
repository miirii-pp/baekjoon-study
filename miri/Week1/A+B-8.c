#include <stdio.h>
int main(){
    int n,a[1000],b[1000],c[1000];
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%d %d", &a[i], &b[i]);
        c[i] = a[i]+b[i];
    }
    for(int i=0; i<n; ++i){
        printf("Case #%d: %d + %d = %d\n",i+1, a[i], b[i], c[i]);
    }

    return 0;
}
