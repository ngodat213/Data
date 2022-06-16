#include<stdio.h>

int Search(int a[], int n, int nCmp){
	for(int i = 0; i < n; ++i){
		if(a[i] == nCmp)
			return i;
	}
	return -1;
}

int BinarySearch(int a[], int l, int r, int nCmp){
	if(r>=l){
		int mid = l + (r-l) /2;
		if(a[mid] == nCmp) // DK: x = a[mid]
			return mid;
		if(a[mid] > nCmp) // DK: a[m] > x
			return BinarySearch(a, l, mid-1, nCmp);
		return BinarySearch(a, mid+1, r, nCmp); // DK con lai: a[m] < x
	}
	return -1;
}

int main(){
	int a[] = {0,1,2,6,3,4,5,7,10};
	printf("Search: %d\n",  Search(a, 9, 6));
	printf("SearchB: %d\n", BinarySearch(a, 0, 8, 10));
	return 0;
}
