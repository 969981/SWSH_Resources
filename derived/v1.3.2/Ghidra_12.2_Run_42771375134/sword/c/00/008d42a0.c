/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d42a0; name: FUN_008d42a0
 */


undefined8 FUN_008d42a0(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  if ((param_2 == 1) && (plVar4 != (long *)0x0)) {
    uVar3 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if ((uVar3 & 1) == 0) {
LAB_008d4308:
      param_1[1] = 0;
      return 1;
    }
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    if (plVar4 == (long *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4);
    if (iVar2 != 2) {
      if (iVar2 == 1) {
        param_1[1] = 0;
        return 0;
      }
      if (iVar2 == 0) goto LAB_008d4308;
      uVar1 = *(int *)((long)param_1 + 0xc) + 1;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      if (uVar1 < 2) {
        return 0;
      }
      goto LAB_008d4330;
    }
  }
  uVar1 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar1;
  if (uVar1 < 0x1c3) {
    return 0;
  }
LAB_008d4330:
  (**(code **)(*(long *)*param_1 + 0xb8))();
  return 0;
}


