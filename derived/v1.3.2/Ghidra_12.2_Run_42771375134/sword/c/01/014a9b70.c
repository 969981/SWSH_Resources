/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9b70; name: FUN_014a9b70
 */


void FUN_014a9b70(undefined8 param_1,int param_2)

{
  char *pcVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = FUN_0087d610(param_1,2);
  if ((uVar6 & 1) != 0) {
    return;
  }
  puVar2 = &UNK_0216fa10;
  iVar4 = FUN_0087d3e0(param_1);
  if (99 < iVar4) {
    puVar2 = &DAT_0216fa11;
  }
  pcVar1 = puVar2 + (long)param_2 * 3;
  if (0x9f < iVar4) {
    pcVar1 = pcVar1 + 1;
  }
  iVar8 = (int)*pcVar1;
  if ('\0' < *pcVar1) {
    iVar5 = FUN_00878a80(param_1);
    if (iVar5 == 0xb) {
      iVar8 = iVar8 + 1;
    }
    sVar3 = FUN_008787f0(param_1);
    if (sVar3 == 0xda) {
      iVar8 = (iVar8 * 0x96) / 100;
    }
  }
  uVar7 = iVar8 + iVar4 & (iVar8 + iVar4 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar7) {
    uVar7 = 0xff;
  }
  FUN_0087d3f0(param_1,uVar7);
  return;
}


