#pragma once

#include <vsg/core/Array.h>
#include <vsg/core/Array2D.h>
// Some useful functions

namespace vsgsandbox
{
    template<typename EType>
    vsg::ref_ptr<vsg::Data> createArray(std::uint32_t width, std::uint32_t height, void* data,
                                        VkFormat format = VK_FORMAT_UNDEFINED)
    {
        return vsg::Array2D<EType>::create(width, height, static_cast<EType*>(data), vsg::Data::Layout{format});
    }
}
