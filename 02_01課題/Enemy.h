#pragma once

class Enemy
{
public:

	void Update();

	bool Isloop() { return Loop_; }

private:

	enum class Step
	{
		kGetcloser,
		kShot,
		kLeave
	};

	//�ڋ�
	void Getcloser();
	//�ˌ�
	void Shot();
	//���E
	void Leave();

	//�����o�ϐ�
	Step step_ = Step::kGetcloser;

	static void (Enemy::* FuncTable[])();

	bool Loop_ = true;

};

