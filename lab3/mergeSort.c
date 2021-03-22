#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {	
	if(myCompare(first,last)<0)
	{
		int x=((first+last)/ 2);
		mySort(array,first,x);
		mySort(array,x+1,last);
		mergeSort(array,first,x,last);
	}
    }
void mergeSort(int array[],int first, int x, int last)
{
	int a,b,c;
	int d=0,e=0;
	int l= x-first+1;
	int r=last-x;
	int larray[l+1];
	int rarray[r+1];

	for(a=0;a<l;a++)
	{
	myCopy(&array[first+a],&larray[a]);
	}	
	for(b=0;b<r;b++)
	{
	myCopy(&array[x+b+1],&rarray[b]);
	}
	larray[l]=1000000000;
	rarray[r]=1000000000;
	
for(c=first;c<=last;c++){
	
			if(myCompare(larray[d],rarray[e])<=0)
			{
			myCopy(&larray[d],&array[c]);
			d++;
			}
			else
			{
			myCopy(&rarray[e],&array[c]);
			e++;
			}
}
}
