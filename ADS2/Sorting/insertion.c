#include<stdio.h>
#include<stdint.h>

void insertion(int32_t list[],uint32_t size)
{
	int32_t i,pass,index;
	int32_t key;

	for(pass=1;pass<size;++pass)
	{
		key = list[pass];
		index=pass-1;
		while(index>=0 && list[index]>key)
		{
			list[index+1]=list[index];
			--index;
		}
		list[index+1]=key;
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",list[i]);
	}
}

int main()
{
	int32_t a[10]={23,1,45,90,7,43};
	insertion(a,6);
	return 0;
}
