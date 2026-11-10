/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f67f0; name: thunk_FUN_0199c850
 */


void thunk_FUN_0199c850(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)PTR_DAT_02714668)(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}


