#include "pch.h"
#include "CppUnitTest.h"
#include "../Project7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int colCount = 4;
			int rowCount = 5;
			int** a = new int* [rowCount];
			for (int i = 0;i < rowCount;i++)
				a[i] = new int[colCount];
			Create(a, rowCount, colCount, 1, 1);
			Assert::AreEqual(a[1][1], 1);
		}
	};
}
