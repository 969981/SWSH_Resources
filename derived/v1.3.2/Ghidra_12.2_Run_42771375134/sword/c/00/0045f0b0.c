/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f0b0; name: FUN_0045f0b0
 */


undefined8 FUN_0045f0b0(int param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02712fd0;
  *param_2 = 0;
  piVar4 = *(int **)puVar2;
  uVar1 = *(uint *)(puVar2 + 8);
  piVar5 = piVar4;
  if (uVar1 != 0) {
    lVar6 = (ulong)uVar1 * 0x18;
    while( true ) {
      if (*piVar5 == param_1) break;
      lVar6 = lVar6 + -0x18;
      piVar5 = piVar5 + 6;
      if (lVar6 == 0) {
        return 0x58;
      }
    }
  }
  if (piVar5 == piVar4 + (ulong)uVar1 * 6) {
    return 0x58;
  }
  plVar3 = (long *)(**(code **)(piVar5 + 2))(PTR_PTR_02713088);
  *param_2 = (long)plVar3;
  if (plVar3 == (long *)0x0) {
    return 2;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3,param_3);
  return 1;
}


