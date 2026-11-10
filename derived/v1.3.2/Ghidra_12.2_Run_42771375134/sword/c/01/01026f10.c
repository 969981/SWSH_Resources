/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01026f10; name: FUN_01026f10
 */


void FUN_01026f10(long param_1)

{
  undefined1 auStack_190 [336];
  
  if (**(int **)(param_1 + 0x58) != -1) {
    nn::os::DestroySystemEvent((SystemEventType *)(*(int **)(param_1 + 0x58) + 0x4c));
                    /* WARNING: Subroutine does not return */
    memset(auStack_190,0,0x148);
  }
  return;
}


