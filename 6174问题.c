#include<stdio.h>
int main()
{
    int a,m,n,p,t,q,s[1000]={0},i,j,c,d,k,l=0,w=0;
    scanf("%d",&a);
    for(j=1;j<=1000;j++)
    {
    m=a/1000;
    n=(a/100)%10;
    p=(a%100)/10;
    q=a%10;
    for(i=1;i<=4;i++)
    {
        if(m>n){t=m;m=n;n=t;}
        if(n>p){t=n;n=p;p=t;}
        if(p>q){t=p;p=q;q=t;}
    }
    c=m*1000+n*100+p*10+q;
    for(i=1;i<=4;i++)
    {
        if(m<n){t=m;m=n;n=t;}
        if(n<p){t=n;n=p;p=t;}
        if(p<q){t=p;p=q;q=t;}
    }
    d=m*1000+n*100+p*10+q;
    k=d-c;
    s[l]=k;
    l++;
    for(j=0;j<l-1;j++)
    {
        if(s[j]==k)
        {
            w=1;
            printf("%d",k);
            break;
        }
    }
    a=k;
    if(w==1)break;
    }
    return 0;
}
