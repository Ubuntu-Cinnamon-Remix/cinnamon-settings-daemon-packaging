#define NEW csd_smartcard_manager_new_default
#define START csd_smartcard_manager_start
#define STOP csd_smartcard_manager_stop
#define MANAGER CsdSmartcardManager

// Setting this to TRUE makes the plugin register
// with CSM before starting.
// Setting this to FALSE makes CSM wait for the plugin to be started
// before initializing the next phase.
#define REGISTER_BEFORE_STARTING TRUE

#include "csd-smartcard-manager.h"

#include "daemon-skeleton.h"
