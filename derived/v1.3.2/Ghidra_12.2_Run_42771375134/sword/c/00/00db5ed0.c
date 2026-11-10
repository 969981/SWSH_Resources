/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5ed0; name: FUN_00db5ed0
 */


undefined8 FUN_00db5ed0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auStack_38 [8];
  
  if (*(int *)((long)param_1 + 0x1cc) != 2) {
    if (*(int *)((long)param_1 + 0x1cc) != 1) {
      return 0;
    }
    plVar2 = (long *)param_1[0x3d];
    plVar3 = (long *)param_1[0x3e];
    if (plVar2 != plVar3) {
      do {
        plVar1 = plVar2 + 1;
        (**(code **)(*(long *)*plVar2 + 0x50))();
        plVar2 = plVar1;
      } while (plVar3 != plVar1);
      plVar2 = (long *)param_1[0x3d];
      if ((long *)param_1[0x3e] != plVar2) {
        plVar3 = (long *)param_1[0x3e];
        do {
          plVar1 = plVar3 + -1;
          if (*plVar1 != 0) {
            (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
            plVar3[-1] = 0;
          }
          plVar3 = plVar1;
        } while (plVar2 != plVar1);
      }
    }
    param_1[0x3e] = (long)plVar2;
    *(undefined4 *)((long)param_1 + 0x1cc) = 2;
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  FUN_00db8810(param_1,auStack_38);
  return 1;
}


