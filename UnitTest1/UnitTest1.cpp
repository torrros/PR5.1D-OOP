#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR5.1D OOP\PR5.1D OOP\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p(1, 2);
			Assert::IsTrue(Pair{ 1, 2 } == p);
		}
	};
}
