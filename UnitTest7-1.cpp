#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Софія\source\repos\lab7-1\lab7-1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array <int, 100 > arr = {3, 18, 27, 52};
			Assert::AreEqual(Max(arr, 4), 27);
		}
	};
}
