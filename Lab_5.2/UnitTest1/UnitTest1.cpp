#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1;                          // доданок при n = 0 для x = 0.5
			A(0.5, 1, a);                           
			Assert::AreEqual(1.0 / 12, a, 0.000001);
		}
		TEST_METHOD(TestS)
		{
			int n;
			double s;
			S(0.5, 0.000001, n, s);                          // S записує результат у n і s
			Assert::AreEqual(log(1.5 / 0.5), s, 0.00001);    // ln((1+0.5)/(1-0.5)) = ln 3
		}
	};
}
