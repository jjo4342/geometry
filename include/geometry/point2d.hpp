/**
 * @file point2d.hpp
 * @author Juyeong Jang (jjo4342@gmail.com)
 * @brief
 * @version 1.0.0
 * @date 2023-12-19
 * @copyright Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
 */

// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#ifndef PROGRAMMERS_GEOMETRY_POINT_2D_HPP_
#define PROGRAMMERS_GEOMETRY _POINT_2D_HPP_

namespace programmers::geometry {

/**
 * @brief Point2D class with 2-dimensoin
 */
class Point2D {
 public:
 /**
  * @brief Construct New Point2D object
  */
  Point2D() = default;
  /**
   * @brief Construct New Point2D object with x, y value
   * @param x Double type x coordinate value
   * @param y Double type y coordinate value
   */
  Point2D(double x, double y);

  /**
   * @brief Copy New Point2D object with other Point2D object
   * @param other Point2D object
   */
  Point2D(const Point2D& other) = default;
  /**
   * @brief Move New Point2D object with other Point2D object
   * @param other Point2D object
   */
  Point2D(Point2D&& other) noexcept = default;

   /**
   * @brief Destroy Point2D object
   */
  virtual ~Point2D() = default;

};

} // namespace programmers::geometry

#endif // PROGRAMMERS_GEOMETRY_POINT_2D_HPP_
