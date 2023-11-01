int binarySearch(int arr[], int size, int key) {
	int lo = 0, hi = size - 1, mid;
		while(lo <= hi) {
			mid = (lo + hi) / 2;
			if (arr[mid] == key)
				return mid;
			if (arr[mid] > key)
				hi = mid - 1;
			else 
				lo = mid + 1;
		}
	return - 1;
}
