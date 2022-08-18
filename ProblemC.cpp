/**
 * @file coddan2_3.cpp
 * @author @mahdimma
 * @brief Ramz Problem
 * @version 0.1.0
 * @date 2022-08-18
 * @id 3code2
 *
 * @copyright Copyright (c) 2022
 *
 */


#include <iostream>
using namespace std;


int main()
{
	int N, sum = 0;
	//number of code
	//تعداد رمز
	cin >> N;
	string code, spinningWheel;
	//get code
	//گرفتن رمز
	cin >> code;
	for (int i = 0; i< N; i++)
	{
		//code of i-th spinning wheel
		//گرفتن رمز مربوط به چهارخونه i ام
		char number = code[i];
		//get i-th spinning wheel number
		//گرفتن ارقام چهارخونه i ام
		cin >> spinningWheel;
		for (int j = 0; j< 9; j++)
		{
			//check equality of ramz and spinning wheel number
			//بررسی مساوی بودن عدد چهارخونه با رمز
			if (number == spinningWheel[j])
			{
				//if less than 5, means Clockwise rotation faster(move to right)
				//اگر کمتر از ۵ بود یعنی چرخش ساعتگرد سریعتر است(چرخاندن به راست)
				if (j < 5)
				{
					sum += j;
				}
				//mowe to left faster and calculate that with 9 - j
				// حرکت به چپ سریعتر است. آن را با کم کردن جی از 9 حساب کن
				else
				{
					sum += (9 - j);
				}
			}
		}
	}
	cout << sum;
}