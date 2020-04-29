#include<stdio.h>
/*
参考https://www.cnblogs.com/Triomphe/p/8749067.html
有所修改，中文占据两个字符长度
*/

#define Word_IN 1   /* 在单词内*/
#define Word_Out 0  /* 在单词外*/
#define MaxWordLen 15   //一个单词的最大长度

void vertical(int a[], int n)
{
    //1.寻找直方图最大值
    int i, j, max = 0;
    for (i = 0; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    //2.值为0的不打印
    //外循环打印 y轴  高度
    //内循环打印 x轴
    for (i = max; i > 0; --i) {     //从值最大的开始打印
        for (j = 0; j < n; ++j) {
            if (a[j] != 0) {    //如果值为0,说明不存在此长度的单词,不打印
                if (a[j] >= i) {
                    printf("**  ");
                }
                else {
                    printf("    ");
                }
            }
        }
        printf("\n");
    }
    //打印单词的长度
    for (j = 0; j < n; ++j) {
        if (a[j] != 0) {
            printf("%-4d", j + 1);
        }
    }
    printf("\n");
    //打印各个单词长度的个数
    for (j = 0; j < n; ++j) {
        if (a[j] != 0) {
            printf("%-4d", a[j]);
        }
    }
}

main()
{
    int c, i, j, wordLength = 0;
    int overflowWord = 0;   //单词长度超过单词的最大长度的个数
    //存放不同长度的单词个数. 单词长度为1的存放在 wordGraph[0]
    int wordGraph[MaxWordLen] = { 0 };

    int state = Word_Out;    //初始在单词外
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\t' || c == '\n') 
        {
            if (state == Word_IN) 
            {    //遇到空格和制表符判断是否在单词内
                if (wordLength <= MaxWordLen) 
                {
                    wordGraph[wordLength - 1]++;
                    state = Word_Out;
                }
                else 
                {
                    ++overflowWord;
                }
                wordLength = 0;   //清除单词的长度,为统计下一个单词做准备.
            }
        }
        else 
        {
            state = Word_IN;
            ++wordLength;   //在单词内,单词长度+1
        }
    }
    //调用函数
    vertical(wordGraph, MaxWordLen);
    printf("\nThe overflow wrod num is:%d", overflowWord);
}
