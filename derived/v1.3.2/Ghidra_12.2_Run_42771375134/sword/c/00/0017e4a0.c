/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017e4a0; name: FUN_0017e4a0
 */


undefined8 FUN_0017e4a0(long param_1,long param_2)

{
  undefined1 auStack_410 [960];
  
  *(undefined2 *)(*(long *)(param_2 + 0x10) + 0x1e) = 0;
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_410,0,0x3c0);
  }
  return 0;
}


