    #undef CallAMXNative
    #undef AMXNativeExists
    #undef DebugFunction

    // Util
    #undef SetGameModeText
    #undef SendClientMessage
	#undef SendClientMessageToAll
	#undef SendPlayerMessageToPlayer
	#undef SendPlayerMessageToAll
    #undef SendDeathMessage
    #undef GameTextForAll
    #undef GameTextForPlayer
    #undef SetTimer
    #undef KillTimer
    #undef GetTickCount
	#undef GetMaxPlayers

    // Game

    #undef SetTeamCount
    #undef AddPlayerClass
	#undef AddPlayerClassEx
    #undef AddStaticVehicle
    #undef AddStaticVehicleEx
    #undef AddStaticPickup
    #undef CreatePickup
    #undef DestroyPickup
    #undef ShowPlayerMarkers
    #undef ShowNameTags
    #undef GameModeExit
    #undef SetWorldTime
    #undef GetWeaponName
    #undef EnableTirePopping
    #undef EnableVehicleFriendlyFire
	#undef AllowInteriorWeapons
	#undef SetWeather
	#undef SetGravity
	#undef AllowAdminTeleport
	#undef SetDeathDropAmount
	#undef CreateExplosion
	#undef EnableZoneNames
	#undef UsePlayerPedAnims
	#undef DisableInteriorEnterExits
	#undef SetNameTagDrawDistance
	#undef DisableNameTagLOS
	#undef LimitGlobalChatRadius
	#undef LimitPlayerMarkerRadius
    #undef EnableStuntBonusForAll
	#undef EnableStuntBonusForPlayer
	// NPC
    #undef ConnectNPC
	#undef IsPlayerNPC

	// Admin
	#undef IsPlayerAdmin
	#undef Kick
	#undef Ban
	#undef BanEx
	#undef SendRconCommand
	#undef GetServerVar
	#undef GetServerVarAsString
	#undef GetServerVarAsInt
	#undef GetServerVarAsBool
	#undef GetPlayerNetworkStats
	#undef GetNetworkStats
	#undef GetPlayerVersion

	// Menu
	#undef CreateMenu
	#undef DestroyMenu
	#undef AddMenuItem
	#undef SetMenuColumnHeader
	#undef ShowMenuForPlayer
	#undef HideMenuForPlayer
	#undef IsValidMenu
	#undef DisableMenu
	#undef DisableMenuRow
	#undef GetPlayerMenu

	// Text Draw
	#undef TextDrawCreate
	#undef TextDrawDestroy
	#undef TextDrawLetterSize
	#undef TextDrawTextSize
	#undef TextDrawAlignment
	#undef TextDrawColor
	#undef TextDrawUseBox
	#undef TextDrawBoxColor
	#undef TextDrawSetShadow
	#undef TextDrawSetOutline
	#undef TextDrawBackgroundColor
	#undef TextDrawFont
	#undef TextDrawSetProportional
	#undef TextDrawSetSelectable
	#undef TextDrawShowForPlayer
	#undef TextDrawHideForPlayer
	#undef TextDrawShowForAll
	#undef TextDrawHideForAll
	#undef TextDrawSetString
	#undef TextDrawSetPreviewModel
	#undef TextDrawSetPreviewRot
	#undef TextDrawSetPreviewVehCol

	// Gangzone
	#undef GangZoneCreate
	#undef GangZoneDestroy
	#undef GangZoneShowForPlayer
	#undef GangZoneShowForAll
	#undef GangZoneHideForPlayer
	#undef GangZoneHideForAll
	#undef GangZoneFlashForPlayer
	#undef GangZoneFlashForAll
	#undef GangZoneStopFlashForPlayer
	#undef GangZoneStopFlashForAll

	// Global 3D Text Labels
	#undef Create3DTextLabel
	#undef Delete3DTextLabel
	#undef Attach3DTextLabelToPlayer
	#undef Attach3DTextLabelToVehicle
	#undef Update3DTextLabelText

	// Player Text 3D
	#undef CreatePlayer3DTextLabel
	#undef DeletePlayer3DTextLabel
	#undef UpdatePlayer3DTextLabelText

	// GUI Dialog
	#undef ShowPlayerDialog

	//0.3z server
	#undef BlockIpAddress
	#undef UnBlockIpAddress
	#undef GetServerTickRate

	// Vehicle
	#undef CreateVehicle
	#undef DestroyVehicle
	#undef IsVehicleStreamedIn
	#undef GetVehiclePos
	#undef SetVehiclePos
	#undef GetVehicleZAngle
	#undef GetVehicleRotationQuat
	#undef GetVehicleDistanceFromPoint
	#undef SetVehicleZAngle
	#undef SetVehicleParamsForPlayer
	#undef ManualVehicleEngineAndLights
	#undef SetVehicleParamsEx
	#undef GetVehicleParamsEx
	#undef SetVehicleToRespawn
	#undef LinkVehicleToInterior
	#undef AddVehicleComponent
	#undef RemoveVehicleComponent
	#undef ChangeVehicleColor
	#undef ChangeVehiclePaintjob
	#undef SetVehicleHealth
	#undef GetVehicleHealth
	#undef AttachTrailerToVehicle
	#undef DetachTrailerFromVehicle
	#undef IsTrailerAttachedToVehicle
	#undef GetVehicleTrailer
	#undef SetVehicleNumberPlate
	#undef GetVehicleModel
	#undef GetVehicleComponentInSlot
	#undef GetVehicleComponentType
	#undef RepairVehicle
	#undef GetVehicleVelocity
	#undef SetVehicleVelocity
	#undef SetVehicleAngularVelocity
	#undef GetVehicleDamageStatus
	#undef UpdateVehicleDamageStatus
	#undef GetVehicleModelInfo
	#undef SetVehicleVirtualWorld
	#undef GetVehicleVirtualWorld

    // Player functions
    #undef SetSpawnInfo
    #undef SpawnPlayer
    #undef SetPlayerPos
    #undef SetPlayerPosFindZ
    #undef GetPlayerPos
    #undef SetPlayerFacingAngle
    #undef GetPlayerFacingAngle
    #undef IsPlayerInRangeOfPoint
    #undef GetPlayerDistanceFromPoint
    #undef IsPlayerStreamedIn
    #undef SetPlayerInterior
    #undef GetPlayerInterior
    #undef SetPlayerHealth
    #undef GetPlayerHealth
    #undef SetPlayerArmour
    #undef GetPlayerArmour
    #undef SetPlayerAmmo
    #undef GetPlayerAmmo
    #undef GetPlayerWeaponState
    #undef GetPlayerTargetPlayer
    #undef SetPlayerTeam
    #undef GetPlayerTeam
    #undef SetPlayerScore
    #undef GetPlayerScore
    #undef GetPlayerDrunkLevel
    #undef SetPlayerDrunkLevel
    #undef SetPlayerColor
    #undef GetPlayerColor
    #undef SetPlayerSkin
    #undef GetPlayerSkin
    #undef GivePlayerWeapon
    #undef ResetPlayerWeapons
    #undef SetPlayerArmedWeapon
    #undef GetPlayerWeaponData
    #undef GetPlayerMoney
    #undef GivePlayerMoney
    #undef ResetPlayerMoney
    #undef SetPlayerName
    #undef GetPlayerState
    #undef GetPlayerIp
    #undef GetPlayerPing
    #undef GetPlayerWeapon
    #undef GetPlayerKeys
    #undef GetPlayerName
    #undef SetPlayerTime
    #undef GetPlayerTime
    #undef TogglePlayerClock
    #undef SetPlayerWeather
    #undef ForceClassSelection
    #undef SetPlayerWantedLevel
    #undef GetPlayerWantedLevel
    #undef SetPlayerFightingStyle
    #undef GetPlayerFightingStyle
    #undef SetPlayerVelocity
    #undef GetPlayerVelocity
    #undef PlayCrimeReportForPlayer
    #undef PlayAudioStreamForPlayer
    #undef StopAudioStreamForPlayer
    #undef SetPlayerShopName
    #undef SetPlayerSkillLevel
    #undef GetPlayerSurfingVehicleID
    #undef GetPlayerSurfingObjectID
    #undef RemoveBuildingForPlayer
    #undef SetPlayerAttachedObject
    #undef RemovePlayerAttachedObject
    #undef IsPlayerAttachedObjectSlotUsed
    #undef EditAttachedObject
//    #undef CreateExplosionForPlayer
    #undef SendDeathMessageToPlayer
    #undef NetStats_BytesReceived
    #undef NetStats_BytesSent
    #undef NetStats_ConnectionStatus
    #undef NetStats_GetConnectedTime
    #undef NetStats_GetIpPort
    #undef NetStats_MessagesReceived
    #undef NetStats_MessagesRecvPerSecond
    #undef NetStats_MessagesSent
    #undef NetStats_PacketLossPercent
    #undef GetPlayerLastShotVectors

    // Per-player TextDraws
    #undef CreatePlayerTextDraw
    #undef PlayerTextDrawDestroy
    #undef PlayerTextDrawLetterSize
    #undef PlayerTextDrawTextSize
    #undef PlayerTextDrawAlignment
    #undef PlayerTextDrawColor
    #undef PlayerTextDrawUseBox
    #undef PlayerTextDrawBoxColor
    #undef PlayerTextDrawSetShadow
    #undef PlayerTextDrawSetOutline
    #undef PlayerTextDrawBackgroundColor
    #undef PlayerTextDrawFont
    #undef PlayerTextDrawSetProportional
    #undef PlayerTextDrawSetSelectable
    #undef PlayerTextDrawShow
    #undef PlayerTextDrawHide
    #undef PlayerTextDrawSetString
    #undef PlayerTextDrawSetPreviewModel
    #undef PlayerTextDrawSetPreviewRot
    #undef PlayerTextDrawSetPreviewVehCol
    #undef SetPlayerChatBubble

	// Player controls
	#undef PutPlayerInVehicle
	#undef GetPlayerVehicleID
	#undef GetPlayerVehicleSeat
	#undef RemovePlayerFromVehicle
	#undef TogglePlayerControllable
	#undef PlayerPlaySound
	#undef ApplyAnimation
	#undef ClearAnimations
	#undef GetPlayerAnimationIndex
	#undef GetAnimationName
	#undef GetPlayerSpecialAction
	#undef SetPlayerSpecialAction

	// Player world/map related
	#undef SetPlayerCheckpoint
	#undef DisablePlayerCheckpoint
	#undef SetPlayerRaceCheckpoint
	#undef DisablePlayerRaceCheckpoint
	#undef SetPlayerWorldBounds
	#undef SetPlayerMarkerForPlayer
	#undef ShowPlayerNameTagForPlayer
	#undef SetPlayerMapIcon
	#undef RemovePlayerMapIcon
	#undef AllowPlayerTeleport

	// Player Camera
    #undef SetPlayerCameraPos
    #undef SetPlayerCameraLookAt
	#undef SetCameraBehindPlayer
	#undef GetPlayerCameraPos
	#undef GetPlayerCameraFrontVector
	#undef GetPlayerCameraMode
	#undef AttachCameraToObject
	#undef AttachCameraToPlayerObject
	#undef InterpolateCameraPos
	#undef InterpolateCameraLookAt
	#undef GetPlayerCameraAspectRatio
	#undef GetPlayerCameraZoom

	// Player conditionals
	#undef IsPlayerConnected
	#undef IsPlayerInVehicle
	#undef IsPlayerInAnyVehicle
	#undef IsPlayerInCheckpoint
	#undef IsPlayerInRaceCheckpoint

	// Virtual Worlds
	#undef SetPlayerVirtualWorld
	#undef GetPlayerVirtualWorld

	// Spectating
	#undef TogglePlayerSpectating
	#undef PlayerSpectatePlayer
	#undef PlayerSpectateVehicle

	// Recording for NPC playback
	#undef StartRecordingPlayerData
	#undef StopRecordingPlayerData

	// Mouse control
	#undef SelectTextDraw
	#undef CancelSelectTextDraw

	//Objects
	#undef CreateObject
	#undef AttachObjectToVehicle
	#undef AttachObjectToObject
	#undef AttachObjectToPlayer
	#undef SetObjectPos
	#undef GetObjectPos
	#undef SetObjectRot
	#undef GetObjectRot
	#undef IsValidObject
	#undef DestroyObject
	#undef MoveObject
	#undef StopObject
	#undef IsObjectMoving
	#undef EditObject
	#undef EditPlayerObject
	#undef SelectObject
	#undef CancelEdit
	#undef CreatePlayerObject
	#undef AttachPlayerObjectToVehicle
	#undef SetPlayerObjectPos
	#undef GetPlayerObjectPos
	#undef SetPlayerObjectRot
	#undef GetPlayerObjectRot
	#undef IsValidPlayerObject
	#undef DestroyPlayerObject
	#undef MovePlayerObject
	#undef StopPlayerObject
	#undef IsPlayerObjectMoving
	#undef AttachPlayerObjectToPlayer

	#undef SetObjectMaterial
	#undef SetPlayerObjectMaterial

	#undef SetObjectMaterialText
	#undef SetPlayerObjectMaterialText

