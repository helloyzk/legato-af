//--------------------------------------------------------------------------------------------------
/** @file kernelModules.h
 *
 * API for managing Legato-bundled kernel modules.
 *
 * Copyright (C) Sierra Wireless Inc.
 */
#ifndef LEGATO_SRC_KERNEL_MODULES_INCLUDE_GUARD
#define LEGATO_SRC_KERNEL_MODULES_INCLUDE_GUARD


//--------------------------------------------------------------------------------------------------
/**
 * Kernel module file extenstion.
 */
//--------------------------------------------------------------------------------------------------
#define KERNEL_MODULE_FILE_EXTENSION ".ko"
//--------------------------------------------------------------------------------------------------
/**
 * Insert all kernel modules
 */
//--------------------------------------------------------------------------------------------------
void kernelModules_Insert
(
    void
);


//--------------------------------------------------------------------------------------------------
/**
 * Remove all kernel modules
 */
//--------------------------------------------------------------------------------------------------
void kernelModules_Remove
(
    void
);


//--------------------------------------------------------------------------------------------------
/**
 * Initialize kernel module handler
 */
//--------------------------------------------------------------------------------------------------
void kernelModules_Init
(
    void
);


#endif // LEGATO_SRC_KERNEL_MODULES_INCLUDE_GUARD
