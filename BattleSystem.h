#pragma once
#include <iostream>
#include "Role.h"

using namespace std;

struct BattleSystem
{
    //ȫ���ɫ����
    Role allRole[8];

    //�ҷ�ս����Ϊ
    void friBattleAction();

    //�з�ս����Ϊ
    void EneBattleAction();

    //���캯��, ����˫������
    BattleSystem();
};

BattleSystem::BattleSystem()
{
}
