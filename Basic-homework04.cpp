/* �p������׹��-�򥻽m�ߧ@�~-�@�~4*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw
int main(void)
{
   int second=0; //�w�q��� 
    printf("�z����J����ơG");
    scanf("%d",&second); //��J���  
    printf("�ഫ���ɶ���=%02d��:%02d��:%02d��\n",second/3600%60,second/60%60,second%60); //%[��X�̤p�e��][.���],��� 
 	system("pause"); //�Ȱ�����    
 	return 0; //�^�ǭȬ�0 
}
