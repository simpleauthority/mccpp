#include "Player.h"

#include <utility>

const std::string &Player::get_username() const {
    return m_username;
}

std::shared_ptr<uuids::uuid> Player::get_unique_id() const {
    return m_unique_id;
}

const std::shared_ptr<Connection> &Player::get_connection() const {
    return m_connection;
}

const std::shared_ptr<MojangProfile> &Player::get_mojang_profile() const {
    return m_mojang_profile;
}

void Player::set_mojang_profile(const std::shared_ptr<MojangProfile> &mojang_profile) {
    m_mojang_profile = mojang_profile;
}
