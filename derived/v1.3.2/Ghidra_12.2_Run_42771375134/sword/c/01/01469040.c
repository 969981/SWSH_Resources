/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01469040; name: FUN_01469040
 */


void FUN_01469040(long param_1)

{
  undefined8 local_18;
  
  local_18 = 0x970ffa262cc5f8b1;
  FUN_00ffde30(param_1 + 0x100,&local_18);
  *(undefined1 *)(param_1 + 0x840) = 1;
  FUN_016bfe70();
  *(undefined1 *)(param_1 + 0x840) = 0;
  return;
}


