/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489640; name: FUN_00489640
 */


void FUN_00489640(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(ushort *)(plVar1 + 2) - 1 == 0) {
      if (*plVar1 != 0) {
        *(undefined4 *)(plVar1 + 1) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        *plVar1 = 0;
        *(undefined4 *)((long)plVar1 + 0xc) = 0;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar1);
      return;
    }
    *(short *)(plVar1 + 2) = (short)(*(ushort *)(plVar1 + 2) - 1);
  }
  return;
}


