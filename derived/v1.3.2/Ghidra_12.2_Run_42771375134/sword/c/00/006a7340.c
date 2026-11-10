/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a7340; name: FUN_006a7340
 */


void FUN_006a7340(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar2) {
    param_1[2] = lVar3 + -0xa8;
    lVar1 = *(long *)(lVar3 + -0x38);
    if (lVar1 != 0) {
      *(long *)(lVar3 + -0x30) = lVar1;
      (**(code **)(**(long **)(lVar3 + -0x20) + 0x18))
                (*(long **)(lVar3 + -0x20),lVar1,*(long *)(lVar3 + -0x28) - lVar1,1);
    }
    lVar1 = *(long *)(lVar3 + -0x70);
    if (lVar1 != 0) {
      *(long *)(lVar3 + -0x68) = lVar1;
      (**(code **)(**(long **)(lVar3 + -0x58) + 0x18))
                (*(long **)(lVar3 + -0x58),lVar1,*(long *)(lVar3 + -0x60) - lVar1,1);
    }
    lVar1 = *(long *)(lVar3 + -0xa8);
    if (lVar1 != 0) {
      *(long *)(lVar3 + -0xa0) = lVar1;
      (**(code **)(**(long **)(lVar3 + -0x90) + 0x18))
                (*(long **)(lVar3 + -0x90),lVar1,*(long *)(lVar3 + -0x98) - lVar1,1);
    }
    lVar3 = param_1[2];
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006a7414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)param_1[4] + 0x18))(*(long **)param_1[4],lVar2,param_1[3] - lVar2,8);
  return;
}


