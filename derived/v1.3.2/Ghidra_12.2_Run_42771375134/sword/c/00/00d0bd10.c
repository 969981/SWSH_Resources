/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0bd10; name: FUN_00d0bd10
 */


undefined8 FUN_00d0bd10(long param_1)

{
  long *plVar1;
  undefined1 auStack_698 [1608];
  
  if (*(long *)(*(long *)PTR_DAT_02710798 + 0x1e8) != 0) {
    plVar1 = (long *)(*(long *)(*(long *)PTR_DAT_02710798 + 0x1e8) + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(param_1 + 0x90) != '\0') {
      if (*(long *)(param_1 + 0x98) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x10))();
      }
                    /* WARNING: Subroutine does not return */
      memset(auStack_698,0,0x644);
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return 0;
}


