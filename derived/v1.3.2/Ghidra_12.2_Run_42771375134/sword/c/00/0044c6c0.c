/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044c6c0; name: FUN_0044c6c0
 */


undefined8 FUN_0044c6c0(undefined4 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xb8);
  if (plVar1 != (long *)0x0) {
    FUN_004635c0(plVar1,param_1);
    *plVar1 = (long)(PTR_DAT_02712ff8 + 0x10);
                    /* WARNING: Subroutine does not return */
    memset(plVar1 + 6,0,0x70);
  }
  return 0;
}


