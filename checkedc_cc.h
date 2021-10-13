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
#undef cc_ptr
#undef cc_array_ptr
#undef cc_nt_array_ptr
#undef cc_checked
#undef cc_nt_checked
#undef cc_unchecked
#undef cc_bounds_only
#undef cc_where
#undef cc_dynamic_check
#undef cc_dynamic_bounds_cast
#undef cc_assume_bounds_cast
#undef cc_return_value
#undef cc_for_any
#undef cc_itype_for_any
#undef cc_opaque
#undef cc_reveal
#undef cc_and
#undef cc_bounds
#undef cc_byte_count
#undef cc_count
#undef cc_rel_align
#undef cc_rel_align_value
#undef cc_itype
#undef cc_unknown

#ifdef CHECKEDC_CC

#define cc_expr(Expression) ((void)(Expression))
#define cc_opt(Statement)
#define cc_arg(...)
#define cc_ptr(Type) Type *
#define cc_array_ptr(Type) Type *
#define cc_nt_array_ptr(Type) Type *
#define cc_checked
#define cc_nt_checked
#define cc_unchecked
#define cc_bounds_only
#define cc_where
#define cc_dynamic_check
#define cc_dynamic_bounds_cast
#define cc_assume_bounds_cast
#define cc_return_value
#define cc_for_any
#define cc_itype_for_any
#define cc_opaque
#define cc_reveal
#define cc_and
#define cc_bounds
#define cc_byte_count
#define cc_count
#define cc_rel_align
#define cc_rel_align_value
#define cc_itype
#define cc_unknown

#else /* #ifdef CHECKEDC_CC */

#define cc_expr(Expression) (Expression)
#define cc_opt(Statement) Statement
#define cc_arg(...) (__VA_ARGS__)
#define cc_ptr(Type) _Ptr<Type>
#define cc_array_ptr(Type) _Array_ptr<Type>
#define cc_nt_array_ptr(Type) _Nt_array_ptr<Type>
#define cc_checked _Checked
#define cc_nt_checked _Nt_checked
#define cc_unchecked _Unchecked
#define cc_bounds_only _Bounds_only
#define cc_where _Where
#define cc_dynamic_check _Dynamic_check
#define cc_dynamic_bounds_cast _Dynamic_bounds_cast
#define cc_assume_bounds_cast _Assume_bounds_cast
#define cc_return_value _Return_value
#define cc_for_any _For_any
#define cc_itype_for_any _Itype_for_any
#define cc_opaque _Opaque
#define cc_reveal _Reveal
#define cc_and _And
#define cc_bounds bounds
#define cc_byte_count byte_count
#define cc_count count
#define cc_rel_align rel_align
#define cc_rel_align_value rel_align_value
#define cc_itype itype
#define cc_unknown unknown

#endif /* #ifdef CHECKEDC_CC */

#endif /* #ifndef __CHECKEDC_CC_H */
