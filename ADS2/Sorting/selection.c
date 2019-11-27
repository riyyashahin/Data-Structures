#include<stdio.h>
#include<stdint.h>

void _swap_(int32_t *a, int32_t *b){
	int32_t temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int32_t list[],uint32_t size)
{
	uint32_t pass,index,min_pos,i;

	for(pass=0;pass<size-1;++pass)
	{
		min_pos = pass;
		for (index=pass+1;index<size;++index)
		{
			if(list[index]<list[min_pos])
			{
				min_pos=index;
			}
		}
		_swap_(&list[pass],&list[min_pos]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",list[i] );
	}
}

int main()
{
	int32_t a[10]={23,1,45,90,7,43};
	selection_sort(a,6);
	return 0;
}

