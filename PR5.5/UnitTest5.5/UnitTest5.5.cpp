#include "pch.h"
#include "../PR5.5/PR5.5.cpp"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int n = 0;

			t = sumDigits (2,n);
			Assert::AreEqual(t, 2);
		}
	};
}
