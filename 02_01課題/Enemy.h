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

	//Ú‹ß
	void Getcloser();
	//ËŒ‚
	void Shot();
	//—£’E
	void Leave();

	//ƒƒ“ƒo•Ï”
	Step step_ = Step::kGetcloser;

	static void (Enemy::* FuncTable[])();

	bool Loop_ = true;

};

