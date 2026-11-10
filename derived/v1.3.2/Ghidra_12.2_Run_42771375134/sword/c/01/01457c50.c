/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01457c50; name: FUN_01457c50
 */


void FUN_01457c50(long param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x98),param_3,*(undefined8 *)(param_1 + 0x68));
  FUN_014c62d0(*(undefined8 *)(param_1 + 0xa0),uVar2,*(undefined8 *)(param_1 + 0x68));
  if (param_4 == 1) {
    bVar1 = 1;
  }
  else if (param_4 == 2) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xb1) ^ 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((long)param_2 + 0x11) = bVar1;
  *param_2 = uVar2;
  param_2[1] = 0;
  *(undefined1 *)((long)param_2 + 0x12) = 0;
  return;
}


