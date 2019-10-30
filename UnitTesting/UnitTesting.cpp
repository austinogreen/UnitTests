#include "pch.h"
#include "CppUnitTest.h"

#include "../ConsoleApplication1/ResizableArray.h" // Wherever implentation is located
#include "../ConsoleApplication1/DrillingRecord.cpp" // Whatever you are unit desting

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTesting
{
	TEST_CLASS(UnitTesting)
	{
	public:
		
		TEST_METHOD(TestAddNum) // Name whatever you are testing
		{
			DrillingRecord rec;
			rec.addNum(1);

			Assert::IsTrue(rec.getNum(0) == 1);
		}
	};
}
