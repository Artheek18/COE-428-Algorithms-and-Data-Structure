void mySort(int d[], unsigned int n)
{
int i, a, j;
for(i = 0; i < n; i++){

  a = d[i];
  j = i-1;
     while(j >= 0 && d[j] > a){
	d[j+1] = d[j];
	j = j--;
}

 d[j+1] = a;

 
 }
}
