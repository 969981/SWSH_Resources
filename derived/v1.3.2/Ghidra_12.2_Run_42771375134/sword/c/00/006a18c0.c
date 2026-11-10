/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a18c0; name: FUN_006a18c0
 */


void FUN_006a18c0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[3];
  *param_1 = (long)(PTR_DAT_027150e8 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  lVar1 = param_1[4];
  if (param_1[4] == lVar2) {
    lVar1 = lVar2;
  }
  else {
    do {
      lVar3 = lVar1 + -0x30;
      if (*(long *)(lVar1 + -0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar1 + -0x10) + 0x48) + 0x18))();
        *(undefined8 *)(lVar1 + -0x10) = 0;
      }
      lVar1 = lVar3;
    } while (lVar2 != lVar3);
    lVar1 = param_1[3];
  }
  param_1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x006a1960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar1,param_1[5] - lVar1,8);
  return;
}


