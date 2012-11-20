#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "Scene.hpp"

class Renderer {
    public:
        Renderer();

        void draw(Scene const& scene) const;
};

#endif //RENDERER_HPP
