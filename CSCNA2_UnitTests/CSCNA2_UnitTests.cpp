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
}
