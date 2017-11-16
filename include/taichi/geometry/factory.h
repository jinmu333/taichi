/*******************************************************************************
    Taichi - Physically based Computer Graphics Library

    Copyright (c) 2016 Yuanming Hu <yuanmhu@gmail.com>

    All rights reserved. Use of this source code is governed by
    the MIT license as written in the LICENSE file.
*******************************************************************************/

#pragma once

#include <taichi/common/interface.h>

#include <taichi/math/math.h>
#include <taichi/math/array_2d.h>

#include <taichi/geometry/primitives.h>

TC_NAMESPACE_BEGIN

typedef std::function<Vector3(Vector2)> Function23;
typedef std::function<Vector2(Vector2)> Function22;
typedef std::function<Vector2(real)> Function12;
typedef std::function<Vector3(real)> Function13;

class Mesh3D {
 public:
  // norm and uv can be null
  static std::vector<Triangle> generate(const Vector2i res,
                                        const Function23 *surf,
                                        const Function23 *norm,
                                        const Function22 *uv,
                                        bool smooth_normal);
};

TC_NAMESPACE_END
