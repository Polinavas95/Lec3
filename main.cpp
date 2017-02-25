#include <iostream>

void foo(){
    static int i = 5;

    i++;
    printf("%d\n",i);
}

int main() {
    foo();
    printf("+++++++++++\n");
    foo();
    printf("+++++++++++\n");
    foo();
    printf("+++++++++++\n");

    return 0;
}