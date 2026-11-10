/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c82b0; name: FUN_008c82b0
 */


void FUN_008c82b0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e0),param_2 & 1);
  if (*(int *)(param_1 + 0x820) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x5e8);
  }
  else {
    if (*(int *)(param_1 + 0x820) != 1) goto LAB_008c8300;
    uVar1 = *(undefined8 *)(param_1 + 0x818);
  }
  FUN_016b2d70(uVar1,param_2 & 1);
LAB_008c8300:
  if ((param_2 & 1) == 0) {
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x5e8));
    FUN_016b2eb0(*(undefined8 *)(param_1 + 0x818));
    return;
  }
  return;
}


