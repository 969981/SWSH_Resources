/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00543b10; name: FUN_00543b10
 */


undefined4 FUN_00543b10(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_1[0x10] != 0) {
    return 0;
  }
  if ((int)param_1[2] == 5) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  if (((char)param_1[0x16] != '\0') && ((long *)param_1[0x15] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x15] + 0x18))();
    param_1[0x15] = 0;
  }
  param_1[0x15] = 0;
  if (((*(int *)((long)param_1 + 0x24) == 1) && ((long *)param_1[0x17] != (long *)0x0)) &&
     (uVar2 = (**(code **)(*(long *)param_1[0x17] + 0x40))(), (uVar2 & 1) != 0)) {
    plVar3 = (long *)(**(code **)(*(long *)param_1[0x17] + 0x50))();
    *plVar3 = param_1[0x15];
    (**(code **)(*(long *)param_1[0x17] + 0x48))();
  }
  uVar2 = param_1[0x10];
  if (uVar2 != 0) {
    uVar4 = uVar2 + *(long *)(uVar2 - 8) * 8;
    do {
      uVar4 = uVar4 - 8;
    } while (uVar2 <= uVar4);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_1[0x10] = 0;
  }
  return uVar1;
}


