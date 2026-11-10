/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006aac90; name: FUN_006aac90
 */


void FUN_006aac90(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar4 = param_1[1];
  lVar5 = lVar3;
  if (lVar4 != lVar3) {
    lVar5 = 0;
    do {
      lVar1 = lVar4 + lVar5;
      lVar2 = *(long *)(lVar1 + -0x30);
      if (lVar2 != 0) {
        *(long *)(lVar1 + -0x28) = lVar2;
        (**(code **)(**(long **)(lVar1 + -0x18) + 0x18))
                  (*(long **)(lVar1 + -0x18),lVar2,*(long *)(lVar1 + -0x20) - lVar2,0x10);
      }
      lVar2 = *(long *)(lVar1 + -0x68);
      if (lVar2 != 0) {
        *(long *)(lVar1 + -0x60) = lVar2;
        (**(code **)(**(long **)(lVar1 + -0x50) + 0x18))
                  (*(long **)(lVar1 + -0x50),lVar2,*(long *)(lVar1 + -0x58) - lVar2,4);
      }
      lVar2 = *(long *)(lVar1 + -0xa0);
      if (lVar2 != 0) {
        *(long *)(lVar1 + -0x98) = lVar2;
        (**(code **)(**(long **)(lVar1 + -0x88) + 0x18))
                  (*(long **)(lVar1 + -0x88),lVar2,*(long *)(lVar1 + -0x90) - lVar2,4);
      }
      lVar5 = lVar5 + -0xa8;
    } while (lVar3 - lVar4 != lVar5);
    lVar5 = *param_1;
  }
  param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x006aad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar5,param_1[2] - lVar5,8);
  return;
}


