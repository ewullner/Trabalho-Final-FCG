#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include "collisions.h"

bool PontoCubo(glm::vec4 ponto, SceneObject object, glm::vec3 position, float scale, float valor){

    glm::vec3 bbox_max = object.bbox_max;
    glm::vec3 bbox_min = object.bbox_min;

    return((ponto.x >= ((bbox_min.x+valor)*scale)+ position.x)&&
          (ponto.x <= ((bbox_max.x-valor)*scale)+ position.x)&&
          (ponto.z >= ((bbox_min.z+valor)*scale)+ position.z)&&
          (ponto.z <= ((bbox_max.z-valor)*scale)+ position.z));

}




