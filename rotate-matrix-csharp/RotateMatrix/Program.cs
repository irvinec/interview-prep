using System;

namespace RotateMatrix
{
    public static class RotateMatrix
    {
        public static void rotate(int[,] arr)
        {
            if (arr == null) throw new ArgumentNullException(nameof(arr));
            if (arr.GetLength(0) == 0) return;
            if (arr.Length != arr.GetLength(1)) throw new ArgumentException("Must be a square matrix");


            for (int layer = 0; layer < arr.GetLength(0) / 2; layer++)
            {
                int startIndex = layer;
                int endIndex = (arr.GetLength(0) - 1) - layer;

                for (int index = startIndex; index <= endIndex; index++)
                {
                    int top = arr[startIndex, index];

                    // assign left to top
                    arr[startIndex, index] = arr[endIndex - index, startIndex];

                    // assign bottom to left
                    arr[endIndex - index, startIndex] = arr[endIndex, endIndex - index];

                    // assign right to bottom
                    arr[endIndex, endIndex - index] = arr[index, endIndex];

                    // assign top to right
                    arr[index, endIndex] = top;
                }
            }
        }
    }
}
