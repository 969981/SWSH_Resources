/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c3d3b0; name: FUN_00c3d3b0
 */


undefined8 FUN_00c3d3b0(long param_1)

{
  undefined1 auStack_2b8 [616];
  
  if (((*(char *)(param_1 + 0x940) != '\0') && (*(char *)(param_1 + 0x1210) != '\0')) &&
     (*(long *)(param_1 + 0x12a0) != 0)) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_2b8,0,0x268);
  }
  return 0;
}


