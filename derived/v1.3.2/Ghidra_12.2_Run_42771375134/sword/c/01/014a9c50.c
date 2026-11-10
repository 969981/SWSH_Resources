/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9c50; name: FUN_014a9c50
 */


void FUN_014a9c50(undefined8 param_1)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  
  uVar5 = FUN_0087d610(param_1,2);
  if ((uVar5 & 1) != 0) {
    return;
  }
  iVar3 = FUN_0087d3e0(param_1);
  pcVar1 = "\x01\x01";
  if (99 < iVar3) {
    pcVar1 = "\x01";
  }
  if (0x9f < iVar3) {
    pcVar1 = pcVar1 + 1;
  }
  iVar7 = (int)*pcVar1;
  if ('\0' < *pcVar1) {
    iVar4 = FUN_00878a80(param_1);
    if (iVar4 == 0xb) {
      iVar7 = iVar7 + 1;
    }
    sVar2 = FUN_008787f0(param_1);
    if (sVar2 == 0xda) {
      iVar7 = (iVar7 * 0x96) / 100;
    }
  }
  uVar6 = iVar7 + iVar3 & (iVar7 + iVar3 >> 0x1f ^ 0xffffffffU);
  if (0xfe < (int)uVar6) {
    uVar6 = 0xff;
  }
  FUN_0087d3f0(param_1,uVar6);
  return;
}


