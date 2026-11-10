/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c59d0; name: FUN_003c59d0
 */


undefined8 FUN_003c59d0(long param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x70) + 0x10);
  }
  return *puVar1;
}


