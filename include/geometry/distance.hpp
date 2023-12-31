/**
 * @file geometry/distance.hpp
 * @author  Juyeong Jang
 * @brief Distance class declaration for abstract distance
 * @version 1.0.0
 * @date 2023-12-31
 * @copyright Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
 */

// Copyright (c) 2023 Juyeong Jang, All Rights Reserved.
// Authors: Juyeong Jang

#ifndef PROGRAMMERS__GEOMETRY__DISTANCE_HPP_
#define PROGRAMMERS__GEOMETRY__DISTANCE_HPP_

#include <cstdint>

namespace programmers::geometry {
/**
 * @brief The class for abstract distance
 */
class Distance {
 public:
  /**
   * @brief The enum class for distance type.
   */
  enum class Type {
    kKilometer = 0,   ///< Kilometer
    kMeter = 1,       ///< Meter
    kCentimeter = 2,  ///< Centimeter
    kMillimeter = 3,  ///< Millimeter
    kMicrometer = 4,  ///< Micrometer
    kNanometer = 5    ///< Nanometer
  };

  /**
   * @brief Construct a new Distance object.
   */
  Distance() = default;

  explicit Distance(double input_value, Type input_type = Type::kMeter);

  /**
   * @brief The copy constructor.
   * @param other The other distance object.
   */
  Distance(const Distance& other) = default;
  /**
   * @brief The move constructor.
   * @param other The other distance object.
   */
  Distance(Distance&& other) noexcept = default;

  /**
   * @brief Destroy the Distance object.
   */
  virtual ~Distance() = default;

  /**
   * @brief The copy assignment operator.
   * @param other The other distance object.
   * @return The reference of distance object.
   */
  auto operator=(const Distance& other) -> Distance& = default;

  /**
   * @brief The move assignment operator.
   * @param other The other distance object.
   * @return The reference of distance object.
   */
  auto operator=(Distance&& other) -> Distance& = default;

  /**
   * @brief Get the Distance value for distance type.
   * @param input_type The distance type.
   * @return double The distance value.
   */
  [[nodiscard]] auto GetValue(const Type& input_type) const -> double;

  /**
   * @brief Set the Distance value for distance type.
   * @param input_value The distance value.
   * @param input_type The distance type.
   */
  auto SetValue(double input_value, const Type& input_type) -> void;

  /**
   * @brief Compare with other distance object for equality.
   * @param other The other distance object.
   * @return true If equal.
   * @return false If not equal.
   */
  auto operator==(const Distance& other) const -> bool;

  auto operator!=(const Distance& other) const -> bool;
  auto operator<(const Distance& other) const -> bool;
  auto operator<=(const Distance& other) const -> bool;
  auto operator>(const Distance& other) const -> bool;
  auto operator>=(const Distance& other) const -> bool;

  /**
   * @brief Add other distance object.
   * @param other The other distance object.
   * @return Distance The result of addition.
   */
  auto operator+(const Distance& other) const -> Distance;

  auto operator-(const Distance& other) const -> Distance;
  auto operator*(double scale) const -> Distance;
  auto operator/(double scale) const -> Distance;
  auto operator+=(const Distance& other) const -> void;
  auto operator-=(const Distance& other) const -> void;
  auto operator*=(double scale) const -> void;
  auto operator/=(double scale) const -> void;

 protected:
 private:
  int64_t nanometer_{0};  ///< Nanometer
};

}  // namespace programmers::geometry

#endif  // PROGRAMMERS__GEOMETRY__DISTANCE_HPP_
