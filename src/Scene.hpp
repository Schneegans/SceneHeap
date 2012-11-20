#ifndef SCENE_HPP
#define SCENE_HPP

#include "Node.hpp"

class Scene {
    public:
        Scene();

        void add_node(Node const& node);
};

#endif //SCENE_HPP
