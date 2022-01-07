using NUnit.Framework;

using static StringRotate;

namespace StringRotateTests;

public class Tests
{
    [SetUp]
    public void Setup() { }

    [Test]
    public void EmptyString()
    {
        Assert.True(IsRotation("", ""));
    }

    [Test]
    public void SingleChar()
    {
        Assert.True(IsRotation("a", "a"));
        Assert.False(IsRotation("a", "b"));
    }

    [Test]
    public void IsARotation()
    {
        Assert.True(IsRotation("aterw", "water"));
    }

    [Test]
    public void NotARotation()
    {
        Assert.False(IsRotation("aterw", "lands"));
        Assert.False(IsRotation("water", "waters"));
    }
}
