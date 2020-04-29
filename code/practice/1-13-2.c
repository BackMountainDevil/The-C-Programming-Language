#include<stdio.h>
/*
�ο�https://www.cnblogs.com/Triomphe/p/8749067.html
�����޸ģ�����ռ�������ַ�����
*/

#define Word_IN 1   /* �ڵ�����*/
#define Word_Out 0  /* �ڵ�����*/
#define MaxWordLen 15   //һ�����ʵ���󳤶�

void vertical(int a[], int n)
{
    //1.Ѱ��ֱ��ͼ���ֵ
    int i, j, max = 0;
    for (i = 0; i < n; ++i) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    //2.ֵΪ0�Ĳ���ӡ
    //��ѭ����ӡ y��  �߶�
    //��ѭ����ӡ x��
    for (i = max; i > 0; --i) {     //��ֵ���Ŀ�ʼ��ӡ
        for (j = 0; j < n; ++j) {
            if (a[j] != 0) {    //���ֵΪ0,˵�������ڴ˳��ȵĵ���,����ӡ
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
    //��ӡ���ʵĳ���
    for (j = 0; j < n; ++j) {
        if (a[j] != 0) {
            printf("%-4d", j + 1);
        }
    }
    printf("\n");
    //��ӡ�������ʳ��ȵĸ���
    for (j = 0; j < n; ++j) {
        if (a[j] != 0) {
            printf("%-4d", a[j]);
        }
    }
}

main()
{
    int c, i, j, wordLength = 0;
    int overflowWord = 0;   //���ʳ��ȳ������ʵ���󳤶ȵĸ���
    //��Ų�ͬ���ȵĵ��ʸ���. ���ʳ���Ϊ1�Ĵ���� wordGraph[0]
    int wordGraph[MaxWordLen] = { 0 };

    int state = Word_Out;    //��ʼ�ڵ�����
    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\t' || c == '\n') 
        {
            if (state == Word_IN) 
            {    //�����ո���Ʊ���ж��Ƿ��ڵ�����
                if (wordLength <= MaxWordLen) 
                {
                    wordGraph[wordLength - 1]++;
                    state = Word_Out;
                }
                else 
                {
                    ++overflowWord;
                }
                wordLength = 0;   //������ʵĳ���,Ϊͳ����һ��������׼��.
            }
        }
        else 
        {
            state = Word_IN;
            ++wordLength;   //�ڵ�����,���ʳ���+1
        }
    }
    //���ú���
    vertical(wordGraph, MaxWordLen);
    printf("\nThe overflow wrod num is:%d", overflowWord);
}
