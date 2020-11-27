#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.2/lab8_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			string s = "asdsa as";
			t = MinLength(s);
			Assert::AreEqual(t, 2);
		}
	};
}
