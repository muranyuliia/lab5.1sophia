#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1sophia/lab5.1sophia.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab51test
{
	TEST_CLASS(lab51test)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double s;
			s = h(1, 2, 4);
			Assert::AreEqual(s, 0.352786, 0.00001);
		}
	};
}