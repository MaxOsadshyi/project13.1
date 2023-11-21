#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.1/sum.h"
#include "../Project13.1/sum.cpp"
#include "../Project13.1/var.cpp"
#include "../Project13.1/var.h"
#include "../Project13.1/dod.cpp"
#include "../Project13.1/dod.h"







using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::xp = 1;
			nsVar::xk = 2;
			nsVar::dx = 0.2;
			nsVar::eps = 0.000001;
			
			nsSum::sum();
			Assert::AreEqual(3,3,0.0000000000001);

		}
	};
}
