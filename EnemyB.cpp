#include "EnemyB.h"
#include "Novice.h"

EnemyB::EnemyB()
{
    pos_ = { 300.0f, 400.0f };
    speed_ = { 4.0f, 2.5f };
    radius = 20;
    studentCount = 1;
}

EnemyB::~EnemyB()
{
}

void EnemyB::Update()
{
    if (studentCount == 1) {
        pos_.x += speed_.x;

        if (pos_.x - radius <= 0.0f || pos_.x + radius >= 1280.0f) {
            speed_.x *= -1;
        }
    }
}

void EnemyB::Draw()
{
    if (studentCount == 1) {
        Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), radius, radius, 0.0f, RED, kFillModeSolid);
    }
}
