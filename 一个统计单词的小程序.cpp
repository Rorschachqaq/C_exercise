#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'

int main(void)
{
	char c;					   // ��ȡһ���ַ�
	char prev;				   // ��ȡ��ǰһ���ַ�
	long n_chars = 0L;		   // ���ַ���
	int n_lines = 0;			   // ����
	int n_words = 0;			   // ������
	int incomplete_lines = 0;	   // ������������
	bool inword = false;       // �ַ��Ƿ��ڵ���֮��

	printf("Enter text to be anelyzed (| to terminate):\n");
	prev = '\n';               // ��ʾ��������
	while ((c = getchar()) != '|')
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace(c) and !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(c) and inword)
			inword = false;    //�ﵽ���ʵ�ĩβ
		prev = c;              //�����ַ���ֵ
	}

	if (prev != '\n')
		incomplete_lines = 1;
	printf("This text has %ld characters, %d words, %d line(s),\
and %d partial line(s).\n", n_chars, n_words, n_lines, incomplete_lines);

	return 0;
}
