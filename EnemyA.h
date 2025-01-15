#pragma once
#include "Enemy.h"

class EnemyA : public Enemy {
public:
    EnemyA();

    ~EnemyA() override;

    void Update() override;

    void Draw() override;
};
