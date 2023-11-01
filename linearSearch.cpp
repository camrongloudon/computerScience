int linearSeach(int arr[], int size, int key) {
	for(int x =0; x <= size, x++)
		if(arr[x] == key)
			return x;
	return -1; 
}

