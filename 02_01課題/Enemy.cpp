#include"Enemy.h"

#include  <stdio.h>

void(Enemy::* Enemy::FuncTable[])()
{
	&Enemy::Getcloser,
		& Enemy::Shot,
		& Enemy::Leave
};

void Enemy::Update()
{
	(this->*FuncTable[(int)step_])();
}
//�߂Â�
void Enemy::Getcloser()
{
	printf("�ڋ�\n");

	step_ = Step::kShot;
}
//�키
void Enemy::Shot()
{
	printf("�ˌ�\n");

	step_ = Step::kLeave;
}
//�����
void Enemy::Leave()
{
	printf("���E\n");
}
