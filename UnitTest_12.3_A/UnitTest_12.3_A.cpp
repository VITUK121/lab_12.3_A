#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_12.3_A/lab_12.3_A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest123A
{
	TEST_CLASS(UnitTest123A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(calc_n(1000), 4);
		}
	};
}
