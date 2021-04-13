#include "Heap.h"




void AdjustUp(HPDataType *a, int n, int child)
{
	assert(a);
	int parents = (child - 1) / 2;
	while (parent>=0)
	{
		if (a[child] > a[parent])
		{
			int tmp = a[child];
			a[child] = a[parents];
			a[parents] = tmp;
			child = parents;
			parents = (child - 1) / 2;
		}
		else{
			break;
		}

		
	}







}





































