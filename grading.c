#include<stdlib.h>
#include<cstdio>
#include<bits/stdc++.h>

using namespace  std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;++i){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<n;++i){
        if(a[i]<38)
            printf("%d\n", a[i]);
        else if(a[i]<=40)
            printf("40\n");
        else if(a[i]>=43 && a[i]<=45)
            printf("45\n");
        else if(a[i]>=48 && a[i]<=50)
            printf("50\n");
        else if(a[i]>=53 && a[i]<=55)
            printf("55\n");
        else if(a[i]>=58 && a[i]<=60)
            printf("60\n");
        else if(a[i]>=63 && a[i]<=65)
            printf("65\n");
        else if(a[i]>=68 && a[i]<=70)
            printf("70\n");
        else if(a[i]>=73 && a[i]<=75)
            printf("75\n");
        else if(a[i]>=78 && a[i]<=80)
            printf("80\n");
        else if(a[i]>=83 && a[i]<=85)
            printf("85\n");
        else if(a[i]>=88 && a[i]<=90)
            printf("90\n");
        else if(a[i]>=93 && a[i]<=95)
            printf("95\n");
        else if(a[i]>=98 && a[i]<=100)
            printf("100\n");
        else
            printf("%d\n", a[i]);

    }


}
