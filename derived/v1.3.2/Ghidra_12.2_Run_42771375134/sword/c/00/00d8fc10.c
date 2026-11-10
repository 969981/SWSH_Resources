/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d8fc10; name: FUN_00d8fc10
 */


void FUN_00d8fc10(long param_1)

{
  undefined1 auStack_2b8 [616];
  
  if (*(long *)(param_1 + 0x78) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x10))();
  }
                    /* WARNING: Subroutine does not return */
  memset(auStack_2b8,0,0x148);
}


