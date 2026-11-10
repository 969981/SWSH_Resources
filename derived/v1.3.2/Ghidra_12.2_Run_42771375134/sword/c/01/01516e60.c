/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01516e60; name: FUN_01516e60
 */


void FUN_01516e60(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  param_2[1] = *(undefined8 *)(param_1 + 0x68);
  param_2[2] = uVar2;
  *param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x90);
  param_2[3] = uVar1;
  param_2[4] = uVar2;
  param_2[5] = uVar3;
  *param_3 = *(undefined8 *)(param_1 + 0xa0);
  return;
}


