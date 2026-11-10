/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b270; name: FUN_00a0b270
 */


void FUN_00a0b270(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x28) = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined1 *)(param_1 + 0x54) = 1;
  return;
}


