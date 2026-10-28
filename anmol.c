#include <stdio.h>

void main(){
    int arry[5] = {10,20,30,40,50};
    int i; 
    int found = 0;
    int search = 40;
    for(i=0;i<5;i++){
        if(arry[i]==search){
            found = 1;
        break;
        }
    }
    if(found ==1){
        printf("number found");
    }
    else{
        printf("not found");
    }
    return 0;
}








