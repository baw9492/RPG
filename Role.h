#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Role
{
    bool ForE;       //�ж����ѻ��
    int m_level;     //�ȼ�
    string m_name;   //����
    int m_maxHealth; //�������ֵ
    int m_atk;       //������
    int m_speed;     //�ٶ�

    virtual void battleAction();
};

void Role::battleAction()
{
}
