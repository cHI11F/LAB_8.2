#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_8.2/LAB_8.2.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			

			
			std::string str1 = "Hello   world";
			Assert::AreEqual(size_t(3), MaxConsecutiveSpaces(str1)); 

			
			std::string str2 = "HelloWorld";
			Assert::AreEqual(size_t(0), MaxConsecutiveSpaces(str2)); 

			
			std::string str3 = "Hello World";
			Assert::AreEqual(size_t(1), MaxConsecutiveSpaces(str3)); 

			
			std::string str4 = "  Hello World  ";
			Assert::AreEqual(size_t(2), MaxConsecutiveSpaces(str4)); 

			
			std::string str5 = "";
			Assert::AreEqual(size_t(0), MaxConsecutiveSpaces(str5)); 
		}
	};
}
