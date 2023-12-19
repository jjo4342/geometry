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
  
  /**
   * @brief Copy assignment operator
   * @param other Point2D object
   * @return Point2D& Reference of Point2D object
   */
  auto operator=(const Point2D& other) -> Point2D& = default;
  /**
   * @brief Move assignment operator
   * @param other Point2D object
   * @return Point2D& Reference of Point2D object
   */
  auto operator=(Point2D&& other) -> Point2D& = default;

  /**
   * @brief Calculate distance between current point and target point
   * @param target Other Point2D object to calculate distance
   * @return double Distance between current point and target point
   */
  auto CalculateDistance(const Point2D& target) const -> double;
  /**
   * @brief Calculate distance between lhs point and rhs point
   * @param lhs Left hand side Point2D object
   * @param rhs Right hand side Point2D object
   * @return double Distance between lhs point and rhs point
   */
  [[nodiscard]] static auto CalculateDistance(const Point2D& lhs,
                                              const Point2D& rhs) -> double;


};

} // namespace programmers::geometry

#endif // PROGRAMMERS_GEOMETRY_POINT_2D_HPP_
