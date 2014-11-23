<?php
$callbackList = file_get_contents(__DIR__."/callbacks.txt");
$callbackList = array_map(function($line) {
	return trim($line);
}, explode("\n", $callbackList));

function OnDialogResponse($playerid, $dialogid, $response, $listitem, $inputtext)
{
	return Event::untilDifferent("DialogResponse", false, Player::find($playerid, true), $dialogid, $response, $listitem, $inputtext);
}

function OnEnterExitModShop($playerid, $enterexit, $interiorid)
{
	return Event::untilDifferent("EnterExitModShop", true, Player::find($playerid, true), $enterexit, $interiorid);
}

function OnGameModeExit()
{
	return Event::untilDifferent("GameModeExit");
}

function OnGameModeInit() 
{
	return Event::untilDifferent("GameModeInit");
}

function OnObjectMoved($objectid)
{
	return Event::untilDifferent("ObjectMoved", true, Object::find($objectid));
}

function OnPlayerClickMap($playerid, $fx, $fy, $fz)
{
	return Event::untilDifferent("PlayerClickMap", true, Player::find($playerid, true), $fx, $fy, $fz);
}

function OnPlayerClickPlayer($playerid, $clickedplayerid, $source)
{
	return Event::untilDifferent("PlayerClickPlayer", true, Player::find($playerid, true), Player::find($clickedplayerid, true), $source);
}

function OnPlayerClickPlayerTextDraw($playerid, $playertextid)
{
	return Event::untilDifferent("PlayerClickPlayerTextDraw", false, Player::find($playerid, true), PlayerTextDraw::findForPlayer(Player::find($playerid, true), $playertextid));
}

function OnPlayerClickTextDraw($playerid, $clickedid)
{
	return Event::untilDifferent("PlayerClickTextDraw", false, Player::find($playerid, true), TextDraw::find($clickedid));
}

function OnPlayerCommandText($playerid, $cmdtext)
{
	return Event::untilDifferent("PlayerCommandText", false, Player::find($playerid, true), $cmdtext);
}

function OnPlayerConnect($playerid)
{
	return Event::untilDifferent("PlayerConnect", true, Player::find($playerid, true));
}

function OnPlayerDeath($playerid, $killerid, $reason)
{
	return Event::untilDifferent("PlayerDeath", true, Player::find($playerid, true), Player::find($killerid, true), $reason);
}

function OnPlayerDisconnect($playerid, $reason)
{
	return Event::untilDifferent("PlayerDisconnect", true, Player::find($playerid, true), $reason);
}

function OnPlayerEditAttachedObject($playerid, $response, $index, $modelid, $boneid, $fOffsetX, $fOffsetY, $fOffsetZ, $fRotX, $fRotY, $fRotZ, $fScaleX, $fScaleY, $fScaleZ)
{
	return Event::untilDifferent("PlayerEditAttachedObject", true, Player::find($playerid, true), $response, $index, $modelid, $boneid, $fOffsetX, $fOffsetY, $fOffsetZ, $fRotX, $fRotY, $fRotZ, $fScaleX, $fScaleY, $fScaleZ);
}

function OnPlayerEditObject($playerid,	$playerobject,	$objectid,	$response,	$fX, $fY, $fZ,	$fRotX,	$fRotY,	$fRotZ)
{
	$adam = Player::find($playerid, true);
	switch($playerobject)
	{
		case 0:
			$wtf = Object::find($objectid);
		case 1:
			$wtf = PlayerObject::findForPlayer($adam,$objectid);
		default:
			$wtf = 0;
	}
	return Event::fireDefault("PlayerEditObject", true, $adam, $playerobject, $wtf, $response, $fX, $fY, $fZ, $fRotX, $fRotY, $fRotZ);
}

function OnPlayerEnterCheckpoint($playerid)
{
	return Event::fireDefault("PlayerEnterCheckpoint", true, Player::find($playerid, true));
}

function OnPlayerEnterRaceCheckpoint($playerid)
{
	return Event::fireDefault("PlayerEnterCheckpoint", true, Player::find($playerid, true));
}

function OnPlayerEnterVehicle($playerid, $vehicleid, $passenger)
{
	return Event::untilDifferent("PlayerEnterVehicle", true, Player::find($playerid, true), Vehicle::find($vehicleid), $passenger);
}

function OnPlayerExitVehicle($playerid, $vehicleid)
{
	return Event::fireDefault("PlayerExitVehicle", true, Player::find($playerid, true), Vehicle::find($vehicleid));
}

function OnPlayerExitedMenu($playerid)
{
	return Event::fireDefault("PlayerExitedMenu", true, Player::find($playerid, true));
}

function OnPlayerGiveDamage($playerid, $damagedid, $amount, $weaponid, $bodypart)
{
	return Event::fireDefault("PlayerGiveDamage", true, Player::find($playerid, true), Player::find($damagedid, true), $amount, $weaponid, $bodypart);
}

function OnPlayerInteriorChange($playerid, $newinteriorid, $oldinteriorid)
{
	return Event::fireDefault("PlayerInteriorChange", true, Player::find($playerid, true), $newinteriorid, $oldinteriorid);
}

function OnPlayerKeyStateChange($playerid, $newkeys, $oldkeys)
{
	return Event::fireDefault("PlayerKeyStateChange", true, Player::find($playerid, true), $newkeys, $oldkeys);
}

function OnPlayerLeaveCheckpoint($playerid)
{
	return Event::fireDefault("PlayerLeaveCheckpoint", true, Player::find($playerid, true));
}

function OnPlayerLeaveRaceCheckpoint($playerid)
{
	return Event::fireDefault("PlayerLeaveRaceCheckpoint", true, Player::find($playerid, true));
}

function OnPlayerObjectMoved($playerid, $objectid)
{
	$adam = Player::find($playerid, true);
	return Event::fireDefault("PlayerObjectMoved", true, $adam, PlayerObject::findForPlayer($adam, $objectid));
}

function OnPlayerPickUpPickup($playerid, $pickupid)
{
	return Event::fireDefault("PlayerPickUpPickup", true, Player::find($playerid, true), Pickup::find($pickupid));
}

function OnPlayerPrivmsg($playerid, $recieverid, $text)
{
	return Event::untilDifferent("PlayerPrivmsg", true, Player::find($playerid, true), Player::find($recieverid, true), $text);
}

function OnPlayerRequestClass($playerid, $classid)
{
	return Event::untilDifferent("PlayerRequestClass", true, Player::find($playerid, true), $classid);
}

function OnPlayerRequestSpawn($playerid)
{
	return Event::untilDifferent("PlayerRequestSpawn", true, Player::find($playerid, true));
}

function OnPlayerSelectObject($playerid, $type, $objectid, $modelid, $fX, $fY, $fZ)
{
	$adam = Player::find($playerid, true);
	switch($type)
	{
		case 1:
			$wtf = Object::find($objectid);
		case 2:
			$wtf = PlayerObject::findForPlayer($adam,$objectid);
		default:
			$wtf = 0;
	}
	return Event::fireDefault("PlayerSelectObject", true, $adam, $type, $wtf, $modelid, $fX, $fY, $fZ);
}

function OnPlayerSelectedMenuRow($playerid, $row)
{
	return Event::fireDefault("PlayerSelectedMenuRow", true, Player::find($playerid, true), $row);
}

function OnPlayerSpawn($playerid)
{
	return Event::fireDefault("PlayerSpawn", true, Player::find($playerid, true));
}

function OnPlayerStateChange($playerid, $newstate, $oldstate)
{
	return Event::fireDefault("PlayerStateChange", true, Player::find($playerid, true), $newstate, $oldstate);
}

function OnPlayerStreamIn($playerid, $forplayerid)
{
	return Event::fireDefault("PlayerStreamIn", true, Player::find($playerid, true), Player::find($forplayerid, true));
}

function OnPlayerStreamOut($playerid, $forplayerid)
{
	return Event::fireDefault("PlayerStreamOut", true, Player::find($playerid, true), Player::find($forplayerid, true));
}

function OnPlayerTakeDamage($playerid, $issuerid, $amount, $weaponid, $bodypart)
{
	return Event::fireDefault("PlayerTakeDamage", true, Player::find($playerid, true), Player::find($issuerid, true), $amount, $weaponid, $bodypart);
}

function OnPlayerTeamPrivmsg($playerid, $text)
{
	return Event::fireDefault("PlayerTeamPrivmsg", true, Player::find($playerid, true), $text);
}

function OnPlayerText($playerid, $text)
{
	return Event::untilDifferent("PlayerText", true, Player::find($playerid, true), $text);
}

function OnPlayerUpdate($playerid)
{
	return Event::fireDefault("PlayerUpdate", true, Player::find($playerid, true));
}

function OnPlayerWeaponShot($playerid, $weaponid, $hittype, $hitid, $fX, $fY, $fZ)
{
	$adam = Player::find($playerid, true);
	switch($hittype)
	{
		case 1:
			$wtf = Player::find($hitid, true);
		case 2:
			$wtf = Vehicle::find($hitid);
		case 3:
			$wtf = Object::find($hitid);
		case 4:
			$wtf = PlayerObject::findForPlayer($adam, $hitid);
		default:
			$wtf = 0;
	}
	return Event::fireDefault("PlayerWeaponShot", true, $adam, $weaponid, $hittype, $wtf, $fX, $fY, $fZ);
}

function OnIncomingConnection($playerid, $ip_address, $port)
{
	return Event::fireDefault("IncomingConnection", true, Player::find($playerid, true), $ip_address, $port);
}

function OnRconCommand($cmd)
{
	return Event::untilDifferent("RconCommand", false, $cmd);
}

function OnRconLoginAttempt($ip, $playerid, $success)
{
	return Event::fireDefault("RconLoginAttempt", true, $ip, Player::find($playerid, true), $success);
}

function OnUnoccupiedVehicleUpdate($vehicleid, $playerid, $passengerSeat, $newX, $newY, $newZ)
{
	return Event::fireDefault("UnoccupiedVehicleUpdate", true, Vehicle::find($vehicleid), Player::find($playerid, true), $passengerSeat, $newX, $newY, $newZ);
}

function OnVehicleDamageStatusUpdate($vehicleid, $playerid)
{
	return Event::fireDefault("VehicleDamageStatusUpdate", true, Vehicle::find($vehicleid), Player::find($playerid, true));
}

function OnVehicleDeath($vehicleid, $killerid)
{
	return Event::fireDefault("VehicleDeath", true, Vehicle::find($vehicleid), Player::find($killerid, true));
}

function OnVehicleMod($playerid, $vehicleid, $componentid)
{
	return Event::fireDefault("VehicleMod", true, Player::find($playerid, true), Vehicle::find($vehicleid), $componentid);
}

function OnVehiclePaintjob($playerid, $vehicleid, $paintjobid)
{
	return Event::fireDefault("VehiclePaintjob", true, Player::find($playerid, true), Vehicle::find($vehicleid), $paintjobid);
}

function OnVehicleRespray($playerid, $vehicleid, $color1, $color2)
{
	return Event::fireDefault("VehicleRespray", true, Player::find($playerid, true), Vehicle::find($vehicleid), $color1, $color2);
}

function OnVehicleSpawn($vehicleid)
{
	return Event::fireDefault("OnVehicleSpawn", true, Vehicle::find($vehicleid));
}

function OnVehicleStreamIn($vehicleid, $forplayerid)
{
	return Event::fireDefault("OnVehicleStreamIn", true, Vehicle::find($vehicleid), Player::find($forplayerid, true));
}

function OnVehicleStreamOut($vehicleid, $forplayerid)
{
	return Event::fireDefault("VehicleStreamOut", true, Vehicle::find($vehicleid), Player::find($forplayerid, true));
}
