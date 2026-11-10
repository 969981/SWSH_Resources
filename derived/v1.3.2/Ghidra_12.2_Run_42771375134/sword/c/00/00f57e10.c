/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f57e10; name: FUN_00f57e10
 */


void FUN_00f57e10(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                 undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                 undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                 undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                 undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  size_t __n;
  long *plVar1;
  undefined8 extraout_x1;
  void *__dest;
  ulong uVar2;
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
    if (__n == 0) goto LAB_00f57fb4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    local_98 = uVar2 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
LAB_00f57fb4:
  *(undefined1 *)((long)__dest + __n) = 0;
  plVar1 = operator_new(0x1e0);
  FUN_00f64f00(plVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,param_20,
               param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,param_29,
               param_30,param_31,param_32,&DAT_01d114fc,&DAT_02161c94);
  puStack_78 = &local_98;
  local_70 = &local_80;
  local_80 = plVar1;
  FUN_00f6f800(param_1,extraout_x1,&puStack_78);
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


