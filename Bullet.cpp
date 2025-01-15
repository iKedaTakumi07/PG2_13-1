#include "Bullet.h"
#include "Novice.h"

Bullet::Bullet()
{
    pos_ = { 0.0f, 0.0f };
    speed_ = { 0.0f, -5.0f };
    radius_ = 10;
}

Bullet::~Bullet()
{
}

void Bullet::Update()
{
    pos_.y += speed_.y;
}

void Bullet::Draw()
{
    Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y),
        radius_, radius_, 0.0f, BLUE, kFillModeSolid);
}
