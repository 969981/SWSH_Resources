/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007851c0; name: FUN_007851c0
 */


void FUN_007851c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  uVar2 = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  FUN_00784ef0();
  return;
}


