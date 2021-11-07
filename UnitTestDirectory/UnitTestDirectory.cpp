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
			char p1[LENGTH] = "Rock";
			char p2[LENGTH] = "Paper";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test2)
		{
			char p1[LENGTH] = "rock";
			char p2[LENGTH] = "paper";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test3)
		{
			char p1[LENGTH] = "Rock";
			char p2[LENGTH] = "Scissor";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test4)
		{
			char p1[LENGTH] = "rock";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test5)
		{
			char p1[LENGTH] = "Rock";
			char p2[LENGTH] = "Rock";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test6)
		{
			char p1[LENGTH] = "rock";
			char p2[LENGTH] = "rock";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test7)
		{
			char p1[LENGTH] = "Paper";
			char p2[LENGTH] = "Rock";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test8)
		{
			char p1[LENGTH] = "paper";
			char p2[LENGTH] = "rock";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test9)
		{
			char p1[LENGTH] = "Paper";
			char p2[LENGTH] = "Paper";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test10)
		{
			char p1[LENGTH] = "paper";
			char p2[LENGTH] = "paper";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}

		TEST_METHOD(case_Sensitivity_Test11)
		{
			char p1[LENGTH] = "Paper";
			char p2[LENGTH] = "Scissor";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test12)
		{
			char p1[LENGTH] = "paper";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test13)
		{
			char p1[LENGTH] = "Scissor";
			char p2[LENGTH] = "Rock";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test14)
		{
			char p1[LENGTH] = "scissor";
			char p2[LENGTH] = "rock";
			char expected_result[LENGTH] = "Player2";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test15)
		{
			char p1[LENGTH] = "Scissor";
			char p2[LENGTH] = "Paper";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test16)
		{
			char p1[LENGTH] = "scissor";
			char p2[LENGTH] = "paper";
			char expected_result[LENGTH] = "Player1";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test17)
		{
			char p1[LENGTH] = "Scissor";
			char p2[LENGTH] = "Scissor";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test18)
		{
			char p1[LENGTH] = "scissor";
			char p2[LENGTH] = "scissor";
			char expected_result[LENGTH] = "Draw";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}
		TEST_METHOD(case_Sensitivity_Test19)
		{
			char p1[LENGTH] = "Hello";
			char p2[LENGTH] = "World";
			char expected_result[LENGTH] = "Invalid!";
			char* final_solution;
			final_solution = Rock_Paper_Scissor(p1, p2);
			Assert::AreEqual(expected_result, final_solution);
		}

		

	};
}
