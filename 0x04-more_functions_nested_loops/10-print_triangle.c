void print_triangle(int size) {
	if (size <= 0) {
		_putchar('\n');
		return;
	}

	int row;
	int col;

	for  (row = 1; row <= size; row++) {
		for  (col = 1; col <= row; col++) {
			_putchar('#');
		}
		_putchar('\n');
	}
}
