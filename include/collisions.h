#include <string>
#include <glad/glad.h>

struct SceneObject
{
    std::string  name;        // Nome do objeto
    size_t       first_index; // �ndice do primeiro v�rtice dentro do vetor indices[] definido em BuildTrianglesAndAddToVirtualScene()
    size_t       num_indices; // N�mero de �ndices do objeto dentro do vetor indices[] definido em BuildTrianglesAndAddToVirtualScene()
    GLenum       rendering_mode; // Modo de rasteriza��o (GL_TRIANGLES, GL_TRIANGLE_STRIP, etc.)
    GLuint       vertex_array_object_id; // ID do VAO onde est�o armazenados os atributos do modelo
    glm::vec3    bbox_min; // Axis-Aligned Bounding Box do objeto
    glm::vec3    bbox_max;
};

//bool pointSphereCollision(glm::vec4 point, glm::vec3 sphere, float radius);
bool PontoCubo(glm::vec4 ponto, SceneObject object, glm::vec3 position, float scale, float valor);
bool CuboCubo(glm::vec4 point, SceneObject object, glm::vec3 position, float scale, float valor, float box_size);
