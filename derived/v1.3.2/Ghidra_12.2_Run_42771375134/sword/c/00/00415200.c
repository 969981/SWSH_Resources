/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00415200; name: FUN_00415200
 */


void FUN_00415200(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_02712a90;
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar3 = (ulong)*(uint *)(param_1 + 1) * 0x60;
      do {
        if (plVar2[10] != 0) {
          FUN_00404870(*(undefined4 *)puVar1);
        }
        if (*plVar2 != 0) {
          *(undefined4 *)(plVar2 + 1) = 0;
          FUN_00404870(*(undefined4 *)puVar1);
          *plVar2 = 0;
          *(undefined4 *)((long)plVar2 + 0xc) = 0;
        }
        if (plVar2[2] != 0) {
          *(undefined4 *)(plVar2 + 3) = 0;
          FUN_00404870(*(undefined4 *)puVar1);
          plVar2[2] = 0;
          *(undefined4 *)((long)plVar2 + 0x1c) = 0;
        }
        plVar2 = plVar2 + 0xc;
        lVar3 = lVar3 + -0x60;
      } while (lVar3 != 0);
      plVar2 = (long *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar2);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


