/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dce9b0; name: FUN_00dce9b0
 */


void FUN_00dce9b0(long param_1)

{
  ulong local_18;
  
  if (*(long *)(param_1 + 0x9c0) != 0) {
    local_18 = FUN_0069d250();
    if ((local_18 & 0xff) != 0) {
      FUN_0069d260(*(undefined8 *)(param_1 + 0x9c0),&local_18);
    }
  }
  return;
}


