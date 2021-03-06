/*
 * Copyright (c) 2020-2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OHOS_ACELITE_CONFIG_H
#define OHOS_ACELITE_CONFIG_H

// some features depend on the low layer configuration
#include "graphic_config.h"

/**
 * ================================================================================================
 *                 config for wearable
 * ================================================================================================
 */
/**
 * the flag indicating watch product
 */
#define OHOS_ACELITE_PRODUCT_WATCH

// delete this after jerry porting is ready
#define JERRY_PORTING_DEPENDENCY

/**
 * enable Canvas component Feature API on ipcamera real devices
 */
#define FEATURE_COMPONENT_CANVAS

/**
 * enable QRcode component
 */
#define FEATURE_COMPONENT_QRCODE

/**
 * support terminate() API from JS
 */
#define FEATURE_TERMINATE_ABILITY

/**
 * support screenOnVisible() API from JS
 */
#define FEATURE_SCREEN_ON_VISIBLE

#ifdef ACELITE_DEPENDENCY_IS_READY
/**
 * enable FeatureAbility API
 */
#define FEATURE_FEATURE_ABILITY_MODULE
#endif // ACELITE_DEPENDENCY_IS_READY

/**
 * enable timer JS API
 */
#define FEATURE_TIMER_MODULE

/**
 * enable localization feature
 */
#define FEATURE_LOCALIZATION_MODULE

/**
 * support mc ace log module trace
 */
#define FEATURE_ACELITE_MC_LOG_PRINTF

/**
 * support mc ace event and error code print
 */
#define FEATURE_ACELITE_MC_EVENT_ERROR_CODE_PRINT

/**
 * support mc console log
 */
#define FEATURE_USER_MC_LOG_PRINTF

/**
 * support config for product JS modules
 */
#define FEATURE_PRODUCT_MODULE

/**
 * support config for private JS modules
 */
#define FEATURE_PRIVATE_MODULE

/**
 * support using memory pool from product side
 */
#define FEATURE_ACELITE_PRODUCT_MEMORY_POOL

/**
 * define the max length of user's console log
 */
#ifndef CONSOLE_LOG_LINE_MAX_LENGTH
#define CONSOLE_LOG_LINE_MAX_LENGTH (96)
#endif

#ifdef ACELITE_DEPENDENCY_IS_READY
/**
 * support mc ace dfx module
 */
#define FEATURE_ACELITE_DFX_MODULE

#define FEATURE_ACELITE_LITE_DFX_MODULE
#endif

/**
 * support mc lazy loading
 */
#define FEATURE_LAZY_LOADING_MODULE

/**
 * support fatal error handling on device which not support process
 */
#ifndef FEATURE_FATAL_ERROR_HANDLING
#define FEATURE_FATAL_ERROR_HANDLING
#endif

/**
 * support intl module
 */
#define FEATURE_INTL_MODULE

/**
 * supoort number format module
 */
#define FEATURE_NUMBER_FORMAT

/**
 * date time module
 */
#define FEATURE_DATE_FORMAT

#define FEATURE_API_VERSION

#define JS_ENGINE_STATIC_MULTI_CONTEXTS_ENABLED

/**
 * support js profiler
 */
#define FEATURE_ACELITE_MC_JS_PROFILER

#define DEFAULT_PROFILER_MSG_PATH "user/log/"

#define PROFILER_ENABLE_FLAG_FILE "user/data/profiler_enable"

#define RUNTIME_MODE_FILE_PATH "user/data/jsparser_enable"

/**
 * Rotation API feature
 */
#if (defined(ENABLE_ROTATE_INPUT) && (ENABLE_ROTATE_INPUT == 1))
// low layer supports
#ifndef FEATURE_ROTATION_API
#define FEATURE_ROTATION_API
#endif
#endif // (defined(ENABLE_ROTATE_INPUT) && (ENABLE_ROTATE_INPUT == 1))

#endif // OHOS_ACELITE_CONFIG_H
