using System;
using System.Reflection.Metadata.Ecma335;
using Microsoft.VisualBasic;

namespace Interview1
{
    class Program
    {

        public class LongestRepeatInfo {
            public int index;
            public int length;
        }

        public static LongestRepeatInfo GetRepeats(int[] array)
        {
            if (array == null) throw new ArgumentNullException(nameof(array));
            if (array.Length == 0) throw new ArgumentException($"{nameof(array)} cannot be empty");
            LongestRepeatInfo info = new LongestRepeatInfo();
            int currentInt = array[0];
            int currentCount = 1;
            int currentFirstIndex = 0;
            info.length = 1;
            info.index = 0;
            for (int index = 1; index < array.Length; index++)
            {
                if (currentInt == array[index])
                {
                    currentCount++;
                }
                else
                {
                    if (info.length < currentCount)
                    {
                        info.length = currentCount;
                        info.index = currentFirstIndex;
                        currentFirstIndex = index;
                    }

                    currentInt = array[index];
                    currentCount = 1;
                }
            }

            // Refactor this after interview
            if (info.length < currentCount)
            {
                info.length = currentCount;
                info.index = currentFirstIndex;
            }

            return info;
        }
        // input: int []
        // finds first index of longest repeating integer and the number of repeats
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }


    // [1 , 2, 3, 4, 4, 5, 1] => index: 3, length 2
    // [1, 2, 3, 3, 4, 4, 4] => index: 4, length 3
    // [1, 2, 1, 1, 2] => index: 2, length 2
    // [1, 2, 3] => index: 0, length 1
    // [] => Exception (ArgumentException)
    // [1] => index: 0, length 1
    // [1, 1] => index: 0, length 2
    // [1, 1, 2] => index: 0, length 2
    // null => ArgumentNullException
}
