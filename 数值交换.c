#include <stdio.h>
int main(){
    int integer1, integer2;
    printf("请输入第一个数值：");
    scanf("%d",&integer1);
    printf("请输入第二个数值：");
    scanf("%d",&integer2);

    int temp1 =  integer1;
    integer1 = integer2;
    integer2 = temp1
    ;

    printf("数值1:%d\n",integer1);
    printf("数值2:%d\n",integer2);
    return 0;
}
