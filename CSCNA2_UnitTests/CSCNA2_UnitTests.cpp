#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

namespace CSCNA2UnitTests
{
	TEST_CLASS(PerimeterFunctionalityTests)
	{
	public:
		
		TEST_METHOD(TwoPositiveIntergers)
		{
			int x = 5;
			int y = 5;

			int result = 0;
			result = getPerimeter(&x, &y);

			Assert::AreEqual(15, result);

		}
	};


	TEST_CLASS(AreaTestsFunctionality)
	{
	public:

		TEST_METHOD(TwoPositiveIntergers)
		{
			int x = 5;
			int y = 5;

			int result = 0;
			result = getArea(&x, &y);

			Assert::AreEqual(25, result);

		}
	};
}
