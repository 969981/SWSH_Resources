/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdc800; name: FUN_00bdc800
 */


void FUN_00bdc800(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_30 = 0;
  local_28 = 0;
  FUN_00bded30(&local_68,param_2,&local_38);
  lVar1 = *(long *)(param_1 + 0x1a80);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x1a88) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x1a98) + 0x18))
              (*(long **)(param_1 + 0x1a98),lVar1,*(long *)(param_1 + 0x1a90) - lVar1,8);
    *(undefined8 *)(param_1 + 0x1a88) = 0;
    *(undefined8 *)(param_1 + 0x1a90) = 0;
    *(undefined8 *)(param_1 + 0x1a80) = 0;
  }
  *(undefined8 *)(param_1 + 0x1a98) = local_50;
  *(undefined8 *)(param_1 + 0x1a80) = local_68;
  *(undefined8 *)(param_1 + 0x1a88) = local_60;
  *(undefined8 *)(param_1 + 0x1a90) = local_58;
  return;
}


