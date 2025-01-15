#include "Player.h"
#include "Novice.h"

Player::Player()
{
    // 初期化
    pos_ = { 600.0f, 650.0f };
    speed_ = { 6.0f, 6.0f };
    radius = 20;

    bullet = new Bullet();
    isBulletshot = false;
}

Player::~Player()
{
}

void Player::Update(char* keys, char* prekeys)
{
    // 移動
    if (keys == nullptr || prekeys == nullptr) {
        return;
    }

    if (keys[DIK_W]) {
        pos_.y -= speed_.y;
    }

    if (keys[DIK_S]) {
        pos_.y += speed_.y;
    }

    if (keys[DIK_A]) {
        pos_.x -= speed_.x;
    }

    if (keys[DIK_D]) {
        pos_.x += speed_.x;
    }

    if (keys[DIK_SPACE] && prekeys[DIK_SPACE]) {
        if (!isBulletshot) {
            isBulletshot = true;
            bullet->pos_.x = pos_.x;
            bullet->pos_.y = pos_.y;
        }
    }

    if (isBulletshot) {
        bullet->Update();

        if (bullet->pos_.y <= 0) {
            isBulletshot = false;
        }
    }
}

void Player::Draw()
{
    if (isBulletshot) {
        bullet->Draw();
    }

    Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y),
        radius, radius, 0.0f, BLUE, kFillModeSolid);
}
