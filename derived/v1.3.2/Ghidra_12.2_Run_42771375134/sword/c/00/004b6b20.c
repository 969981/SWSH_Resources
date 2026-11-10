/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b6b20; name: FUN_004b6b20
 */


void FUN_004b6b20(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (plVar1[2] != 0) {
      *(undefined4 *)(plVar1 + 3) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      plVar1[2] = 0;
      *(undefined4 *)((long)plVar1 + 0x1c) = 0;
    }
    if (plVar1[4] != 0) {
      *(undefined4 *)(plVar1 + 5) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      plVar1[4] = 0;
      *(undefined4 *)((long)plVar1 + 0x2c) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined4 *)(plVar1 + 1) = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar1 = 0;
      *(undefined4 *)((long)plVar1 + 0xc) = 0;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


