/*
 * Title: QuickSort
 * Author: Isak K. Hauge
 * Date: 2019.09.22
 * */

namespace ikh {

	/**
	 * Swap
	 * @param a Pointer to a double value.
	 * @param b Pointer to a double value.
	 */
	static void swap(double* a, double* b) {
		double temp = *a;
		*a = *b;
		*b = temp;
	}


	/**
	 * Partition
	 * @param arr An array of double values.
	 * @param left A defined start index.
	 * @param right A defined end index.
	 * @param length The total length of the array.
	 * @return An index representing the partition split point.
	 */
	static int partition(double arr[], int left, int right, int length) {

		// Create pivot pointer for semantics.
		double* pivot = &arr[left];

		// Copy indexes for manipulation.
		int leftIndex = left;
		int rightIndex = right;

		while (leftIndex < rightIndex) {
			// Find left value larger than pivot.
			do {
				leftIndex++;
			} while (arr[leftIndex] <= *pivot and leftIndex < length);

			// Find right value smaller than pivot.
			do {
				rightIndex--;
			} while (arr[rightIndex] > *pivot and rightIndex >= 0);

			// ? If values are eligible for swapping.
			if (leftIndex < rightIndex and arr[leftIndex] > *pivot and arr[rightIndex] < *pivot)
				swap(&arr[leftIndex], &arr[rightIndex]);
		};

		/* ! NOTE: At this point, the indexes have crossed each other. */
		// Swap the pivot with the value at the current right index.
		swap(&*pivot, &arr[rightIndex]);

		// Return the new start index.
		return leftIndex;
	}


	/**
	 * Quick Sort
	 * @param arr An array of double values.
	 * @param left A defined start index.
	 * @param right A defined end index.
	 * @param length The total length of the array.
	 */
	static void quickSort(double arr[], int left, int right, int length) {

		if (left >= right)
			return; // Cancel method.

		// Partition array, and return a new partition start index.
		int startIndex = partition(arr, left, right, length);

		if (left < right) {
			// Quick sort the left partition of the array.
			quickSort(arr, left, startIndex - 1, length);
			// Quick sort the right partition of the array.
			quickSort(arr, startIndex, right, length);
		}
	}

}
