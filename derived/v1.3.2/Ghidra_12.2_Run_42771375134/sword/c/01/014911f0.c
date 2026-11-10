/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014911f0; name: FUN_014911f0
 */


void FUN_014911f0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 == 4) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),3);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    uVar3 = 2;
  }
  else if (iVar1 == 3) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),3);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    uVar3 = 2;
  }
  else if (iVar1 == 1) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x90),3);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uVar3 = 2;
  }
  else {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x88),1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    uVar3 = 1;
  }
  FUN_010364c0(uVar2,uVar3);
  *(undefined4 *)(param_1 + 0x7c) = 7;
  FUN_016b2d70(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x600),1);
  lVar4 = *(long *)(param_1 + 0x88);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x610),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x618),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x648),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x640),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x638),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x628),0);
  FUN_016b2d70(*(undefined8 *)(lVar4 + 0x620),0);
  return;
}


