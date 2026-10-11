#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Projects\Lab_5\Lab_5.1\Lab_5.1\Lab_5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double r = h(1, 1);
			Assert::AreEqual(1.0, r, 0.0001);
		}
	};
}
