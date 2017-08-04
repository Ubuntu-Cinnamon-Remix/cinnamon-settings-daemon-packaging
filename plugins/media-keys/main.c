#define NEW csd_media_keys_manager_new
#define START csd_media_keys_manager_start
#define STOP csd_media_keys_manager_stop
#define MANAGER CsdMediaKeysManager

// Setting this to TRUE makes the plugin register
// with CSM before starting.
// Setting this to FALSE makes CSM wait for the plugin to be started
// before initializing the next phase.
#define REGISTER_BEFORE_STARTING TRUE

#include "csd-media-keys-manager.h"

#include "daemon-skeleton.h"
