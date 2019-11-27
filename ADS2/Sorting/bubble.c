#include<stdio.h>
#include<stdint.h>

void _swap_(int32_t *a, int32_t *b){
	int32_t temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int32_t list[],uint32_t size){
	uint32_t pass,index,i;
	for(pass=0;pass<size-1;++pass){
		for(index=size-1;index>pass;--index){
			if(list[index]<list[index-1]){
				_swap_(&list[index],&list[index-1]);
			}
		}
	}
	for(i=0;i<size;i++)
{
	printf("%d \t",list[i]);
}
}

int main()
{
	int32_t a[10]={23,1,45,90,7,43};
	bubble_sort(a,6);
	return 0;
}

