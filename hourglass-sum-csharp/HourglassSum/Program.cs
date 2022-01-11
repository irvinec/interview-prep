using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

/*
 * Complete the 'hourglassSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

    public static int hourglassSum(List<List<int>> arr)
    {
        int maxSum = int.MinValue;
        for (int rowIndex = 0; rowIndex < arr[0].Count - 2; rowIndex++)
        {
            for (int colIndex = 0; colIndex < arr.Count - 2; colIndex++)
            {
                int sum = 0;
                for (int indexOffset = 0; indexOffset <= 2; indexOffset++)
                {
                    sum += arr[rowIndex][colIndex + indexOffset] +
                           arr[rowIndex + 2][colIndex + indexOffset];
                }

                sum += arr[rowIndex + 1][colIndex + 1];
                if (sum > maxSum)
                {
                    maxSum = sum;
                }
            }
        }

        return maxSum;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < 6; i++)
        {
            arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
        }

        int result = Result.hourglassSum(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
