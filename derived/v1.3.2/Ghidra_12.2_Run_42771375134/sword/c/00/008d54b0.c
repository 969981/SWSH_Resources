/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d54b0; name: FUN_008d54b0
 */


void FUN_008d54b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x78) = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  return;
}


