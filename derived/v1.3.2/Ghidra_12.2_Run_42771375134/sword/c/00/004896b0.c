/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004896b0; name: FUN_004896b0
 */


void FUN_004896b0(undefined4 *param_1)

{
  long *plVar1;
  
  *param_1 = 0;
  if (*(long *)(param_1 + 0xc) != 0) {
    param_1[0xe] = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0xc) = 0;
    param_1[0xf] = 0;
  }
  if ((*(byte *)(param_1 + 10) >> 1 & 1) != 0) {
    plVar1 = *(long **)(param_1 + 4);
    if (plVar1 != (long *)0x0) {
      if (*(ushort *)(plVar1 + 2) - 1 == 0) {
        if (*plVar1 != 0) {
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        }
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar1);
      }
      else {
        *(short *)(plVar1 + 2) = (short)(*(ushort *)(plVar1 + 2) - 1);
      }
    }
    *(undefined8 *)(param_1 + 4) = 0;
  }
  if (*(long *)(param_1 + 0x22) != 0) {
    param_1[0x24] = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x22) = 0;
    param_1[0x25] = 0;
  }
  return;
}


