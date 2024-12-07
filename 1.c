#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int user_number,computer_number;
    // لتغيير الرقم العشوائي في كل محاولة
    srand(time(0));
    computer_number=(rand()%100)+1;
    //انشاء رقم عشوئي 
    printf("Hello to game of Number Guessing Game : \n");
    
    while(1){
        printf("choose a Number between 1 to 100 !!!!\n ");
        scanf("%d",&user_number);
        if (user_number==computer_number){
            printf ("YOU WON IT IS %d ",user_number);
            break;
        }
        else if (user_number<computer_number){
            printf("the guess is too low \n guess again\n");
        }
        else {
             printf("the guess is too high \n guess again\n");
        }
            
        }
        
    
    return 0;
    
}