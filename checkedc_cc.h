/*
Copyright(C) 2021 Constantine Tarasenkov (iamvfx@gmail.com). All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
https://github.com/microsoft/checkedc/wiki/Proposed-extension-changes-to-improve-backward-compatibility
https://github.com/microsoft/checkedc/issues/470
https://github.com/microsoft/checkedc/blob/d47eaf7f53dd00b6062cc43a2cd1435caf6cc145/include/stdchecked.h
https://github.com/microsoft/checkedc/blob/d47eaf7f53dd00b6062cc43a2cd1435caf6cc145/spec/bounds_safety/checkedc.tex#L58-L76
https://github.com/microsoft/checkedc/blob/d47eaf7f53dd00b6062cc43a2cd1435caf6cc145/spec/bounds_safety/core-extensions.tex#L24-L27
https://github.com/microsoft/checkedc/commit/0426d490206c0d9cecd8c309ba0aa662a2500a4a
*/

#ifndef __CHECKEDC_CC_H
#define __CHECKEDC_CC_H

#undef cc_expr
#undef cc_opt
#undef cc_arg
#undef ptr
#undef array_ptr
#undef nt_array_ptr
#undef checked
#undef nt_checked
#undef unchecked
#undef bounds_only
#undef where
#undef dynamic_check
#undef dynamic_bounds_cast
#undef assume_bounds_cast
#undef return_value
#undef for_any
#undef itype_for_any
#undef opaque
#undef reveal
#undef and
#ifdef CHECKEDC_CC
#undef bounds
#undef byte_count
#undef count
#undef rel_align
#undef rel_align_value
#undef itype
#undef unknown
#endif

#ifdef CHECKEDC_CC

#define cc_expr(Expression) ((void)(Expression))
#define cc_opt(Statement)
#define cc_arg(...)
#define ptr(Type) Type *
#define array_ptr(Type) Type *
#define nt_array_ptr(Type) Type *
#define checked
#define nt_checked
#define unchecked
#define bounds_only
#define where
#define dynamic_check
#define dynamic_bounds_cast
#define assume_bounds_cast
#define return_value
#define for_any
#define itype_for_any
#define opaque
#define reveal
#define and
#define bounds
#define byte_count
#define count
#define rel_align
#define rel_align_value
#define itype
#define unknown

#else /* #ifdef CHECKEDC_CC */

#define cc_expr(Expression) (Expression)
#define cc_opt(Statement) Statement
#define cc_arg(...) (__VA_ARGS__)
#define ptr(Type) _Ptr<Type>
#define array_ptr(Type) _Array_ptr<Type>
#define nt_array_ptr(Type) _Nt_array_ptr<Type>
#define checked _Checked
#define nt_checked _Nt_checked
#define unchecked _Unchecked
#define bounds_only _Bounds_only
#define where _Where
#define dynamic_check _Dynamic_check
#define dynamic_bounds_cast _Dynamic_bounds_cast
#define assume_bounds_cast _Assume_bounds_cast
#define return_value _Return_value
#define for_any _For_any
#define itype_for_any _Itype_for_any
#define opaque _Opaque
#define reveal _Reveal
#define and _And

#endif /* #ifdef CHECKEDC_CC */

#endif /* #ifndef __CHECKEDC_CC_H */
