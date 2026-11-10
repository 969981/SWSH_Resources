/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f190; name: FUN_0045f190
 */


undefined4 FUN_0045f190(undefined8 param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_DAT_02712fd0;
  *param_3 = 0;
  piVar3 = *(int **)puVar2;
  uVar1 = *(uint *)(puVar2 + 8);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB_0045f1f0:
    if (piVar4 == piVar3 + (ulong)uVar1 * 6) {
      return 0x58;
    }
    uVar6 = 1;
    if (*(code **)(piVar4 + 4) != (code *)0x0) {
      lVar5 = (**(code **)(piVar4 + 4))();
      uVar6 = 1;
      if (lVar5 == 0) {
        uVar6 = 2;
      }
      *param_3 = lVar5;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x18;
    uVar6 = 0x58;
    do {
      if (*piVar4 == param_2) goto LAB_0045f1f0;
      lVar5 = lVar5 + -0x18;
      piVar4 = piVar4 + 6;
    } while (lVar5 != 0);
  }
  return uVar6;
}


