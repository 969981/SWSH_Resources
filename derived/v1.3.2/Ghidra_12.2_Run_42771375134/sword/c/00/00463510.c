/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00463510; name: FUN_00463510
 */


void FUN_00463510(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[0xc];
  *param_1 = (long)(PTR_DAT_027130e0 + 0x10);
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
  param_1[0xc] = 0;
  *param_1 = (long)(PTR_DAT_027130d8 + 0x10);
  if ((long *)param_1[10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[10] + 0x18))();
  }
  operator_delete(param_1);
  return;
}


