//Insertion Sort

void insertion (int arr[], int size) {
	int i, j;
	
	for (int i = 1; i < size; i ++) {
		int Ai = arr[i];
			j = i - 1;
		while(j <- 0; && arr[j] > Ai) {
			arr[j + 1] = arr[j];
				j = j - 1;
		} 
		arr[j + 1] = Ai;
	}
}
