/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01538fb0; name: FUN_01538fb0
 */


void FUN_01538fb0(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = param_2 & 0xff;
  if (uVar4 < 9) {
    if ((param_2 & 0xff) == 0) {
      uVar7 = 0;
    }
    else {
      param_2 = param_2 & 3;
      if (uVar4 - 1 < 3) {
        uVar6 = 0;
        uVar7 = 0;
      }
      else {
        uVar6 = 0;
        uVar7 = 0;
        do {
          uVar5 = uVar6 & 0x1f;
          uVar1 = uVar6 + 1;
          uVar2 = uVar6 + 2;
          uVar3 = uVar6 + 3;
          uVar6 = uVar6 + 4;
          uVar7 = 1 << (ulong)(uVar3 & 0x1f) |
                  1 << (ulong)(uVar2 & 0x1f) |
                  1 << (ulong)(uVar1 & 0x1f) | 1 << (ulong)uVar5 | uVar7;
        } while (uVar4 - param_2 != uVar6);
      }
      if (param_2 != 0) {
        iVar8 = -param_2;
        do {
          uVar4 = uVar6 & 0x1f;
          uVar6 = uVar6 + 1;
          uVar7 = 1 << (ulong)uVar4 | uVar7;
          iVar8 = iVar8 + 1;
        } while (iVar8 != 0);
      }
    }
    *(uint *)(param_1 + 0x60) = uVar7;
  }
  return;
}


