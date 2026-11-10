/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ebb30; name: FUN_008ebb30
 */


ulong FUN_008ebb30(ulong param_1,undefined1 *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar5 = param_1 & 0xffffffff;
  iVar2 = FUN_00889230(param_1,0,DAT_02a4d174);
  if (iVar2 == 6 || iVar2 == 0) {
    *param_2 = 0;
  }
  bVar1 = iVar2 == 6 || iVar2 == 0;
  uVar3 = (ulong)bVar1;
  iVar2 = FUN_00889230(uVar5,1,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar6 = (uint)bVar1;
    uVar3 = (ulong)(uVar6 + 1);
    param_2[uVar6] = 1;
  }
  iVar2 = FUN_00889230(uVar5,2,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar4 = uVar3, iVar2 == 0)) {
    uVar4 = (ulong)((int)uVar3 + 1);
    param_2[uVar3] = 2;
  }
  iVar2 = FUN_00889230(uVar5,3,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar3 = uVar4, iVar2 == 0)) {
    uVar3 = (ulong)((int)uVar4 + 1);
    param_2[uVar4] = 3;
  }
  iVar2 = FUN_00889230(uVar5,4,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar4 = uVar3, iVar2 == 0)) {
    uVar4 = (ulong)((int)uVar3 + 1);
    param_2[uVar3] = 4;
  }
  iVar2 = FUN_00889230(uVar5,5,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar3 = uVar4, iVar2 == 0)) {
    uVar3 = (ulong)((int)uVar4 + 1);
    param_2[uVar4] = 5;
  }
  iVar2 = FUN_00889230(uVar5,6,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar4 = uVar3, iVar2 == 0)) {
    uVar4 = (ulong)((int)uVar3 + 1);
    param_2[uVar3] = 6;
  }
  iVar2 = FUN_00889230(uVar5,7,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar3 = uVar4, iVar2 == 0)) {
    uVar3 = (ulong)((int)uVar4 + 1);
    param_2[uVar4] = 7;
  }
  iVar2 = FUN_00889230(uVar5,8,DAT_02a4d174);
  if ((iVar2 == 6) || (uVar4 = uVar3, iVar2 == 0)) {
    uVar4 = (ulong)((int)uVar3 + 1);
    param_2[uVar3] = 8;
  }
  iVar2 = FUN_00889230(uVar5,9,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 9;
  }
  iVar2 = FUN_00889230(uVar5,10,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 10;
  }
  iVar2 = FUN_00889230(uVar5,0xb,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0xb;
  }
  iVar2 = FUN_00889230(uVar5,0xc,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0xc;
  }
  iVar2 = FUN_00889230(uVar5,0xd,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0xd;
  }
  iVar2 = FUN_00889230(uVar5,0xe,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0xe;
  }
  iVar2 = FUN_00889230(uVar5,0xf,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0xf;
  }
  iVar2 = FUN_00889230(uVar5,0x10,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar3 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar3] = 0x10;
  }
  iVar2 = FUN_00889230(uVar5,0x11,DAT_02a4d174);
  if ((iVar2 == 6) || (iVar2 == 0)) {
    uVar5 = uVar4 & 0xff;
    uVar4 = (ulong)((int)uVar4 + 1);
    param_2[uVar5] = 0x11;
  }
  return uVar4;
}


