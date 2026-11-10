/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8380; name: FUN_006f8380
 */


undefined4 FUN_006f8380(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(param_1 + 100);
  if (param_2 != 1) {
    puVar1 = (undefined4 *)(param_1 + 0x70);
  }
  puVar2 = (undefined4 *)(param_1 + 0x7c);
  if (param_2 != 2) {
    puVar2 = puVar1;
  }
  return *puVar2;
}


