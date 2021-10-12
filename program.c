#include <stdio.h>
int main(){
    for(int i = 0; i < 10; i++){
        if(i<=5){
            for(int j = 0; j < i; j++){
                putchar('*');
            }
        }
            else{
                int z = 5;
                int count = i-(z++);
                for(int j = 5-count; j>0; j--){
                    putchar('*');
                }
            }
        putchar('\n');
        }
    }

