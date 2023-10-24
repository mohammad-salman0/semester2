#include <stdio.h>
int main()
{ 

    int table [2][11];
    for (int i = 0 ; i< 3 ; i++){
        int n = 2;
         n++;
    for (int j =0 ;j <=10 ; j++ ){

        table[i][j]= n *j ;

    }
}
printf("the resulting array is :");
for (int s = 0 ; s< 3 ; s++){
for ( int p = 0 ; p <=10; p++ ){
printf("%d", table [s][p]);
}
}
}