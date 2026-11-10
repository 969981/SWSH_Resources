/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484550; name: FUN_00484550
 */


void FUN_00484550(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong unaff_x21;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x9c);
  if (((param_2 ^ uVar1 >> 10) & 1) != 0) {
    *(uint *)(param_1 + 0x9c) = uVar1 & 0xfffff800 | uVar1 & 0x3ff | (param_2 & 1) << 10;
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x68);
      uVar4 = (ulong)uVar1;
      *(byte *)(lVar3 + 0x72) = *(byte *)(lVar3 + 0x72) ^ 1;
      if (uVar1 != 0) {
        *(undefined4 *)(lVar3 + 0x68) = 0;
        if (0 < (int)uVar1) {
          plVar5 = *(long **)(lVar3 + 0x60);
          do {
            lVar6 = *plVar5;
            unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(lVar6 + 0x278);
            plVar2 = (long *)FUN_00481290(lVar3 + 0x60,*(undefined8 *)(lVar6 + 0x270),unaff_x21);
            uVar4 = uVar4 - 1;
            *plVar2 = lVar6;
            plVar5 = plVar5 + 1;
          } while (uVar4 != 0);
        }
      }
      if ((int)(*(long **)(param_1 + 0x70))[1] != 0) {
        lVar3 = **(long **)(param_1 + 0x70);
        do {
          lVar6 = *(long *)(lVar3 + 8);
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x50);
            uVar4 = (ulong)uVar1;
            *(byte *)(lVar6 + 0x5a) = *(byte *)(lVar6 + 0x5a) ^ 1;
            if (uVar1 != 0) {
              *(undefined4 *)(lVar6 + 0x50) = 0;
              if (0 < (int)uVar1) {
                plVar5 = *(long **)(lVar6 + 0x48);
                do {
                  lVar7 = *plVar5;
                  unaff_x21 = unaff_x21 & 0xffffffff00000000 | (ulong)*(uint *)(lVar7 + 0x278);
                  plVar2 = (long *)FUN_00481290(lVar6 + 0x48,*(undefined8 *)(lVar7 + 0x270),
                                                unaff_x21);
                  uVar4 = uVar4 - 1;
                  *plVar2 = lVar7;
                  plVar5 = plVar5 + 1;
                } while (uVar4 != 0);
              }
            }
          }
          lVar3 = lVar3 + 0x10;
        } while (lVar3 != **(long **)(param_1 + 0x70) +
                          (ulong)*(uint *)(*(long **)(param_1 + 0x70) + 1) * 0x10);
      }
    }
  }
  return;
}


