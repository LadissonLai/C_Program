#include <stdio.h>

int main()
{
    int x = 19;
    double y = 12.3456789;
    char ch = 'k';

    scanf("%*d%d%lf%c",&x,&y,&ch);//sacnf�м�û�пո�%*d��ʾɨ������int�����룬���ǲ�����

    printf("x=%d,y=%f,ch=%c\n",x,y,ch);
    printf("x=%-5d,y=%-10.3f,ch=%c\n",x,y,ch);  //%*-5d��ʾ����룬
    printf("x=%-5d,y=%-*.3f,ch=%c\n",x,x,y,ch);
    printf("%f",y);

    return 0;
}
