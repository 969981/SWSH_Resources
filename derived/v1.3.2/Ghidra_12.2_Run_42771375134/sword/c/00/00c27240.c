/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c27240; name: FUN_00c27240
 */


undefined8 FUN_00c27240(long param_1,int param_2)

{
  undefined1 auStack_33c8 [13208];
  
  if (param_2 == 4) {
    if ((*(char *)(param_1 + 0x2af0) != '\0') && (*(char *)(param_1 + 0x2b68) != '\0')) {
      if (*(long *)(param_1 + 0x2b70) == 0) {
                    /* WARNING: Subroutine does not return */
        memset(auStack_33c8,0,0x2b28);
      }
                    /* WARNING: Subroutine does not return */
      memset(auStack_33c8,0,0x2b28);
    }
  }
  else if (((param_2 == 3) && (*(char *)(param_1 + 0x2a68) != '\0')) &&
          (*(char *)(param_1 + 0x2ae0) != '\0')) {
    if (*(long *)(param_1 + 0x2ae8) == 0) {
                    /* WARNING: Subroutine does not return */
      memset(auStack_33c8,0,0x2b28);
    }
                    /* WARNING: Subroutine does not return */
    memset(auStack_33c8,0,0x2b28);
  }
  return 0;
}


