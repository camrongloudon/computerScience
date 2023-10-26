//Selection Sort

void slectionsort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int smallest = i;
		for (int y = i + 1; y < size; y++) {
			if (arr[y] < arr[smallest])
				smallest = y;
		}
	int temp = arr[smallest];
	arr[smallest] = arr[i];
	arr[i] = temp;
	}
}
