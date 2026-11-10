/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773380; name: FUN_00773380
 */


void FUN_00773380(long param_1,int param_2)

{
  undefined4 *puVar1;
  
  *(int *)(param_1 + 500) = param_2;
  puVar1 = (undefined4 *)(param_1 + 0x20c);
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x210);
  }
  *(undefined4 *)(param_1 + 0x214) = *puVar1;
  return;
}


