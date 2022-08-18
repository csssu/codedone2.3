using System;

namespace CsharpCode
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            int InputValue = Convert.ToInt32(Console.ReadLine());
            int TotalSum = 0;
            string Password = Console.ReadLine();
            for (int fiIndex = 0; fiIndex < InputValue; fiIndex++)
            {
                char Digit = Password[fiIndex];
                string Spinner = Console.ReadLine();
                for (int seIndex = 0; seIndex < 9; seIndex++)
                {
                    if (Digit == Spinner[seIndex])
                    {
                        if (seIndex < 5)
                        {
                            TotalSum += seIndex;
                        }
                        else
                        {
                            TotalSum += (9 - seIndex);
                        }
                    }
                }
            }
            Console.Write(TotalSum);
        }
    }
}