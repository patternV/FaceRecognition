#include "key.h"
#include "delay.h" 
//////////////////////////////////////////////////////////////////////////////////	 
//ALIENTEK STM32F407开发板
//按键输入驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
////////////////////////////////////////////////////////////////////////////////// 	 

//按键初始化函数
void KEY_Init(void)
{
	RCC->AHB1ENR|=1<<0;     //使能PORTA时钟 
	RCC->AHB1ENR|=1<<4;     //使能PORTE时钟
	GPIO_Set(GPIOE,PIN2|PIN3|PIN4,GPIO_MODE_IN,0,0,GPIO_PUPD_PU);	//PE2~4设置上拉输入
	GPIO_Set(GPIOA,PIN0,GPIO_MODE_IN,0,0,GPIO_PUPD_PD); 			//PA0设置为下拉输入 
} 


//按键处理函数
//返回按键值
//mode:0,不支持连续按;1,支持连续按;
//0，没有任何按键按下
//1，KEY0按下
//2，KEY1按下
//3，KEY2按下 
//4，KEY_UP按下 即WK_UP
//注意此函数有响应优先级,KEY0>KEY1>KEY2>KEY_UP!!
u8 KEY_Scan(u8 mode)
{	 

}

















