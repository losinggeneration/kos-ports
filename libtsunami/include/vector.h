/*      
   Tsunami for KallistiOS ##version##
        
   vector.h

   (c)2002 Dan Potter

   $Id: vector.h,v 1.2 2003/04/24 02:57:20 bardtx Exp $
*/

#ifndef __TSUNAMI_VECTOR_H
#define __TSUNAMI_VECTOR_H

#include <kos/vector.h>
#include <assert.h>

#ifdef _arch_dreamcast
#	include <dc/fmath.h>
#else
#	include <math.h>
#endif

/// A C++ friendly wrapper for the point_t / vector_t struct
class Vector {
public:
	Vector(float ix = 0.0f, float iy = 0.0f, float iz = 0.0f, float iw = 0.0f)
		: x(ix), y(iy), z(iz), w(iw) { }

	/// Return one of the vector elements array-style
	float operator[](int i) const {
		if (i == 0)
			return x;
		else if (i == 1)
			return y;
		else if (i == 2)
			return z;
		else if (i == 3)
			return w;
		else {
			assert_msg(false, "Point::operator[] Invalid index");
			return 0.0f;
		}
	}

	/// Compare two vectors for equality
	bool operator==(const Vector & other) const {
		return x == other.x && y == other.y && z == other.z && w == other.w;
	}

	/// Compare two vectors for inequality
	bool operator!=(const Vector & other) const {
		return !(*this == other);
	}

	/// Add two vectors
	Vector operator+(const Vector & other) const {
		return Vector(x + other.x, y + other.y, z + other.z, w + other.w);
	}

	/// Subtract two vectors
	Vector operator-(const Vector & other) const {
		return Vector(x - other.x, y - other.y, z - other.z, w - other.w);
	}

	/// Unary minus
	Vector operator-() const {
		return Vector(-x, -y, -z);
	}

	/// Multiply by a scalar
	Vector operator*(float s) const {
		return Vector(x * s, y * s, z * s, w * s);
	}

	/// Inline add two vectors
	Vector & operator+=(const Vector & other) {
		x += other.x;
		y += other.y;
		z += other.z;
		w += other.w;
		return *this;
	}

	/// Inline subtract two vectors
	Vector & operator-=(const Vector & other) {
		x -= other.x;
		y -= other.y;
		z -= other.z;
		w -= other.w;
		return *this;
	}

	// Inline multiply by a scalar
	Vector & operator*=(float s) {
		x *= s;
		y *= s;
		z *= s;
		w *= s;
		return *this;
	}

	/// Get a C vector_t struct out of it
	operator vector_t() const {
		vector_t v = { x, y, z, w };
		return v;
	}

	/// Dot product with another vector.
	/// NOTE: Only takes x,y,z into account.
	float dot(const Vector & other) const {
		return (x * other.x)
			+ (y * other.y)
			+ (z * other.z);
	}

	/// Cross product with another vector
	/// NOTE: Only takes x,y,z into account.
	Vector cross(const Vector & other) const {
		return Vector(
			y * other.z - z*other.y,
			z * other.x - x*other.z,
			x * other.y - y*other.x);
	}

	/// Get the length/magnitude of the vector
	float length() const {
#ifdef _arch_dreamcast
		return fsqrt(x*x+y*y+z*z+w*w);
#else
		return (float)sqrt(x*x+y*y+z*z+w*w);
#endif
	}

	/// Normalize this vector
	Vector normalize() const {
		float l = length();
		return Vector(
			x / l,
			y / l,
			z / l,
			w / l);
	}

public:
	float	x, y, z, w;
};

#endif	/* __TSUNAMI_VECTOR_H */

