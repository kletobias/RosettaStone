// Copyright (c) 2018 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <hspp/Enchants/Power.h>

namespace Hearthstonepp
{
std::vector<ITask*>& Power::GetPowerTask()
{
    return m_powerTask;
}

Enchant* Power::GetEnchant() const
{
    return m_enchant;
}

void Power::AddPowerTask(ITask* task)
{
    m_powerTask.emplace_back(task);
}

void Power::AddEnchant(Enchant* enchant)
{
    delete m_enchant;

    m_enchant = enchant;
}
}  // namespace Hearthstonepp