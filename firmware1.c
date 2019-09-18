#include<lpc17xx.h>

int main()
{
	while(1)
	{
	LPC_GPIO0->FIODIR=0x000000FF;
	LPC_GPIO0->FIOSET=0x000000FF;
	LPC_GPIO0->FIOCLR=0x000000FF;
	}
}



#if 0
#define r1 0x00000001
#define r2 0x00000010
#define b1 0x00000002
#define b2 0x00000020
#define g1 0x00000004
#define g2 0x00000040
#define y1 0x00000008
#define y2 0x00000080

int main()
{
	#if 0
int* P0_Dir=(int*)0x2009C000;	
int* P0_Set=(int*)0x2009C018;
int* P0_Clr=(int*)0x2009C01C;	
*P0_Dir=0x000000FF;		
	while(1)
  	{
			*P0_Set=r1;	
			*P0_Set=r2;	
		
			*P0_Set=b1;
			*P0_Set=b2;			
	
			*P0_Set=g1;
			*P0_Set=g2;			
	
			*P0_Set=y1;
			*P0_Set=y2;			
			*P0_Clr=0x000000FF;	
	}
#endif
	
	int* P0_Dir=(int*)0x2009C000;	//MMIO Port0.Direction register
int* P0_Set=(int*)0x2009C018;
int* P0_Clr=(int*)0x2009C01C;	
*P0_Dir=0x000000FF;
	*P0_Set=0x000000FF;
	*P0_Clr|=1<<7|1<<5|1<<3|1<<1; 
	
	
	
	
}
#endif
