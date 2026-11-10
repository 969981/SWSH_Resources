/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb9290; name: FUN_00bb9290
 */


void FUN_00bb9290(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 0x630) == '\0') {
    return;
  }
  uVar3 = *param_2;
  uVar4 = *(uint *)(param_1 + 0x628);
  iVar5 = (int)(uVar4 << 0x14) >> 0x14;
  iVar6 = iVar5 - ((int)(uVar3 << 0x14) >> 0x14);
  iVar7 = iVar5 - uVar3;
  iVar1 = -iVar7;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar7 = -iVar6;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  uVar2 = (uVar4 & 0xfff) << 0xc;
  uVar8 = uVar4 & 0xfff;
  if ((int)uVar3 < iVar5) {
    iVar1 = iVar7;
    uVar2 = uVar4 & 0xfff;
    uVar8 = (uVar3 & 0xfff) << 0xc;
  }
  uVar3 = *(uint *)(param_1 + 0x62c);
  *(uint *)(param_1 + 0x628) = uVar2 | uVar8 | iVar1 * 0x1000000 + 0x1000000U;
  uVar4 = param_2[1];
  iVar5 = (int)(uVar3 << 0x14) >> 0x14;
  iVar6 = iVar5 - ((int)(uVar4 << 0x14) >> 0x14);
  iVar7 = iVar5 - uVar4;
  iVar1 = -iVar7;
  if (-1 < iVar7) {
    iVar1 = iVar7;
  }
  iVar7 = -iVar6;
  if (-1 < iVar6) {
    iVar7 = iVar6;
  }
  uVar2 = (uVar3 & 0xfff) << 0xc;
  uVar8 = uVar3 & 0xfff;
  if ((int)uVar4 < iVar5) {
    uVar2 = uVar3 & 0xfff;
    uVar8 = (uVar4 & 0xfff) << 0xc;
    iVar1 = iVar7;
  }
  *(uint *)(param_1 + 0x62c) = uVar2 | uVar8 | iVar1 * 0x1000000 + 0x1000000U;
  FUN_00bc41f0();
  return;
}


