/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f58490; name: FUN_00f58490
 */


void FUN_00f58490(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                 undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                 undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                 undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                 undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                 undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                 undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                 undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                 undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                 undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                 undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                 undefined8 param_69,undefined8 param_70)

{
  size_t __n;
  long *plVar1;
  undefined8 extraout_x1;
  void *__dest;
  ulong uVar2;
  undefined8 in_stack_000001f0;
  ulong local_98;
  size_t local_90;
  void *local_88;
  long *local_80;
  ulong *puStack_78;
  long **local_70;
  
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_98 | 1);
    if (__n == 0) goto LAB_00f58c94;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_98 = uVar2 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00f58c94:
  *(undefined1 *)((long)__dest + __n) = 0;
  plVar1 = operator_new(0xba0);
  FUN_00f7af20(plVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
               param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
               param_30,param_31,param_32,param_33,param_34,param_35,param_36,param_37,param_38,
               param_39,param_40,param_41,param_42,param_43,param_44,param_45,param_46,param_47,
               param_48,param_49,param_50,param_51,param_52,param_53,param_54,param_55,param_56,
               param_57,param_58,param_59,param_60,param_61,param_62,param_63,param_64,param_65,
               param_66,param_67,param_68,param_69,param_70,in_stack_000001f0);
  puStack_78 = &local_98;
  local_70 = &local_80;
  local_80 = plVar1;
  FUN_00f9df30(param_1,extraout_x1,&puStack_78);
  plVar1 = local_80;
  local_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  return;
}


