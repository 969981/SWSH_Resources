/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9d20; name: FUN_014a9d20
 */


void FUN_014a9d20(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  char local_34;
  undefined1 local_33;
  undefined1 local_32;
  
  local_34 = FUN_00888630(param_2,0x44);
  local_33 = FUN_00888630(param_2,0x45);
  local_32 = FUN_00888630(param_2,0x46);
  uVar5 = FUN_0087d610(param_1,2);
  if ((uVar5 & 1) == 0) {
    iVar3 = FUN_0087d3e0(param_1);
    pcVar1 = (char *)((ulong)&local_34 | 1);
    if (iVar3 < 100) {
      pcVar1 = &local_34;
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
  }
  return;
}


