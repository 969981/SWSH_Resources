/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fe530; name: FUN_008fe530
 */


void FUN_008fe530(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 0x260) = *(undefined2 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 600) = uVar1;
  return;
}


