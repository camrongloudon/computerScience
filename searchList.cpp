Nodeptr search(nodeptr curr, int key) {
	while((curr != NULL) && (curr -> num == key)) {
		curr = curr -> next;
	}
	return curr;
}
