#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include "collisions.h"

bool PontoCubo(glm::vec4 ponto, SceneObject object, glm::vec3 position, float scale, float valor){

    glm::vec3 bbox_max = object.bbox_max;
    glm::vec3 bbox_min = object.bbox_min;

    if((ponto.x >= ((bbox_min.x+valor)*scale)+ position.x)&&
          (ponto.x <= ((bbox_max.x-valor)*scale)+ position.x)&&
          (ponto.z >= ((bbox_min.z+valor)*scale)+ position.z)&&
          (ponto.z <= ((bbox_max.z-valor)*scale)+ position.z)){
          return true;
    }else
     return false;
}

/*
bool CuboCubo(glm::vec4 point, SceneObject object, glm::vec3 position, float scale){
    // Cube-Cube Collision
    // Verifica se o cubo criado a partir do ponto da câmera está dentro do cubo definido
    // pela Bounding Box do objeto


    glm::vec3 bbox_min = object.bbox_min;
    glm::vec3 bbox_max = object.bbox_max;

    float box_size = 0.3f; // Tamanho do "box" da câmera (jogador)

    float pbbmin_x = point.x - box_size/2.0;
    float pbbmax_x = point.x + box_size/2.0;
    float pbbmin_z = point.z - box_size/2.0;
    float pbbmax_z = point.z + box_size/2.0;

    return ((pbbmin_x <= ((bbox_max.x)*scale) + position.x) && // Esse valor é subtraído para arrumar a Hitbox
            (pbbmax_x >= ((bbox_min.x)*scale) + position.x) &&
            (pbbmin_z <= ((bbox_max.z)*scale) + position.z) && // Esse valor é subtraído para arrumar a Hitbox
            (pbbmax_z >= ((bbox_min.z)*scale) + position.z));
}*/




