/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775d50; name: FUN_00775d50
 */


undefined8 FUN_00775d50(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_14;
  
  uVar1 = (**(code **)(*(long *)*param_1 + 0x60))
                    ((long *)*param_1,*(undefined8 *)(param_2 + 8),&local_14,0xffffffff);
  if ((int)uVar1 == 1) {
    *param_3 = local_14;
    return uVar1;
  }
  return 0;
}


