#pragma once
#include "gameNode.h"
#include "soundTestScene.h"
#include "testScene.h"
#include "ghostScene.h"

class playGround : public gameNode
{
private:
	RECT _psh_rc;
	RECT _SCH_rc;
	RECT _KDH_rc;
	RECT _KDK_rc;
	RECT _PJU_rc;
public:
	playGround();
	~playGround();

	virtual HRESULT init();	//�ʱ�ȭ ���� �Լ�
	virtual void release();	//�޸� ���� �Լ�
	virtual void update();	//���� ����
	virtual void render();	//�׸��� ����

};

