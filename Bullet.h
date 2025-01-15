#pragma once
#include "Vector2.h"

class Bullet {
public:
    Vecotr2 pos_;
    Vecotr2 speed_;
    int radius_;

public:
    Bullet();
    ~Bullet();
    void Update();
    void Draw();
};
