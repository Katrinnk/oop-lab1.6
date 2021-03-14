#include "pch.h"
#include "CppUnitTest.h"
#include "Z:/university/ооп/програми/1.6/Real.h"
#include "Z:/university/ооп/програми/1.6/Real.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Real::Number p;
			p.Init(2,3);
			int test = p.Sum();
			Assert::AreEqual(5, test);
		}
	};
}
