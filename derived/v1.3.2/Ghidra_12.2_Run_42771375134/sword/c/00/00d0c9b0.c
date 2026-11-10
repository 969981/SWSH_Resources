/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0c9b0; name: FUN_00d0c9b0
 */


void FUN_00d0c9b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,int param_6)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uStack_47;
  
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x98),param_4,*(undefined8 *)(param_1 + 0x68));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0xa0),uVar4,*(undefined8 *)(param_1 + 0x68));
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x98),param_5,*(undefined8 *)(param_1 + 0x68));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0xa0),uVar4,*(undefined8 *)(param_1 + 0x68));
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x98),param_5 + 8,*(undefined8 *)(param_1 + 0x68));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0xa0),uVar4,*(undefined8 *)(param_1 + 0x68));
  if (param_6 == 1) {
    bVar2 = 1;
  }
  else if (param_6 == 2) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0xb1) ^ 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(byte *)((long)param_2 + 0x11) = bVar2;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  *param_2 = uVar3;
  param_2[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = uVar4;
  param_3[1] = uVar1;
  param_3[4] = 0;
  *(ulong *)((long)param_3 + 0x36) = CONCAT44(0xffff,CONCAT13(uStack_47,0x10000));
  param_3[5] = 0;
  param_3[6] = 0;
  return;
}


