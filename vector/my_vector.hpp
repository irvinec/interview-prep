#pragma once

#include <array>

template<size_t N>
using MyVector = std::array<float, N>;

template<size_t N>
MyVector<N> operator+(const MyVector<N>& lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] + rhs[index];
    }

    return result;
}

template<size_t N>
MyVector<N> operator+(const MyVector<N>& lhs, const float rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] + rhs;
    }

    return result;
}

template<size_t N>
MyVector<N> operator+(const float lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs + rhs[index];
    }

    return result;
}

template<size_t N>
MyVector<N> operator-(const MyVector<N>& lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] - rhs[index];
    }

    return result;
}

template<size_t N>
MyVector<N> operator-(const MyVector<N>& lhs, const float rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] - rhs;
    }

    return result;
}

template<size_t N>
MyVector<N> operator-(const float lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs - rhs[index];
    }

    return result;
}

template<size_t N>
MyVector<N> operator*(const MyVector<N>& lhs, const float rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] * rhs;
    }

    return result;
}

template<size_t N>
MyVector<N> operator*(const float lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs * rhs[index];
    }

    return result;
}

template<size_t N>
MyVector<N> operator/(const MyVector<N>& lhs, const float rhs) noexcept
{
    assert( rhs != 0 );
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index] / rhs;
    }

    return result;
}

template<size_t N>
MyVector<N> operator/(const float lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs / rhs[index];
    }

    return result;
}

template<size_t N>
float dot(const MyVector<N>& lhs, const MyVector<N>& rhs) noexcept
{
    float result{ 0.0f };
    for (size_t index = 0; index < N; ++index)
    {
        result += lhs[index]*rhs[index];
    }

    return result;
}

template<size_t N>
float had(const MyVector<N>& lhs, const MyVector<N>& rhs) noexcept
{
    MyVector<N> result{};
    for (size_t index = 0; index < N; ++index)
    {
        result[index] = lhs[index]*rhs[index];
    }

    return result;
}

MyVector<3> cross(const MyVector<3>& lhs, const MyVector<3>& rhs) noexcept
{
    MyVector<3> result{};
    result[0] = lhs[1]*rhs[2] + lhs[2]*rhs[1];
    result[1] = lhs[2]*rhs[0] + lhs[0]*rhs[2];
    result[2] = lhs[0]*rhs[1] + lhs[1]*rhs[0];
    return result;
}
