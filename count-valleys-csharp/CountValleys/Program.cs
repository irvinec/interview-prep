﻿using System.CodeDom.Compiler;
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
     * Complete the 'countingValleys' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. INTEGER steps
     *  2. STRING path
     */

    public static int countingValleys(int steps, string path)
    {
        int level = 0;
        int prevLevel = 0;
        int valleys = 0;
        for (int charIndex = 0; charIndex < steps; charIndex++)
        {
            switch (path[charIndex])
            {
                case 'D':
                {
                    level--;
                } break;
                case 'U':
                {
                    level++;
                } break;
            }
            if (prevLevel == 0 && level < 0)
            {
                valleys++;
            }

            prevLevel = level;
        }

        return valleys;
    }
}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int steps = Convert.ToInt32(Console.ReadLine().Trim());

        string path = Console.ReadLine();

        int result = Result.countingValleys(steps, path);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
