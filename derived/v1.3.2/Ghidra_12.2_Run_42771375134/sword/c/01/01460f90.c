/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01460f90; name: FUN_01460f90
 */


void FUN_01460f90(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5,int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 uStack_47;
  
  FUN_01457ce0(param_1,*(undefined8 *)(param_1 + 0x60),param_4);
  FUN_01457ce0(param_1,*(undefined8 *)(param_1 + 0x70),param_5);
  FUN_01457ce0(param_1,*(undefined8 *)(param_1 + 0x78),param_5 + 8);
  FUN_01457ce0(param_1,*(undefined8 *)(param_1 + 0x80),param_5 + 0x10);
  FUN_01457ce0(param_1,*(undefined8 *)(param_1 + 0x88),param_5 + 0x18);
  if (param_6 == 1) {
    bVar5 = 1;
  }
  else if (param_6 == 2) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(param_1 + 0xb1) ^ 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(byte *)((long)param_2 + 0x11) = bVar5;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  *param_2 = uVar6;
  param_2[1] = 0;
  param_3[2] = uVar1;
  param_3[3] = uVar3;
  *param_3 = uVar2;
  param_3[1] = uVar4;
  param_3[4] = 0;
  *(ulong *)((long)param_3 + 0x36) = CONCAT44(0xffff,CONCAT13(uStack_47,0x10000));
  param_3[5] = 0;
  param_3[6] = 0;
  return;
}


