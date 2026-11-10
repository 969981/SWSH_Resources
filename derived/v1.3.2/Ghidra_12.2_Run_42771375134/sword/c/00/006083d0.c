/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006083d0; name: FUN_006083d0
 */


undefined1 FUN_006083d0(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x40);
  if (puVar1 < *(undefined1 **)(param_1 + 0x48)) {
    *(undefined1 **)(param_1 + 0x40) = puVar1 + 1;
    return *puVar1;
  }
  return 0;
}


