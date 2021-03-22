 
#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
	int k,l,bucket;
	for(k=first;k<=last;k++){
	myCopy(&array[k],&bucket);
	l=k-1;
		
		while( (l>=0) && (myCompare(array[l],bucket)>0))
		{
			mySwap(&array[l],&array[l+1]);
			l=l-1;
		}
		myCopy(&bucket,&array[l+1]);
	}

    }
