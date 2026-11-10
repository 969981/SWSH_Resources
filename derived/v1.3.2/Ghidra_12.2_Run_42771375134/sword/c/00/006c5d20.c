/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c5d20; name: FUN_006c5d20
 */


void FUN_006c5d20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[1] = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[5] = *(undefined8 *)(param_2 + 0x38);
  param_1[3] = uVar1;
  *param_1 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[4] = *(undefined8 *)(param_2 + 0x30);
  param_1[2] = uVar1;
  return;
}


