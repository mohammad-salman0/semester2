#include<stdio.h>
int odd(int arr[]);
int main()
{

    int arr [] = {1,2,3,4,5,7,9};
    printf("%d",odd(arr));
}

int odd (int arr[]){
int oddcount = 0;
    for(int i = 0 ; i<8;i++){
    {if (arr[i]%2!=0)
    oddcount++;
    }
    }
    return oddcount;
}
