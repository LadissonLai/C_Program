#include <stdio.h>

int main()
{
    int x = 19;
    double y = 12.3456789;
    char ch = 'k';

    scanf("%*d%d%lf%c",&x,&y,&ch);//sacnf中间没有空格，%*d表示扫描所有int的输入，但是不保存

    printf("x=%d,y=%f,ch=%c\n",x,y,ch);
    printf("x=%-5d,y=%-10.3f,ch=%c\n",x,y,ch);  //%*-5d表示左对齐，
    printf("x=%-5d,y=%-*.3f,ch=%c\n",x,x,y,ch);
    printf("%f",y);

    return 0;
}
