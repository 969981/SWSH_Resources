/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00442ba0; name: FUN_00442ba0
 */


void FUN_00442ba0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  FUN_00442cb0();
  FUN_0044a870(param_1 + 0x88);
  puVar1 = PTR_DAT_02712a90;
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar3 = 0;
    do {
      plVar4 = (long *)(*(long *)(param_1 + 0x70) + uVar3 * 8);
      plVar2 = (long *)*plVar4;
      if ((long *)*plVar4 != (long *)0x0) {
        do {
          plVar4 = (long *)*plVar2;
          if (plVar2[4] != 0) {
            *(undefined4 *)(plVar2 + 5) = 0;
            FUN_00404870(*(undefined4 *)puVar1);
            plVar2[4] = 0;
            *(undefined4 *)((long)plVar2 + 0x2c) = 0;
          }
          FUN_00404870(*(undefined4 *)puVar1,plVar2);
          plVar2 = plVar4;
        } while (plVar4 != (long *)0x0);
        plVar4 = (long *)(*(long *)(param_1 + 0x70) + uVar3 * 8);
      }
      *plVar4 = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_00442e40(param_1);
  FUN_0044dd60(param_1 + 8);
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 200) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  return;
}


