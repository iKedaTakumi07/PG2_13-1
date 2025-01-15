#pragma once
#include "Bullet.h"
#include "Vector2.h"

class Player {
public:
    Vecotr2 pos_;
    Vecotr2 speed_;
    int radius;
    Bullet* bullet;
    int isBulletshot;

public:
    Player();

    ~Player();

    void Update(char* keys, char* prekeys);

    void Draw();
};
