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
//‹ß‚Ã‚­
void Enemy::Getcloser()
{
	printf("Ú‹ß\n");

	step_ = Step::kShot;
}
//í‚¤
void Enemy::Shot()
{
	printf("ËŒ‚\n");

	step_ = Step::kLeave;
}
//—£‚ê‚é
void Enemy::Leave()
{
	printf("—£’E\n");
}
