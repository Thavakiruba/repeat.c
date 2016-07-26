#include<stdio.h>
int main(){
  int a[10],s,i,j,flag=0;
  scanf("%d",&s);
  for(i=0;i<s;i++)
  scanf("%d",&a[i]);
  
  for(i=0;i<s;i++){
  for(j=i+1;j<s;j++){
  if(a[i]==a[j]){
  flag=1;
  break;
  }
  }
  if(flag==0){
  printf("%d",a[i]);
  break;
  }
  
  flag=0;
  }
  return 0;
  }
  
  
