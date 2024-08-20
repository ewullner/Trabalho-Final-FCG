#include <glm/glm.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include "collisions.h"

bool PontoCubo(glm::vec4 ponto, SceneObject object, glm::vec3 position, float scale, float valor) {
    glm::vec3 bbox_max = object.bbox_max;
    glm::vec3 bbox_min = object.bbox_min;

    if((ponto.x >= ((bbox_min.x+valor)*scale)+position.x) &&
       (ponto.x <= ((bbox_max.x-valor)*scale)+position.x) &&
       (ponto.y >= ((bbox_min.y+valor)*scale)+position.y) &&
       (ponto.y <= ((bbox_max.y-valor)*scale)+position.y) &&
       (ponto.z >= ((bbox_min.z+valor)*scale)+position.z) &&
       (ponto.z <= ((bbox_max.z-valor)*scale)+position.z)) {
        return true;
    } else {
        return false;
    }
}


bool CuboCubo(glm::vec4 point, SceneObject object, glm::vec3 position, float scale, float valor, float box_size){
    // Cube-Cube Collision
    // Verifica se o cubo criado a partir do ponto da c�mera est� dentro do cubo definido
    // pela Bounding Box do objeto


    glm::vec3 bbox_min = object.bbox_min;
    glm::vec3 bbox_max = object.bbox_max;

    float pbbmin_x = point.x - box_size/2.0;
    float pbbmax_x = point.x + box_size/2.0;
    float pbbmin_z = point.z - box_size/2.0;
    float pbbmax_z = point.z + box_size/2.0;

    if ((pbbmin_x <= ((bbox_max.x+valor)*scale) + position.x) && // Esse valor � subtra�do para arrumar a Hitbox
            (pbbmax_x >= ((bbox_min.x-valor)*scale) + position.x) &&
            (pbbmin_z <= ((bbox_max.z+valor)*scale) + position.z) && // Esse valor � subtra�do para arrumar a Hitbox
            (pbbmax_z >= ((bbox_min.z-valor)*scale) + position.z)){
            return true;
    }else
      return false;
}

bool CuboCilindro(glm::vec4 point, SceneObject object, glm::vec3 position, float cylinder_radius) {
    // Calcular a distância horizontal (plano XZ) entre o centro do cubo e o eixo do cilindro
    float distance_x = point.x - position.x;
    float distance_z = point.z - position.z;
    
    // Distância horizontal ao quadrado (evitar raiz quadrada desnecessária)
    float distance_squared = distance_x * distance_x + distance_z * distance_z;
    float radius_squared = cylinder_radius * cylinder_radius;
    
    // Verificar se a distância horizontal está dentro do raio do cilindro
    return distance_squared <= radius_squared;
}




