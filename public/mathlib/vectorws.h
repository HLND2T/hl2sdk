#ifndef VECTORWS_H
#define VECTORWS_H

#ifdef _WIN32
#pragma once
#endif

#include "vector.h"

// AMNOTE: Mostly a stub over a real VectorWS,
// most likely meaning of it is world space vector
class VectorWS : public Vector
{
public:
	using Vector::Vector;

	// Inherited constructors exclude the base copy constructor, so provide it explicitly.
	VectorWS( const Vector &vOther ) : Vector( vOther ) {}
};

#endif // VECTORWS_H