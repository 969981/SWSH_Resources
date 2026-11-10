/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00544460; name: FUN_00544460
 */


void FUN_00544460(long param_1)

{
  undefined1 auStack_228 [456];
  
  if (*(long **)(param_1 + 0xa8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x88))();
                    /* WARNING: Subroutine does not return */
    memset(auStack_228,0,0x1c0);
  }
  return;
}


