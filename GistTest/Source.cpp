#include <iostream>

using namespace std;

float sumTimesFive(float a, float b, float c)
{
	return (a + b + c) * 5;
}

void evenNumbers(int a[], int e)
{
	int even = 0;
	for (int i = 0; i < e; i++)
	{
		even = even + 2;
		a[i] = even;
	}
}

void stringReverse(char input[])
{
	int strlen = 0;

	for (int i = 0; i < 255; i++)
	{
		if (input[i] != '\0')
			strlen++;
		else
			break;
	}

	char hold;
	strlen--;

	for (int i = 0; i < strlen / 2; i++)
	{
		hold = input[strlen - i];
		input[strlen - i] = input[i];
		input[i] = hold;
	}
}

class Cat
{
private:
	char m_name;
public:
	Cat() {}
	void NameMe(char name);
};

void Cat::NameMe(char name)
{
	m_name = name;
}

int mostCommon(int a[], int size)
{
	int common = 0;
	int commonnumber = 0;
	int commonnumbernew = 0;

	for (int x = 0; x < size; x++)
	{
		commonnumbernew = 0;
		for (int y = 0; y < size; y++)
		{
			if (a[y] == a[x])
			{
				commonnumbernew++;
			}
		}

		if (commonnumbernew > commonnumber)
		{
			common = a[x];
			commonnumber = commonnumbernew;
		}
	}

	return common;
}

void swapNoTemp(int a, int b)
{
	b = b * b;
}

void stringSort(string strings[])
{

}

void main()
{
	/* Create a function that takes in 3 numbers and returns the sum of those
	numbers multiplied by 5 (This function should work for both integer and
	floating point values). */
	sumTimesFive(5, 5, 5);

	/* Write a function that takes two parameters a pointer to an array and the
	number of elements then populate the array with all even numbers. */
	int nums[5] = { 0,0,0,0,0 };
	evenNumbers(nums, 5);

	/* Create a function that takes in a character array and reverses the string
	stored inside of it. */
	char name[14] = "ZyronMelancon";
	stringReverse(name);


	/* Create a Cat class with a private char variable called m_name. Then create a
	public constructor that has no arguments. You will need one more function of
	return type void called NameMe, this takes in a character as an argument and
	needs to assign this character to the value of m_name. Once you have your class
	created, Create an array of type Cat of size 26. Then populate the names of these
	cats each with a different letter of the alphabet starting with capital A and
	every other cats name should be a lowercase letter (A,b,C,d,E,f,G,...). You
	cannot use a for loop and you cannot print to the console. */
	Cat cats[26];
	char letter = 65;
	int i = 0;
	while (i < 26)
	{
		cats[i].NameMe(letter + i);
		letter = letter + 32;
		i++;
		cats[i].NameMe(letter + i);
		letter = letter - 32;
		i++;
	}


	/* Create a function that takes in two arguments, One that points to an array
	of integers and one for the size of the array. This function will return the
	value in the array that appears the most times */
	int nums2[5] = { 5, 8, 2, 5, 4 };
	mostCommon(nums2, 5);
}