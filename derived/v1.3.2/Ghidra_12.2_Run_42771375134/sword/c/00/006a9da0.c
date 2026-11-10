/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9da0; name: FUN_006a9da0
 */


void FUN_006a9da0(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  lVar5 = lVar3 - lVar2 >> 3;
  uVar6 = lVar5 * -0x30c30c30c30c30c3;
  if (uVar6 < param_2) {
    FUN_006aad90(param_1,param_2 + lVar5 * 0x30c30c30c30c30c3);
    return;
  }
  if (uVar6 != param_2) {
    lVar5 = lVar2 + param_2 * 0xa8;
    if (lVar5 != lVar3) {
      lVar7 = 0;
      do {
        lVar1 = lVar3 + lVar7;
        lVar4 = *(long *)(lVar1 + -0x30);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0x28) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x18) + 0x18))
                    (*(long **)(lVar1 + -0x18),lVar4,*(long *)(lVar1 + -0x20) - lVar4,0x10);
        }
        lVar4 = *(long *)(lVar1 + -0x68);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0x60) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x50) + 0x18))
                    (*(long **)(lVar1 + -0x50),lVar4,*(long *)(lVar1 + -0x58) - lVar4,4);
        }
        lVar4 = *(long *)(lVar1 + -0xa0);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0x98) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x88) + 0x18))
                    (*(long **)(lVar1 + -0x88),lVar4,*(long *)(lVar1 + -0x90) - lVar4,4);
        }
        lVar7 = lVar7 + -0xa8;
      } while ((lVar2 + param_2 * 0xa8) - lVar3 != lVar7);
    }
    param_1[1] = lVar5;
  }
  return;
}


