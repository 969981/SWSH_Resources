/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01096350; name: FUN_01096350
 */


void FUN_01096350(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7,byte param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x80),param_4,*(undefined8 *)(param_1 + 0x78));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar3,*(undefined8 *)(param_1 + 0x78));
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x80),param_5,*(undefined8 *)(param_1 + 0x78));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar3,*(undefined8 *)(param_1 + 0x78));
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x80),param_6,*(undefined8 *)(param_1 + 0x78));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar3,*(undefined8 *)(param_1 + 0x78));
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((long)param_2 + 0x11) = param_7 & 1;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  *param_2 = uVar3;
  param_2[1] = 0;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  param_3[2] = 0;
  *(byte *)(param_3 + 7) = param_8 & 1;
  *(undefined4 *)((long)param_3 + 0x3a) = 0xffff;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  return;
}


