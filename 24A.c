#include<stdio.h>
#include<stdlib.h>

	int main(){
int n,l,l2,l3,u,v,w,cw=0,temp,temp2,ccw=0,pre=0,crt=1;
scanf("%d",&n);
int ** arr = (int **)malloc(sizeof(int *)*n);
		for(l=0;l<n;l++)arr[l] = (int *)calloc(4,sizeof(int));
		for(l=0;l<n;l++){
scanf("%d %d %d",&u,&v,&w);
		if(arr[u-1][0] == 0){arr[u-1][0] = v;arr[u-1][2]=w;}
		else{arr[u-1][1] = v;arr[u-1][3]=w;}
		if(arr[v-1][0] == 0){arr[v-1][0] = u;arr[v-1][2]=-1;}
		else{arr[v-1][1] = u;arr[v-1][3]=-1;}
				}
l=0;
		//if((arr[l][2]>0)?(temp=2):((arr[l][3]>0)?(temp=3):0)){

		do{
printf("crt: %d %d\n",crt,cw);
		if((arr[l][2]>0) || (arr[l][3]>0)){
		if((arr[l][2]<0) || (arr[l][3]<0)){
(arr[l][0] == pre)?(temp2=1):((arr[l][1] == pre)?(temp2=0):0);
if(arr[l][temp2+2]<0)
{(arr[arr[l][temp2]-1][0] == crt)?(ccw += arr[arr[l][temp2]-1][2]):(ccw += arr[arr[l][temp2]-1][3]);printf("ccw1\n");}
else if(arr[l][temp2+2]>0)
{(cw += arr[l][3]);printf("cw1\n");}
temp = temp2 + 2;
						  }
		if((arr[l][2]>0)&&(arr[l][3]>0))
{(pre == arr[l][0])?(temp = 3):(temp = 2);cw += arr[l][temp];printf("cw2\n");}
pre=l+1;crt=arr[l][temp-2];
								     }
		else if((pre == arr[l][0])?(temp = 3):(temp = 2))
{(arr[arr[l][temp-2]-1][0] == crt)?(ccw += arr[arr[l][temp-2]-1][2]):(ccw += arr[arr[l][temp-2]-1][3]);pre=l+1;crt=arr[l][temp-2];printf("ccw2\n");}
//proto	(arr[next][0] == pre)?(ccw += arr[next][2]):(ccw += arr[next][3]);
l=crt-1;
		}while(crt != 1);

//test
for(l=0;l<n;l++){
for(l2=0;l2<4;l2++){printf("%d ",arr[l][l2]);}
printf("\n");}
//test
printf("cw: %d\n",cw);
printf("ccw: %d\n",ccw);
return 0;
		  }
