/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af7d0; name: FUN_009af7d0
 */


int FUN_009af7d0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 1) & 0x7fffffff;
  if (uVar2 == 0) {
    return 0;
  }
  iVar5 = 0;
  uVar6 = 0;
  do {
    while( true ) {
      bVar3 = *(byte *)(*param_1 + uVar6);
      uVar7 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar7;
      iVar5 = iVar5 + (uint)(bVar3 >> 7);
      if (uVar2 <= uVar7) {
        return iVar5;
      }
      if ((bVar3 & 0x70) == 0x10) break;
      uVar7 = uVar7 + (bVar3 & 0xf);
      uVar6 = (ulong)uVar7;
      if (uVar2 <= uVar7) {
        return iVar5;
      }
    }
    if ((bVar3 & 0xf) != 0) {
      uVar7 = 1;
      do {
        uVar1 = (int)uVar6 + (*(byte *)(*param_1 + uVar6) & 0x1f) * 8 + 1;
        uVar6 = (ulong)uVar1;
        bVar4 = uVar7 < (bVar3 & 0xf);
        uVar7 = uVar7 + 1;
      } while (uVar1 < uVar2 && bVar4);
    }
  } while ((uint)uVar6 < uVar2);
  return iVar5;
}


