
#include<stdio.h>
#include<stdlib.h>

void countLiveNeighbours(size_t row, size_t col)
{       size_t val =0;
        size_t temp = 0;
	int n = -1%16;
	size_t config_ME = 16;
	size_t config_NE = 16;
        size_t cell_count = 0;
        for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++ ){
                        	if((int)row+i>=0 && (int)row+i<(int)config_NE && (int)col+j >= 0 && (int)col+j<(int)config_ME ){
				printf("a");
			}
			
			else if((int)row+i<0){ 
				if((int)col+j < 0){printf("b");}
				else if((int)col+j >= (int)config_ME){printf("c"); }
				else{ printf("d");}			
 			}
			else if((int)row+i>=(int)config_NE){
				if((int)col+j < 0){printf("e");}
				else if((int)col+j>=(int)config_ME){printf("f"); }
				else{printf("g");}
				}
			
			else if((int)col+i<0){
				if((int)row+i < 0){printf("h");}
				else if((int)row+i >= (int)config_NE){printf("i"); }
				else{ printf("j");}			
 			}
			else if((int)col+i>=(int)config_ME){
				if((int)row+i < 0){printf("k");}
				else if((int)row+i>=(int)config_NE){printf("l"); }
				else{printf("m");}
				}
			
                }
        }
}





void main()
{

countLiveNeighbours(16,0);
}
