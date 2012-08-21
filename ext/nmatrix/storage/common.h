/////////////////////////////////////////////////////////////////////
// = NMatrix
//
// A linear algebra library for scientific computation in Ruby.
// NMatrix is part of SciRuby.
//
// NMatrix was originally inspired by and derived from NArray, by
// Masahiro Tanaka: http://narray.rubyforge.org
//
// == Copyright Information
//
// SciRuby is Copyright (c) 2010 - 2012, Ruby Science Foundation
// NMatrix is Copyright (c) 2012, Ruby Science Foundation
//
// Please see LICENSE.txt for additional copyright notices.
//
// == Contributing
//
// By contributing source code to SciRuby, you agree to be bound by
// our Contributor Agreement:
//
// * https://github.com/SciRuby/sciruby/wiki/Contributor-Agreement
//
// == common.h
//
// Header file for code common to all storage types.

#ifndef STORAGE_COMMON_H
#define STORAGE_COMMON_H

/*
 * Standard Includes
 */

/*
 * Project Includes
 */
#include "data/data.h"
#include "nmatrix.hpp"

/*
 * Macros
 */

/*
 * Types
 */

// For binary operations involving matrices that need to be casted.
struct STORAGE_PAIR {
	STORAGE* left;
	STORAGE* right;
};

struct SLICE {
	size_t*	coords; // Coordinate of first element
	size_t*	lengths; // Lengths of slice
	bool  	single; // true if all lengths equal to 1 (represents single matrix element)
};

/*
 * Data
 */

/*
 * Functions
 */

size_t storage_count_max_elements(const STORAGE* storage);

#endif // STORAGE_COMMON_H