#include<stdio.h>
int main(){
	int i,r,rev,t,a,b;
	scanf("%d%d", &a, &b);
	for(i=a;i<=b; i++){
    	t=i;
    	rev = 0;
    	while(t>0){
    		r=t%10;
    		rev=rev*10+r;
    		t=t/10;
}
    	if(rev==i)
    	printf("%d ",i);
	}
}