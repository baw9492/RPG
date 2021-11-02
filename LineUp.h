#pragma once
#include "Role.h"
struct LineUp
{
    Role front[4];
    int frontNum = 0;
    Role after[4];
    int afterNum = 0;
    int totalNum;

    //չʾ����
    void showLineup();
};

void LineUp::showLineup()
{
    cout << "ǰ��: \t\t����:" << endl;

    for (int i = 0; i < this->totalNum; i++)
    {
        if (i < this->frontNum)
        {
            cout << this->front[i].m_name << "\t\t";
        }
        if (i < this->afterNum)
        {
            cout << this->after[i].m_name;
        }
        cout << endl;
    }
}
