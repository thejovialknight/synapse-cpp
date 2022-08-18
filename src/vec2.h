#pragma once

// todo: Write unit tests for Vec2
struct Vec2 {
    double x = 0;
    double y = 0;

    Vec2() {}
    Vec2(double xval, double yval) : x(xval), y(yval) {}

    bool operator==(const Vec2 &b);
    bool operator!=(const Vec2 &b);
    Vec2 operator+(const Vec2 &b);
    Vec2 operator-(const Vec2 &b);
    Vec2 operator*(const Vec2 &b);
    Vec2 operator/(const Vec2 &b);
    Vec2 operator+=(const Vec2 &b);
    Vec2 operator-=(const Vec2 &b);
    Vec2 operator*=(const Vec2 &b);
    Vec2 operator/=(const Vec2 &b);
};

struct IVec2 {
    int x;
    int y;

    IVec2(int x, int y) : x(x), y(y) {}

    bool operator==(const IVec2 &b);
    bool operator!=(const IVec2 &b);
    IVec2 operator+(const IVec2 &b);
    IVec2 operator-(const IVec2 &b);
    IVec2 operator*(const IVec2 &b);
    IVec2 operator/(const IVec2 &b);
    IVec2 operator+=(const IVec2 &b);
    IVec2 operator-=(const IVec2 &b);
    IVec2 operator*=(const IVec2 &b);
    IVec2 operator/=(const IVec2 &b);
};
