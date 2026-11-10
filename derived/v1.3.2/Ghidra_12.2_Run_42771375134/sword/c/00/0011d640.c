/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011d640; name: FUN_0011d640
 */


long FUN_0011d640(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2;
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x1d8);
    if (iVar2 == 0) {
      uVar1 = FUN_0011fe00(param_1 + 0x1c0);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x1d8);
    }
    *(uint *)(param_1 + 0x1d8) = iVar2 - 1U;
    lVar6 = *(long *)(*(long *)(param_1 + 0x1d0) + (ulong)(iVar2 - 1U) * 8);
    lVar4 = (ulong)(*(uint *)(lVar6 + 0x58) >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 0x1f0) + lVar4) =
         *(uint *)(*(long *)(param_1 + 0x1f0) + lVar4) |
         1 << ((ulong)*(uint *)(lVar6 + 0x58) & 0x1f);
    if (lVar6 == 0) {
      return 0;
    }
  }
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined1 *)(lVar6 + 0x52) = 0;
  if (param_2 == 0) {
    uVar3 = *(uint *)(lVar6 + 0x58);
    if ((uint)(*(int *)(param_1 + 0x678) << 5) <= uVar3) {
      FUN_00190b50((long *)(param_1 + 0x670),uVar3 * 2 + 0x100 & 0xffffff00);
      uVar3 = *(uint *)(lVar6 + 0x58);
    }
    lVar5 = *(long *)(param_1 + 0x670);
    lVar4 = (ulong)(uVar3 >> 5) * 4;
    *(uint *)(lVar5 + lVar4) = *(uint *)(lVar5 + lVar4) | 1 << (ulong)(uVar3 & 0x1f);
    if ((param_3 & 1) != 0) {
      uVar3 = *(uint *)(lVar6 + 0x58);
      if ((uint)(*(int *)(param_1 + 0x688) << 5) <= uVar3) {
        FUN_00190b50((long *)(param_1 + 0x680),uVar3 * 2 + 0x100 & 0xffffff00);
        uVar3 = *(uint *)(lVar6 + 0x58);
      }
      lVar5 = *(long *)(param_1 + 0x680);
      lVar4 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(lVar5 + lVar4) = *(uint *)(lVar5 + lVar4) | 1 << (ulong)(uVar3 & 0x1f);
    }
  }
  return lVar6;
}


