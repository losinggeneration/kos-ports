/*      
   Tsunami for KallistiOS ##version##
        
   matrix.h

   Copyright (C)2003 Dan Potter

   $Id: vector.h,v 1.2 2003/04/24 02:57:20 bardtx Exp $
*/

#ifndef __TSUNAMI_MATRIX_H
#define __TSUNAMI_MATRIX_H

#include <kos/vector.h>

#ifdef _arch_dreamcast
#	include <dc/fmath.h>
#else
#	error Architecture not supported yet
#endif

/// A C++ friendly wrapper for the matrix_t struct
class Matrix {
public:
	Matrix(bool initialize = true) {
		if (initialize)
			identity();
	}

	Matrix(const Matrix & other) {
		memcpy(&matrix, &other.matrix, sizeof(matrix));
	}

	Matrix & operator=(const Matrix & other) {
		memcpy(&matrix, &other.matrix, sizeof(matrix));
	}

	/// Set us to the identity matrix
	void identity() {
		memset(&matrix, 0, sizeof(matrix));
		matrix[0][0] = 1.0f;
		matrix[1][1] = 1.0f;
		matrix[2][2] = 1.0f;
		matrix[3][3] = 1.0f;
	}

	/// Compare two matrices for equality
	bool operator==(const Matrix & other) const {
		int x, y;
		for (y=0; y<4; y++)
			for (x=0; x<4; x++)
				if (matrix[x][y] != other.matrix[x][y])
					return false;
		return true;
	}

	/// Compare two matrices for inequality
	bool operator!=(const Matrix & other) const {
		return !(*this == other);
	}

	/// Add two matrices
	Matrix operator+(const Matrix & other) const {
		Matrix nm(false);
		int x, y;

		for (y=0; y<4; y++)
			for (x=0; x<4; x++)
				nm.matrix[x][y] = matrix[x][y] + other.matrix[x][y];
		return nm;
	}

	/// Subtract two matrices
	Matrix operator-(const Matrix & other) const {
		Matrix nm(false);
		int x, y;

		for (y=0; y<4; y++)
			for (x=0; x<4; x++)
				nm.matrix[x][y] = matrix[x][y] + other.matrix[x][y];
		return nm;
	}

	/// Unary minus
	Matrix operator-() const {
		Matrix nm(false);
		int x, y;

		for (y=0; y<4; y++)
			for (x=0; x<4; x++)
				nm.matrix[x][y] = -matrix[x][y];
		return nm;
	}

	/// Inline add two matrices
	Matrix & operator+=(const Matrix & other) {
		*this = *this + other;
		return *this;
	}

	/// Inline subtract two matrices
	Matrix & operator-=(const Matrix & other) {
		*this = *this - other;
		return *this;
	}

public:
	matrix_t	matrix;
};

#endif	/* __TSUNAMI_MATRIX_H */

