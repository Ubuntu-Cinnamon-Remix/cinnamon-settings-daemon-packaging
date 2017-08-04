#define NEW csd_a11y_keyboard_manager_new
#define START csd_a11y_keyboard_manager_start
#define STOP csd_a11y_keyboard_manager_stop
#define MANAGER CsdA11yKeyboardManager

// Setting this to TRUE makes the plugin register
// with CSM before starting.
// Setting this to FALSE makes CSM wait for the plugin to be started
// before initializing the next phase.
#define REGISTER_BEFORE_STARTING TRUE

#include "csd-a11y-keyboard-manager.h"

#include "daemon-skeleton.h"
