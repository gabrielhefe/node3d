//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#pragma once /* PlayerMe.h */
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include "Role.h"
#include "TSingleton.h"
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

class CPlayerMe : public CRole, public TSingleton<CPlayerMe>
{
protected:
	unsigned long	m_uAttackTarget;
public:
	CPlayerMe();
	~CPlayerMe();
	// ----
	void			playWalkSound	();
	// ----
	virtual void	frameMoveRole	(const Matrix& mWorld, double fTime, float fElapsedTime);
	virtual void	release			()								{;}
	// ----
	void			setAttackTarget	(unsigned long uAttackTarget)	{ m_uAttackTarget = uAttackTarget; };
	unsigned long	getAttackTarget	()const							{ return m_uAttackTarget; };

};
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------