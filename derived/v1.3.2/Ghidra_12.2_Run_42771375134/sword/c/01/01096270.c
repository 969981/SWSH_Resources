/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01096270; name: FUN_01096270
 */


void FUN_01096270(long param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x80),param_3,*(undefined8 *)(param_1 + 0x78));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0x88),uVar1,*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((long)param_2 + 0x11) = param_4 & 1;
  *param_2 = uVar1;
  param_2[1] = 0;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  return;
}


