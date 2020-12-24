#include<stdio.h>

void main(){
FILE * fp;
fp =fopen("tt.txt","w");
for(int i=0;i<10;i++){
	for(int j = 0 ; j<10;j++){
		fprintf(fp,' ');
		}
	fprintf(fp,"\n");
	}
fclose(fp);
}
