/// @ref gtc_matrix_transform
/// @file glm/gtc/matrix_transform.hpp
///
/// @see core (dependence)
/// @see gtx_transform
/// @see gtx_transform2
///
/// @defgroup gtc_matrix_transform GLM_GTC_matrix_transform
/// @ingroup gtc
///
/// Include <glm/gtc/matrix_transform.hpp> to use the features of this extension.
///
/// Defines functions that generate common transformation matrices.
///
/// The matrices generated by this extension use standard OpenGL fixed-function
/// conventions. For example, the lookAt function generates a transform from world
/// space into the specific eye space that the projective matrix functions
/// (perspective, ortho, etc) are designed to expect. The OpenGL compatibility
/// specifications defines the particular layout of this eye space.

#pragma once

// Dependencies
#include "../mat4x4.hpp"
#include "../vec2.hpp"
#include "../vec3.hpp"
#include "../vec4.hpp"
#include "../ext/matrix_projection.hpp"
#include "../ext/matrix_clip_space.hpp"
#include "../ext/matrix_transform.hpp"

#if GLM_MESSAGES == GLM_ENABLE && !defined(GLM_EXT_INCLUDED)
  #pragma message("GLM: GLM_GTC_matrix_transform extension included")
#endif

#include "matrix_transform.inl"
