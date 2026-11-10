/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934730; name: FUN_00934730
 */


void FUN_00934730(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_1[0xc] = param_2[0xc];
  return;
}


