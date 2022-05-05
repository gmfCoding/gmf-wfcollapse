#include "CommonData.hpp"

RectUV::RectUV (glm::vec2 p_topRight, glm::vec2 p_topLeft, glm::vec2 p_bottomRight, glm::vec2 p_bottomLeft, float size)
{
    topRight = glm::vec2(p_topRight/size);
    topLeft = glm::vec2(p_topLeft/size);
    bottomRight = glm::vec2(p_bottomRight/size);
    bottomLeft = glm::vec2(p_bottomLeft/size);
}

RectUV::RectUV () : topRight(), topLeft(), bottomRight(), bottomLeft()
{

}