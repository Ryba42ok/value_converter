#include <iostream>
int toDec(char arr[], int* sum, int num_syst, int i)
{
	int digit;
	int len = (int)strlen(arr);
	int res_index = abs(i - (len - 1));
	if (('A' <= arr[i] && arr[i] <= 'Z'))
		digit = arr[i] - 'A' + 10;
	else if (('a' <= arr[i] && arr[i] <= 'z'))
		digit = arr[i] - 'a' + 10;
	else {
		digit = arr[i] - '0';
	}

	*sum += digit * pow(num_syst, res_index);

	return *sum;
}