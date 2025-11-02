/* ============================================================================= *
 * SA-MP Injector - C++ injection ↓                                              *
 * library for SA-MP (San Andreas Multiplayer) and OMP (Open Multiplayer)        *
 * ============================================================================= *
 *                                                                               *
 * Copyright (c) 2025, AlderGrounds                                              *
 * All rights reserved.                                                          *
 *                                                                               *
 * Developed by: Calasans                                                        *
 * Provided by: AlderGrounds                                                     *
 * Repository: https://github.com/aldergrounds/samp-injector                     *
 *                                                                               *
 * ============================================================================= *
 *                                                                               *
 * Licensed under the MIT License (MIT);                                         *
 * you may not use this file except in compliance with the License.              *
 * You may obtain a copy of the License at:                                      *
 *                                                                               *
 *     https://opensource.org/licenses/MIT                                       *
 *                                                                               *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    *
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     *
 * THE SOFTWARE.                                                                 *
 *                                                                               *
 * ============================================================================= */

#pragma once

#include <windows.h>
//
#include "version.hpp"

namespace Constants {
#if defined(SAMP_INJECTOR_CXX_MODERN)
    #define CONSTEXPR_VAR inline constexpr
#elif defined(SAMP_INJECTOR_CXX_14)
    #define CONSTEXPR_VAR static constexpr
#endif

    // Game related constants
    CONSTEXPR_VAR int MIN_PORT = 1;
    CONSTEXPR_VAR int MAX_PORT = 65535;
    CONSTEXPR_VAR int MAX_NICKNAME_LENGTH = 23;
    
    // File names
    CONSTEXPR_VAR const wchar_t* SAMP_DLL_NAME = L"samp.dll";
    CONSTEXPR_VAR const wchar_t* OMP_DLL_NAME = L"omp-client.dll";
    CONSTEXPR_VAR const wchar_t* GAME_EXE_NAME = L"gta_sa.exe";
    
    // System libraries and functions
    CONSTEXPR_VAR const wchar_t* KERNEL32_DLL = L"kernel32.dll";
    CONSTEXPR_VAR const char* LOAD_LIBRARY_FUNC = "LoadLibraryW";
    
    // Command line arguments
    CONSTEXPR_VAR const wchar_t* CMD_ARG_CONFIG = L"-c";
    CONSTEXPR_VAR const wchar_t* CMD_ARG_NICKNAME = L"-n";
    CONSTEXPR_VAR const wchar_t* CMD_ARG_HOST = L"-h";
    CONSTEXPR_VAR const wchar_t* CMD_ARG_PORT = L"-p";
    CONSTEXPR_VAR const wchar_t* CMD_ARG_PASSWORD = L"-z";

    // Injection types as strings
    CONSTEXPR_VAR const wchar_t* INJECT_TYPE_SAMP = L"samp";
    CONSTEXPR_VAR const wchar_t* INJECT_TYPE_OMP = L"omp";
    
    // Error message titles
    CONSTEXPR_VAR const wchar_t* ERROR_TITLE_SAMP = L"SA-MP Injector Error";
    CONSTEXPR_VAR const wchar_t* ERROR_TITLE_OMP = L"OMP Injector Error";
    
    // Process creation
    CONSTEXPR_VAR DWORD PROCESS_CREATION_FLAGS = CREATE_SUSPENDED | DETACHED_PROCESS;
    
    // Timeouts
    CONSTEXPR_VAR DWORD DLL_INJECTION_TIMEOUT_MS = 10000;
    
    // Memory allocation
    CONSTEXPR_VAR DWORD MEMORY_ALLOCATION_TYPE = MEM_COMMIT | MEM_RESERVE;
    CONSTEXPR_VAR DWORD MEMORY_PROTECTION = PAGE_READWRITE;

#undef CONSTEXPR_VAR
}