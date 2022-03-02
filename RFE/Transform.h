#pragma once

#include "Component.h"
#include "Vector3f.h"
#include "Quaternion.h"

namespace rfe
{
    class RFE_API Transform : public Component
    {
    public:
        Vector3f position = Vector3f();
        Quaternion<float> rotation = Quaternion<float>();
        Vector3f scale = Vector3f();
    };
}