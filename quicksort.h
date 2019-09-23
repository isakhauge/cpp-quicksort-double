/*
 * Title: QuickSort
 * Author: Isak K. Hauge
 * Date: 2019.09.22
 * Description:
 * */

using namespace std;

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
	 * @param left
	 * @param right
	 * @param length
	 * @return
	 */
	static int partition(double arr[], int left, int right, int length) {
		double* pivot = &arr[left];
		int l = left;
		int r = right;

		while (l < r) {
			do {l++;} while (arr[l] <= *pivot and l < length);
			do {r--;} while (arr[r] > *pivot and r >= 0);
			if (l < r)
				if (arr[l] > *pivot and arr[r] < *pivot)
					swap(&arr[l], &arr[r]);
		};
		cout << "L: " << l << endl;
		cout << "R: " << r << endl;
		swap(&*pivot, &arr[r]);
		return l;
	}

	static void quickSort(double arr[], int left, int right, int length) {
		if (left >= right) return;
		int newLeft = partition(arr, left, right, length);
		if (left < right) {
			quickSort(arr, left, newLeft - 1, length);
			quickSort(arr, newLeft, right, length);
		}
	}

}

#endif //QUICKSORT_QUICKSORT_H
