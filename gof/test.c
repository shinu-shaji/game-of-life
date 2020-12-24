#include<stdio.h>
#include<stdlib.h>

void countLiveNeighbours(size_t row, size_t col)
{       size_t val =0;
        size_t temp = 0;
	size_t config_ME =16;
	size_t config_NE =16;
        size_t cell_count = 0;
        for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++ ){
                        size_t R =((row+i)%config_NE);
			size_t C =((col+j)%config_ME);
                        //int R = ((16)%(15));
			printf(" r : %d c : %d",(int)R,(int)C);

                }
                printf("\n");
        }
	//int t = 
	//printf(" r : %d",16%15);
}






void main()
{

countLiveNeighbours(0,0);
/* 
                size_t it = 0;
                size_t jt = 1;
                size_t i_0 = it * 32;
                size_t j_0 = jt * 16;
                // copy this community to each community in env to initialize it
                for (size_t i = 0; i != 32; ++i)
                {       printf("\n");
                        for (size_t j = 0; j != 16; ++j)
                        {
                                printf("i:%d  j:%d \n",(int)(i+i_0),(int)(j+j_0));
                        }
                }
*/ 
}                


