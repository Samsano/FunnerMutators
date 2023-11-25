#include "pch.h"
#include "FunnerMutators.h"


BAKKESMOD_PLUGIN(FunnerMutators, "Adds funner mutators", plugin_version, PLUGINTYPE_FREEPLAY)

std::shared_ptr<CVarManagerWrapper> _globalCvarManager;

void FunnerMutators::onLoad() {
	_globalCvarManager = cvarManager;
	
	LOG("FunnerMutators Initiated")
}

void FunnerMutators::onUnload() {

}

void FunnerMutators::boost() {
	if (!gameWrapper -> IsInFreeplay()) {return}
	std::string gameMode = gameWrapper->GetGameEventAsServer().GetGameMode();
	LOG("Currently in gammode: " + gameMode)
}