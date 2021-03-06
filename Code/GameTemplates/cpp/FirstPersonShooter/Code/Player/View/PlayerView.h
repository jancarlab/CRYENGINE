#pragma once

#include "Entities/Helpers/ISimpleExtension.h"

class CPlayer;

////////////////////////////////////////////////////////
// Player extension to manage the local client's view / camera
////////////////////////////////////////////////////////
class CPlayerView 
	: public CGameObjectExtensionHelper<CPlayerView, ISimpleExtension>
	, public IGameObjectView
{
public:
	CPlayerView();
	virtual ~CPlayerView();

	// ISimpleExtension
	virtual void PostInit(IGameObject* pGameObject) override;
	// ~ISimpleExtension

	// IGameObjectView
	virtual void UpdateView(SViewParams &viewParams) override;
	virtual void PostUpdateView(SViewParams &viewParams) override {}
	// ~IGameObjectView

	void OnPlayerModelChanged();

protected:
	CPlayer *m_pPlayer;

	// Identifier of the camera joint inside the Character rig
	// We use this to move the camera position in UpdateView
	uint32 m_cameraJointId;
};
