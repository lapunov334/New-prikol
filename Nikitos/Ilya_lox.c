#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n,i,a[101],j,temp,temp1,ans,cur,b[101];

int main () {

    scanf("%d",&n);

    for(i=1; i<=n; i++) scanf("%d", &a[i]);

    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                temp1=a[j];
                a[i]=temp1;
                a[j]=temp;
            }
        }
    }

    int anss=0;

    for(i=1; i<=n; i++)
    {
        if(a[i]>=1) {ans++; b[ans]=a[i];}
        if(a[i]==0) anss++;
    }

    for(i=1; i<=ans; i++)
    {
        for(j=i+1; j<=ans; j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                temp1=b[j];
                b[i]=temp;
                b[j]=temp1;
            }
        }
    }

    int save=0;

    for(i=1; i<=n; i++)
    {
        if(a[i]>=0) {save=i; break;}
    }

    cur=1;

    for(i=save; i<=n-anss; i++)
    {
        a[i]=b[cur];
        cur++;
    }

    for(i=1; i<=n-anss; i++) printf("%d ", a[i]);

    for(i=1; i<=anss; i++) printf("0 ");

    printf("\n");

}
