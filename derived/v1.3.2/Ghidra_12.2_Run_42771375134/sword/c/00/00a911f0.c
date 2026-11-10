/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a911f0; name: FUN_00a911f0
 */


void FUN_00a911f0(long param_1,long param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_012b4da0(auStack_30,*(undefined8 *)(*(long *)(param_2 + 8) + 400),
               *(undefined8 *)(*(long *)(param_2 + 8) + 0x180));
  FUN_012b4070(param_1 + 0x120,auStack_30);
  return;
}


