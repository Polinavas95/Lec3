#include <iostream>

int main() {
    int8_t a = 5;     //00000101
    a=a>>1;
    printf("%d\n",a); //00000010
    a=a<<1;
    printf("%d\n",a); //00000100

    int8_t b = -128;
    b = b<<1;
    printf("%d\n",b);
    int8_t c = -128;    //при сдвиге вправо знак сохраняется
    c = c>>4;
    printf("%d\n",c);

   /*  //a=a+1
    printf("%d\n",++a);
    printf("%d\n",a++);*/

    return 0;
}