#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

namespace CSCNA2UnitTests
{
	TEST_CLASS(PerimeterFunctionalityTests)
	{
	public:
		
		TEST_METHOD(TwoSamePositiveIntergers)
		{
			int length = 5;
			int width = 5;

			int result = 0;
			result = getPerimeter(&length, &width);

			Assert::AreEqual(20, result);

		}
	};


	TEST_CLASS(AreaFunctionalityTests)
	{
	public:

		TEST_METHOD(TwoSamePositiveIntergers)
		{
			int length = 5;
			int width = 5;

			int result = 0;
			result = getArea(&length, &width);

			Assert::AreEqual(25, result);
		}
	};


	TEST_CLASS(SetLengthFunctionality)
	{
	public:

		TEST_METHOD(SetMaxLength99)
		{
			int outputWidth = 0;

			setLength(99, &outputWidth);

			Assert::AreEqual(99, outputWidth);
		}

		TEST_METHOD(SetLengthFromNegativeNumber)
		{
			int outputWidth = -10;

			setLength(10, &outputWidth);

			Assert::AreEqual(10, outputWidth);
		}

		TEST_METHOD(SetFromLargeNumberGreaterThanScope)
		{
			int outputWidth = 2000;

			setLength(50, &outputWidth);

			Assert::AreEqual(50, outputWidth);
		}
	};


	TEST_CLASS(SetWidthFunctionality)
	{
	public:

		TEST_METHOD(SetWidthFromNegativeNumber)
		{
			int outputWidth = -30;

			setWidth(20, &outputWidth);

			Assert::AreEqual(20, outputWidth);
		}

		TEST_METHOD(SetWidthToZero)
		{
			int outputWidth = 10;

			setWidth(0, &outputWidth);

			//Keeps initial value of 10
			Assert::AreEqual(10, outputWidth);
		}

		TEST_METHOD(SetMaxWidth99)
		{
			int outputWidth = -30;

			setWidth(99, &outputWidth);

			Assert::AreEqual(99, outputWidth);
		}
	};
}
