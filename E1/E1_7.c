#include <stdio.h>

int main(void){
    int diff;
    char large;
    char small;

    printf("�A���t�@�x�b�g�̏���������͂��Ă�������>>>");
    scanf("%c\n", &small);
    diff = 'a' - 'A';
    large = small - diff;

    printf("�啶����%c ��������%c\n", large, small);

    return 0;
}