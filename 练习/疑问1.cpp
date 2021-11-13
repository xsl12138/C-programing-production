 #include<stdio.h>
int main(void)
{
    char c, numchar, numline;
    numchar = 0;
    numline = 0;
    printf("输入若干行文本，行首输入Ctrl+z结束。\n");
    while((c = getchar())!= EOF){  //若c=getchar()这个整体不用括号括起来，则行数（numline）永远为0。（why？）
        numchar++;
        if(c == '\n')
            numline++;
    }
    printf("字符数:%d,", numchar);
    printf("行数:%d", numline);
    return 0;
}