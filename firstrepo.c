#include <stdio.h>
int main(){
    int num;
    printf("This is my ");
    scanf("%d", &num);
    if(num==1 | num == 21 | num == 31 | num == 41 | num == 51){
        printf("st");
    }
    else if(num ==3 | num ==23 |  num ==33 |num ==43 | num ==53){
        printf("rd");
    }
    else if(num ==2 | num ==22 |  num ==32 |num ==42 | num ==52){
        printf("nd");
    }
    else {
        printf("th");
    }
    printf(" number");
}