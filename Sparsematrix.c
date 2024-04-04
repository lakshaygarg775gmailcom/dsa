#include<stdio.h>
int main()
{
 int m[4][5]={0,0,1,0,0,0,10,6,0,0,0,0,3,0,0,0,0,5,0,0};
 int row,col,i,j,k,nonzero;
 int sm[][3]={0};
 k=1;
 row=4;
 col=5;
 for(i=0;i<row;i++)
  {
    for(j=0;j<col;j++)
    {
        printf("%d/t",m[i][j]);
    }
    printf("\n");
  }
  nonzero=0;
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
    {
        if(m[i][j]!=0)
        nonzero++;
    }
    printf("\n");
  }
  sm[0][0]=row;
  sm[0][1]=col;
  sm[0][2]=nonzero;
  for(i=0;i<row;i++)
  {
     for(j=0;j<col;j++)
    {
        if(m[i][j]!=0)
    {
        sm[k][0]=i;
        sm[k][1]=j;
        sm[k][2]=nonzero;
        k++;
    }
    }
  }
}

    


    