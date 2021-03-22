Artheeckkumarran Shanmugalingam 500895150

I was able to get part 1 to work by implementing insertion sort for mySort.c. I was able to sort the 
values in the sortMain.c file. For part 2. I was able to compile my sortMain2.c file and i was able to 
sort the numbers i wrote. However, when i write the command testSort 4 9 5 10, it would output:
0
4 
5
9 
10

It would sort after the zero is outputted which is the only error I have with my program. Other than that
my program seems to work without any issues.

1.
Suppose you were given an object module (with no access to source code) that sorted an
array of integers very efficiently. However, the sort function in the object module must
be invoked with the following signature:
betterSort(int data[], first, last);
where the array to sort is data and the parameters first and last give the indices of the
portion of the array that is to be sorted.
How could you write a mySort() function with the signature used in this lab that could
exploit the better sorting function in the supplied object module? 

Answer: We can invoke the betterSort function inside the mySort function. The first and last can be used
by writing the index of the elements from 0 to numDataItems-1. The betterSort function probably works 
similar to Mergesort.

mySort(int data[], numDataItems){
betterSort(int data[], first, last)

}
