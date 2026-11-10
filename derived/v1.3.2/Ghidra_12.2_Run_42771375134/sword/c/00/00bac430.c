/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac430; name: FUN_00bac430
 */


void FUN_00bac430(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b0) + 0x10))(lVar2 + 0x3b0);
  }
  lVar1 = *(long *)(param_1 + 0x5d8);
  *(long *)(param_1 + 0x5d8) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x3b0) + 0x18))(lVar1 + 0x3b0);
  }
  lVar2 = *param_3;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b0) + 0x10))(lVar2 + 0x3b0);
  }
  lVar1 = *(long *)(param_1 + 0x5e0);
  *(long *)(param_1 + 0x5e0) = lVar2;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x3b0) + 0x18))(lVar1 + 0x3b0);
  }
  lVar2 = *param_4;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x3b0) + 0x10))(lVar2 + 0x3b0);
  }
  lVar1 = *(long *)(param_1 + 0x5e8);
  *(long *)(param_1 + 0x5e8) = lVar2;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bac4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x3b0) + 0x18))(lVar1 + 0x3b0);
  return;
}


