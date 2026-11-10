/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109f970; name: FUN_0109f970
 */


void FUN_0109f970(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x14c);
  uVar1 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x128));
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  iVar2 = FUN_0087a5f0(*(undefined8 *)(param_1 + 0x128));
  if (iVar2 == 100) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0087b3e0(*(undefined8 *)(param_1 + 0x128));
    iVar3 = FUN_0087b490(*(undefined8 *)(param_1 + 0x128));
    iVar4 = FUN_0087b350(*(undefined8 *)(param_1 + 0x128));
    iVar2 = (int)(((float)(iVar4 - iVar2) / (float)(iVar3 - iVar2)) * DAT_01d4c6b8);
  }
  *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0x148);
  *(int *)(param_1 + 0x150) = iVar2;
  if (*(int *)(param_1 + 0x14c) != *(int *)(param_1 + 0x158)) {
    iVar2 = 100;
  }
  *(undefined4 *)(param_1 + 0x17c) = 1;
  *(int *)(param_1 + 0x174) = iVar2;
  return;
}


