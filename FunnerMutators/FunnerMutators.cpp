#include "pch.h"
#include "FunnerMutators.h"


BAKKESMOD_PLUGIN(FunnerMutators, "Adds funner mutators", plugin_version, PLUGINTYPE_FREEPLAY)

std::shared_ptr<CVarManagerWrapper> _globalCvarManager;

void FunnerMutators::onLoad() {
	_globalCvarManager = cvarManager;
	
	LOG("FunnerMutators Initiated");

	cvarManager->registerNotifier("CheckGamemode", [this](std::vector<std::string> args) {
		boost();
		}, "", PERMISSION_ALL);
}

void FunnerMutators::onUnload() {

}

void FunnerMutators::boost() {
	if (!gameWrapper->IsInFreeplay()) {return;}
	bool gameMode = gameWrapper->IsInFreeplay();
	LOG("Currently in gammode: " + gameMode);
}