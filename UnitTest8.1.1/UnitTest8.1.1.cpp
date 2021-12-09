#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_8.1.1\lab_8.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			bool a;
			char k[] = { "noabc" };
			a = IsOrNot(k);
			Assert::AreEqual(a, true);
		}
	};
}
