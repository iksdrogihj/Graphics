//
//  Vec3f.hpp
//  Utilities
//
//  Created by Todor Ivanov on 5/29/16.
//  Copyright © 2016 Todor Ivanov. All rights reserved.
//

#ifndef Vec3f_hpp
#define Vec3f_hpp

#include <stdio.h>
namespace GraphicsUtilities
{
class Vec3f
{
public:
    Vec3f();
    Vec3f(float x, float y, float z);
    
    float &operator[](int index);
    float operator[](int index) const;
    
    Vec3f operator*(float scale) const;
    Vec3f operator/(float scale) const;
    Vec3f operator+(const Vec3f &other) const;
    Vec3f operator-(const Vec3f &other) const;
    Vec3f operator-() const;
    
    const Vec3f &operator*=(float scale);
    const Vec3f &operator/=(float scale);
    const Vec3f &operator+=(const Vec3f &other);
    const Vec3f &operator-=(const Vec3f &other);
    
    float magnitude() const;
    float magnitudeSquared() const;
    Vec3f normalize() const;
    float dot(const Vec3f &other) const;
    Vec3f cross(const Vec3f &other) const;
    
private:
    float v[3];
};

}
#endif /* Vec3f_hpp */
