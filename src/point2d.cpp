/**
 * @file geometry/src/point2d.cpp
 * @author Juyeong Jang
 * @brief Point class developments with 2-dimension
 * @version 1.0.0
 * @date 2023-12-31
 * @copyright Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
 */

// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#include "geometry/point2d.hpp"

#include <cmath>

namespace programmers::geometry {
Point2D::Point2D(double input_x, double input_y) : x_(input_x), y_(input_y) {}

auto Point2D::CalculateDistance(const Point2D& target) const -> double {
  return Point2D::CalculateDistance(*this, target);
}

auto Point2D::CalculateDistance(const Point2D& lhs, const Point2D& rhs)
    -> double {
  return std::sqrt(std::pow((lhs.x_ - rhs.x_), 2) +
                   std::pow((lhs.y_ - rhs.y_), 2));
}

auto Point2D::GetX() const -> double { return x_; }

auto Point2D::GetY() const -> double { return y_; }

auto Point2D::SetX(double input_x) -> void { x_ = input_x; }

auto Point2D::SetY(double input_y) -> void { y_ = input_y; }
}  // namespace programmers::geometry
