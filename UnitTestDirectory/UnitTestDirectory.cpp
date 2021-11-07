#include "pch.h"
#include "CppUnitTest.h"
#define LENGTH 10
extern "C" char* Rock_Paper_Scissor(char p1[LENGTH], char p2[LENGTH]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestDirectory
{
	TEST_CLASS(UnitTestDirectory)
	{
	public:
		
		TEST_METHOD(case_Sensitivity_Test1)
		{
			char p1[LENGTH] = "paper";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Player2";
			char* result;
			result = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, result);
		}
		TEST_METHOD(case_Sensitivity_Test2)
		{
			char p1[LENGTH] = "rock";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Player1";
			char* result;
			result = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, result);
		}
		TEST_METHOD(case_Sensitivity_Test3)
		{
			char p1[LENGTH] = "scissor";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Draw";
			char* result;
			result = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, result);
		}
	
	};
}
