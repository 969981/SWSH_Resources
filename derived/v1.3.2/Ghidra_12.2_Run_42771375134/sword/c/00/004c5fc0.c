/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5fc0; name: FUN_004c5fc0
 */


void FUN_004c5fc0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  local_20 = param_1;
  lVar1 = FUN_004c6010(&local_20,param_3,*(undefined4 *)(param_2 + 2));
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x354) = *(byte *)(lVar1 + 0x354) | 1;
  }
  return;
}


