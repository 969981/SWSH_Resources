/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c26ab0; name: FUN_00c26ab0
 */


undefined8 FUN_00c26ab0(void)

{
  long *plVar1;
  undefined1 auStack_33d8 [13208];
  
  if (*(long *)(*(long *)PTR_DAT_02710798 + 0x228) != 0) {
    plVar1 = (long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x228) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* WARNING: Subroutine does not return */
    memset(auStack_33d8,0,0x2b28);
  }
  return 0;
}


