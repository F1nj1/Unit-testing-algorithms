#include "pch.h"
#include "C:\Users\Master\Documents\Aue tatari\Program\Unit-testing-algorithms\Project3\algoritmi.cpp"

int* mas, * sort_mas;

TEST(SelectSort, TestName) {
	mas = new int[5] { 2,15,16,28,1 };
	selectsort(mas, 5);
	sort_mas = new int[5] { 1,2,15,16,28};
	
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[5] { 1,2,3,4,5 };
	selectsort(mas, 5);
	sort_mas = new int[5] { 1,2,3,4,5};

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 23,12,1,6,26,9 };
	selectsort(mas, 6);
	sort_mas = new int[6] { 1,6,9,12,23,26};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 6,5,4,3,2,1 };
	selectsort(mas, 6);
	sort_mas = new int[6] { 1,2,3,4,5,6};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[10] { 8,8,5,5,6,6,1,1,3,3 };
	selectsort(mas, 10);
	sort_mas = new int[10] {1,1,3,3,5,5,6,6,8,8};

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
}

TEST(ShakerSort, TestName) {
	mas = new int[5] { 123,600,234,1231,11 };
	shakersort(mas, 5);
	sort_mas = new int[5] { 11,123,234,600,1231};

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[5] { 10,20,30,40,50 };
	shakersort(mas, 5);
	sort_mas = new int[5] { 10, 20, 30, 40, 50};

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 900,43,134,788,544,222 };
	shakersort(mas, 6);
	sort_mas = new int[6] { 43,134,222,544,788,900};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 90,80,70,60,50,40 };
	shakersort(mas, 6);
	sort_mas = new int[6] { 40,50,60,70,80,90};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[10] { 80,80,80,40,40,40,10,10,10,10 };
	shakersort(mas, 10);
	sort_mas = new int[10] {10,10,10,10,40,40,40,80,80,80};

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
}

TEST(ShellSort, TestName) {
	mas = new int[5] { 1234, 1002, 5000,4444, 9343 };
	shellsort(mas, 5);
	sort_mas = new int[5] { 1002, 1234,4444,5000,9343};

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[5] { 1001,1002,1003,1004,1005 };
	shellsort(mas, 5);
	sort_mas = new int[5] {1001, 1002, 1003, 1004, 1005 };

	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 5023,5001,5009,5055,5123,5500};
	shellsort(mas, 6);
	sort_mas = new int[6] { 5001, 5009, 5023, 5055, 5123,5500};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[6] { 9000,8000,7000,6000,5000,4000 };
	shellsort(mas, 6);
	sort_mas = new int[6] { 4000,5000,6000,7000,8000,9000};

	for (int i = 0; i < 6; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
	mas = new int[10] { 4444,4444,3333,3333,8888,8888,9999,9999,2222,2222};
	shellsort(mas, 10);
	sort_mas = new int[10] {2222,2222,3333,3333,4444,4444,8888,8888,9999,9999};

	for (int i = 0; i < 10; i++)
	{
		EXPECT_EQ(sort_mas[i], mas[i]);
	}

	delete[] mas;
	delete[] sort_mas;
}