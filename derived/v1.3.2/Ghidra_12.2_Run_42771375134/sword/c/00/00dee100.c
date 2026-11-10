/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee100; name: FUN_00dee100
 */


void FUN_00dee100(long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *(undefined2 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 200) = param_2[3];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = *param_2;
  uVar2 = param_2[2];
  *(undefined2 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  return;
}


