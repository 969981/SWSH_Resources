/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c9c50; name: FUN_005c9c50
 */


int FUN_005c9c50(int param_1,long param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (0x20 < (int)param_4) {
    return 0;
  }
  iVar4 = 0;
  if (((int)(param_4 + param_3) <= param_1 * 8) && (0 < (int)param_4)) {
    iVar4 = 0;
    uVar5 = 0;
    do {
      uVar1 = param_3 + uVar5;
      uVar2 = uVar1 + 7;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      iVar4 = ((uint)((1 << (ulong)(uVar1 & 7) & (uint)*(byte *)(param_2 + ((int)uVar2 >> 3))) != 0)
              << (ulong)uVar3) + iVar4;
    } while (param_4 != uVar5);
  }
  return iVar4;
}


