/*
cbase_typelist.h - CSMoE Gameplay server
Copyright (C) 2019 Moemod Hymei

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

#pragma once

#include "cbase_typelist_helper.h"

#ifdef CLIENT_DLL
namespace cl {
#else
namespace sv {
#endif

TL_ADD(CKnifeDragonsword)
TL_ADD(CKnifeDualsword)
TL_ADD(CKnifeSkullAxe)
TL_ADD(CKnife_Zombi)
TL_ADD(CAK47)
TL_ADD(CAK47_Long)
TL_ADD(CAnaconda)
TL_ADD(CAS50)
TL_ADD(CAUG)
TL_ADD(CAWP)
TL_ADD(CBalrog7)
TL_ADD(CC4)
TL_ADD(CCannon)
TL_ADD(CDEAGLE)
TL_ADD(CDeagleD)
TL_ADD(CELITE)
TL_ADD(CFamas)
TL_ADD(CFiveSeven)
TL_ADD(CFlashbang)
TL_ADD(CG3SG1)
TL_ADD(CGalil)
TL_ADD(CGatling)
TL_ADD(CGLOCK18)
TL_ADD(CGungnir)
TL_ADD(CHEGrenade)
TL_ADD(CInfinity)
TL_ADD(CInfinityEX1)
TL_ADD(CInfinityEX2)
TL_ADD(CInfinitySS)
TL_ADD(CInfinitySR)
TL_ADD(CInfinitySB)
TL_ADD(CK1a)
TL_ADD(CKnife)
TL_ADD(CKRISS)
TL_ADD(CM2)
TL_ADD(CM3)
TL_ADD(CM4A1)
TL_ADD(CM14EBR)
TL_ADD(CM95)
TL_ADD(CM249)
TL_ADD(CM1887)
TL_ADD(CMAC10)
TL_ADD(CMG3)
TL_ADD(CMG36)
TL_ADD(CMP5N)
TL_ADD(CMP7A1_Carbine)
TL_ADD(CMP7A1D)
TL_ADD(CMP7A1_Pistol)
TL_ADD(CP90)
TL_ADD(CP228)
TL_ADD(CSCARHeavy)
TL_ADD(CScarLight)
TL_ADD(CSCOUT)
TL_ADD(CSG550)
TL_ADD(CSG552)
TL_ADD(CSmokeGrenade)
//TL_ADD(CSVDEXGrenade)
TL_ADD(CSVDEX)
TL_ADD(CTAR21)
TL_ADD(CTHOMPSON)
TL_ADD(CTMP)
TL_ADD(CUMP45)
TL_ADD(CUSP)
TL_ADD(CWA2000)
TL_ADD(CXM8Carbine)
TL_ADD(CXM8SharpShooter)
TL_ADD(CXM1014)
TL_ADD(CCannonPlasma)
TL_ADD(CCannonTiger)
TL_ADD(CDeagleShura)
TL_ADD(CKnifeFacelessVoid)
TL_ADD(CKnifeFrequency9)
TL_ADD(CInfinityX)
TL_ADD(CKnifeLcSword)
TL_ADD(CM134HeroI)
TL_ADD(CKnifeNataKnifeDX)
TL_ADD(CKnifeOppoVivo)
TL_ADD(CKnifeStormgiantX)
TL_ADD(CKnifeStrongKnifeX)
//TL_ADD(CXM2010PC_Crystal)
TL_ADD(CXM2010PC)

#ifndef CLIENT_DLL
TL_ADD(CAmbientGeneric)
TL_ADD(CEnvSound)
TL_ADD(CSpeaker)
TL_ADD(C9MMAmmo)
TL_ADD(CBuckShotAmmo)
TL_ADD(C556NatoAmmo)
TL_ADD(C556NatoBoxAmmo)
TL_ADD(C762NatoAmmo)
TL_ADD(C45ACPAmmo)
TL_ADD(C50AEAmmo)
TL_ADD(C338MagnumAmmo)
TL_ADD(C57MMAmmo)
TL_ADD(C357SIGAmmo)
TL_ADD(C46MMAmmo)
TL_ADD(C50BMGAmmo)
TL_ADD(CCannonAmmo)
TL_ADD(CGungnirAmmo)
TL_ADD(CWeaponBox)
TL_ADD(CArmoury)
TL_ADD(CPointEntity)
TL_ADD(CBubbling)
TL_ADD(CBeam)
TL_ADD(CLightning)
TL_ADD(CEnvBeam)
TL_ADD(CTripBeam)
TL_ADD(CLaser)
TL_ADD(CGlow)
TL_ADD(CBombGlow)
TL_ADD(CSprite)
TL_ADD(CGibShooter)
TL_ADD(CEnvShooter)
TL_ADD(CTestEffect)
TL_ADD(CBlood)
TL_ADD(CShake)
TL_ADD(CFade)
TL_ADD(CMessage)
TL_ADD(CEnvFunnel)
TL_ADD(CEnvBeverage)
TL_ADD(CItemSoda)
TL_ADD(CDecal)
TL_ADD(CCorpse)
TL_ADD(CWorld)
TL_ADD(CEnvGlobal)
TL_ADD(CMultiSource)
TL_ADD(CBaseButton)
TL_ADD(CRotButton)
TL_ADD(CMomentaryRotButton)
TL_ADD(CEnvSpark)
TL_ADD(CEnvDebris)
TL_ADD(CButtonTarget)
TL_ADD(CGenericCycler)
TL_ADD(CCyclerProbe)
TL_ADD(CCyclerSprite)
TL_ADD(CWeaponCycler)
TL_ADD(CWreckage)
TL_ADD(CShower)
TL_ADD(CEnvExplosion)
TL_ADD(CFrictionModifier)
TL_ADD(CAutoTrigger)
TL_ADD(CTriggerRelay)
TL_ADD(CMultiManager)
TL_ADD(CRenderFxManager)
TL_ADD(CBaseTrigger)
TL_ADD(CTriggerHurt)
TL_ADD(CTriggerMonsterJump)
TL_ADD(CTriggerCDAudio)
TL_ADD(CTargetCDAudio)
TL_ADD(CTriggerMultiple)
TL_ADD(CTriggerOnce)
TL_ADD(CTriggerCounter)
TL_ADD(CTriggerVolume)
TL_ADD(CFireAndDie)
TL_ADD(CChangeLevel)
TL_ADD(CLadder)
TL_ADD(CTriggerPush)
TL_ADD(CTriggerTeleport)
TL_ADD(CTeleportDest)
TL_ADD(CBuyZone)
TL_ADD(CBombTarget)
TL_ADD(CHostageRescue)
TL_ADD(CEscapeZone)
TL_ADD(CVIP_SafetyZone)
TL_ADD(CTriggerSave)
TL_ADD(CTriggerEndSection)
TL_ADD(CTriggerGravity)
TL_ADD(CTriggerChangeTarget)
TL_ADD(CTriggerCamera)
TL_ADD(CWeatherEnvSnow)
TL_ADD(CWeatherFuncSnow)
TL_ADD(CWeatherEnvRain)
TL_ADD(CWeatherFuncRain)
TL_ADD(CClientFog)
TL_ADD(CBreakable)
TL_ADD(CPushable)
TL_ADD(CFuncWall)
TL_ADD(CFuncWallToggle)
TL_ADD(CFuncConveyor)
TL_ADD(CFuncIllusionary)
TL_ADD(CFuncMonsterClip)
TL_ADD(CFuncRotating)
TL_ADD(CPendulum)
TL_ADD(CBaseDoor)
TL_ADD(CFuncWater)
TL_ADD(CRotDoor)
TL_ADD(CMomentaryDoor)
TL_ADD(CBaseGrenCatch)
TL_ADD(CFuncWeaponCheck)
TL_ADD(CFuncPlat)
TL_ADD(CFuncPlatRot)
TL_ADD(CFuncTrain)
TL_ADD(CFuncTrackTrain)
TL_ADD(CFuncTrainControls)
TL_ADD(CFuncTrackChange)
TL_ADD(CFuncTrackAuto)
TL_ADD(CGunTarget)
TL_ADD(CHealthKit)
TL_ADD(CWallHealth)
TL_ADD(CFuncMortarField)
TL_ADD(CMortar)
TL_ADD(CRecharge)
TL_ADD(CFuncTankGun)
TL_ADD(CFuncTankLaser)
TL_ADD(CFuncTankRocket)
TL_ADD(CFuncTankMortar)
TL_ADD(CFuncTankControls)
TL_ADD(CFuncVehicle)
TL_ADD(CFuncVehicleControls)
TL_ADD(CGameScore)
TL_ADD(CGameEnd)
TL_ADD(CGameText)
TL_ADD(CGameTeamMaster)
TL_ADD(CGameTeamSet)
TL_ADD(CGamePlayerZone)
TL_ADD(CGamePlayerHurt)
TL_ADD(CGameCounter)
TL_ADD(CGameCounterSet)
TL_ADD(CGamePlayerEquip)
TL_ADD(CGamePlayerTeam)
TL_ADD(CGrenade)
TL_ADD(CGungnirProjectile)
TL_ADD(CGungnirSpear)
TL_ADD(CBalrog7Explosion)
TL_ADD(CSVDEXGrenade)
TL_ADD(CHostage)
TL_ADD(CScientist)
TL_ADD(CNullEntity)
TL_ADD(CDMStart)
TL_ADD(CPlayerStart)
TL_ADD(CVIPStart)
TL_ADD(CLandMark)
TL_ADD(CHostageRescuePoint)
TL_ADD(CBombTargetPoint)
TL_ADD(CBaseDelay)
TL_ADD(CBasePlayer)
TL_ADD(CDeadHEV)
TL_ADD(CStripWeapons)
TL_ADD(CRevertSaved)
TL_ADD(CInfoIntermission)
TL_ADD(CMapInfo)
TL_ADD(CAirtank)
TL_ADD(CWorldItem)
TL_ADD(CItemSuit)
TL_ADD(CItemBattery)
TL_ADD(CItemAntidote)
TL_ADD(CItemSecurity)
TL_ADD(CItemLongJump)
TL_ADD(CItemKevlar)
TL_ADD(CItemAssaultSuit)
TL_ADD(CItemThighPack)
TL_ADD(CLight)
TL_ADD(CLightSpot)
TL_ADD(CEnvLight)
TL_ADD(CMonster)
TL_ADD(CPathCorner)
TL_ADD(CPathTrack)
TL_ADD(CRailKnife)
TL_ADD(CSoundEnt)
TL_ADD(CSupplyBox)
TL_ADD(CZombieSpawn)
TL_ADD(CZBSBreak)
TL_ADD(CXM2010PC_Crystal)
#endif

TL_END(AllEntityTypeList)
	
}