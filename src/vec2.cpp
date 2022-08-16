#include "vec2.h"

bool Vec2::operator==(const Vec2 &b) {
    return (x == b.x && y == b.y);
}

bool Vec2::operator!=(const Vec2 &b) {
    return (x != b.x || y != b.y);
}

Vec2 Vec2::operator+(const Vec2 &b) {
    return Vec2(x + b.x, y + b.y);
}

Vec2 Vec2::operator-(const Vec2 &b) {
    return Vec2(x - b.x, y - b.y);
}

Vec2 Vec2::operator*(const Vec2 &b) {
    return Vec2(x * b.x, y * b.y);
}

Vec2 Vec2::operator/(const Vec2 &b) {
    return Vec2(x / b.x, y / b.y);
}

Vec2 Vec2::operator+=(const Vec2 &b) {
    return Vec2(x + b.x, y + b.y);
}

Vec2 Vec2::operator-=(const Vec2 &b) {
    return Vec2(x - b.x, y - b.y);
}

Vec2 Vec2::operator*=(const Vec2 &b) {
    return Vec2(x * b.x, y * b.y);
}

Vec2 Vec2::operator/=(const Vec2 &b) {
    return Vec2(x / b.x, y / b.y);
}

bool IVec2::operator==(const IVec2 &b) {
    return (x == b.x && y == b.y);
}

bool IVec2::operator!=(const IVec2 &b) {
    return (x != b.x || y != b.y);
}

IVec2 IVec2::operator+(const IVec2 &b) {
    return IVec2(x + b.x, y + b.y);
}

IVec2 IVec2::operator-(const IVec2 &b) {
    return IVec2(x - b.x, y - b.y);
}

IVec2 IVec2::operator*(const IVec2 &b) {
    return IVec2(x * b.x, y * b.y);
}

IVec2 IVec2::operator/(const IVec2 &b) {
    return IVec2(x / b.x, y / b.y);
}

IVec2 IVec2::operator+=(const IVec2 &b) {
    return IVec2(x + b.x, y + b.y);
}

IVec2 IVec2::operator-=(const IVec2 &b) {
    return IVec2(x - b.x, y - b.y);
}

IVec2 IVec2::operator*=(const IVec2 &b) {
    return IVec2(x * b.x, y * b.y);
}

IVec2 IVec2::operator/=(const IVec2 &b) {
    return IVec2(x / b.x, y / b.y);
}

