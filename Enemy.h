#pragma once
#include "Vector2.h"
class Enemy {
public:
    Vecotr2 pos_;
    Vecotr2 speed_;
    int radius;
    static int studentCount;

public:
    Enemy();

    virtual ~Enemy();

    virtual void Update();

    virtual void Draw();
};
