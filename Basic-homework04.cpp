/* 計算機概論實務-基本練習作業-作業4*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫
int main(void)
{
   int second=0; //定義秒數 
    printf("您的輸入的秒數：");
    scanf("%d",&second); //輸入秒數  
    printf("轉換的時間為=%02d時:%02d分:%02d秒\n",second/3600%60,second/60%60,second%60); //%[輸出最小寬度][.精度],顯示 
 	system("pause"); //暫停視窗    
 	return 0; //回傳值為0 
}
