/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045b530; name: FUN_0045b530
 */


void FUN_0045b530(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  uVar1 = (ulong)*(uint *)(param_1 + 1);
  plVar3 = plVar2;
  if (*(uint *)(param_1 + 1) != 0) {
    do {
      if ((plVar3[3] != 0) && (plVar3[4] != 0)) {
        FUN_0047a510();
        plVar2 = (long *)*param_1;
        uVar1 = (ulong)*(uint *)(param_1 + 1);
      }
      plVar3 = plVar3 + 5;
    } while (plVar3 != plVar2 + uVar1 * 5);
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  if ((int)uVar1 != 0) {
    do {
      if ((long *)plVar2[1] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[1] + 0x10))();
        plVar2[1] = 0;
      }
      if ((long *)plVar2[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[3] + 0x18))();
        plVar2[3] = 0;
      }
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 5;
    } while (plVar3 != plVar2);
    plVar2 = (long *)*param_1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar2);
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}


