public static class StringRotate
{
    public static bool IsRotation(string s1, string s2)
    {
        if (s1.Length != s2.Length)
        {
            return false;
        }

        return (s1 + s1).Contains(s2);
    }
}
