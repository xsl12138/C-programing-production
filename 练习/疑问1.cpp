 #include<stdio.h>
int main(void)
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("�����������ı�����������Ctrl+z������\n");
    while((c = getchar())!= EOF){  //��c=getchar()������岻����������������������numline����ԶΪ0����why����
        numchar++;
        if(c == '\n')
            numline++;
    }
    printf("�ַ���:%d,", numchar);
    printf("����:%d", numline);
    return 0;
}