#include <stdio.h>
void prime_create(int);
int p[1024];/*prime number less than or equal to m in this seqence*/
int m;
int main(void){

  scanf("%d",&m);
  int i;
  prime_create(m);
  while (p[i]!=0){
    printf("%d\n",p[i]);
    i++;
  };

  return 0;
};


void prime_create(int m){
	p[0]=2;
	if (m==1){
		p[0]=0;	
	};
	int k;
	int j=0;
	for (k=2;k<=m;k++){
		int s;
		while ((p[s]!=0)&&(k%p[s]!=0)){
			s++;
		};
		if (p[s+1]==0){
			p[j]=k;
			j++;
		}else ;
		s=0;
	};
	
	return;
};
