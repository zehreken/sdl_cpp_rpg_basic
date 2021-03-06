#ifndef transform_hpp
#define transform_hpp

#include "../primitives/primitives.hpp"

class GameObject;
class Transform
{
public:
	Transform();
	Transform(GameObject *p_gameObject);
	void setPosition(float x, float y);
	void setPosition(Vector2 position);
	void translate(float x, float y);
	void translate(Vector2 deltaPosition);
	Vector2 getPosition();
	void setScale(float x, float y);
	void setScale(Vector2 scale);
	Vector2 getScale();
	Transform *p_parent();
	void setParent(Transform *p_parent);
	GameObject *p_gameObject();
private:
	Transform *_p_parent;
	GameObject *_p_gameObject;
	Vector2 _position;
	Vector2 _scale;
};

#endif /* transform_hpp */
