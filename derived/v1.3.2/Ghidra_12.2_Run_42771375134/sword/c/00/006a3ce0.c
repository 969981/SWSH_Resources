/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a3ce0; name: FUN_006a3ce0
 */


void FUN_006a3ce0(long *param_1,ulong param_2)

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
    FUN_006a6fa0(param_1,param_2 + lVar5 * 0x30c30c30c30c30c3);
    return;
  }
  if (uVar6 != param_2) {
    lVar5 = lVar2 + param_2 * 0xa8;
    if (lVar5 != lVar3) {
      lVar7 = 0;
      do {
        lVar1 = lVar3 + lVar7;
        lVar4 = *(long *)(lVar1 + -0x38);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0x30) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x20) + 0x18))
                    (*(long **)(lVar1 + -0x20),lVar4,*(long *)(lVar1 + -0x28) - lVar4,1);
        }
        lVar4 = *(long *)(lVar1 + -0x70);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0x68) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x58) + 0x18))
                    (*(long **)(lVar1 + -0x58),lVar4,*(long *)(lVar1 + -0x60) - lVar4,1);
        }
        lVar4 = *(long *)(lVar1 + -0xa8);
        if (lVar4 != 0) {
          *(long *)(lVar1 + -0xa0) = lVar4;
          (**(code **)(**(long **)(lVar1 + -0x90) + 0x18))
                    (*(long **)(lVar1 + -0x90),lVar4,*(long *)(lVar1 + -0x98) - lVar4,1);
        }
        lVar7 = lVar7 + -0xa8;
      } while ((lVar2 + param_2 * 0xa8) - lVar3 != lVar7);
    }
    param_1[1] = lVar5;
  }
  return;
}


