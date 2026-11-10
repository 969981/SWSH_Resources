/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7650; name: FUN_011f7650
 */


void FUN_011f7650(long *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  
  uVar5 = *(ulong *)(param_2 + 0x60);
  if (uVar5 >> 6 != 0 || (uVar5 & 0x3f) != 0) {
    uVar7 = 0;
    puVar8 = *(ulong **)(param_2 + 0x58);
    do {
      if ((*puVar8 & 1L << (uVar7 & 0x3f)) == 0) goto LAB_011f76d8;
      iVar6 = (int)uVar7;
      uVar2 = 0;
      if (iVar6 != 0x3f) {
        uVar2 = iVar6 + 1;
      }
      uVar7 = (ulong)uVar2;
      puVar1 = puVar8 + 1;
      if (iVar6 != 0x3f) {
        puVar1 = puVar8;
      }
      puVar8 = puVar1;
    } while ((uVar2 != ((uint)uVar5 & 0x3f)) ||
            (*(ulong **)(param_2 + 0x58) + (uVar5 >> 6) != puVar1));
  }
  sVar3 = *(short *)(param_2 + 0x18);
  param_2 = param_2 + 0x20;
  sVar4 = FUN_011f71b0(param_2);
  if (sVar3 != sVar4) {
LAB_011f76d8:
    param_2 = 0;
  }
  *param_1 = param_2;
  return;
}


