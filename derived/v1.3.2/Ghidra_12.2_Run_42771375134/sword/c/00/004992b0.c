/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004992b0; name: FUN_004992b0
 */


undefined8 FUN_004992b0(undefined8 param_1,int param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  
  if (param_3 == 0) {
    for (lVar1 = *(long *)(PTR_DAT_02713358 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
      piVar2 = *(int **)(lVar1 + 0x20);
      uVar3 = *(uint *)(lVar1 + 0x28);
      piVar5 = piVar2 + (ulong)uVar3 * 3;
      if (uVar3 != 0) {
        lVar6 = (ulong)uVar3 * 0xc;
        do {
          if (*piVar2 == param_2) goto LAB_004993a4;
          lVar6 = lVar6 + -0xc;
          piVar2 = piVar2 + 3;
        } while (lVar6 != 0);
        piVar2 = piVar5;
      }
LAB_004993a4:
      if (piVar5 != piVar2) {
        if (piVar2 < piVar5 + -3) {
          do {
            piVar4 = piVar2 + 3;
            piVar2[2] = piVar2[5];
            *(undefined8 *)piVar2 = *(undefined8 *)piVar4;
            piVar2 = piVar4;
          } while (piVar4 < piVar5 + -3);
          uVar3 = *(uint *)(lVar1 + 0x28);
        }
        *(uint *)(lVar1 + 0x28) = uVar3 - 1;
      }
    }
  }
  else if ((4 < *(uint *)(param_3 + 0x40)) &&
          (lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x20), lVar1 != 0)) {
    piVar2 = *(int **)(lVar1 + 0x20);
    uVar3 = *(uint *)(lVar1 + 0x28);
    piVar5 = piVar2 + (ulong)uVar3 * 3;
    if (uVar3 != 0) {
      lVar6 = (ulong)uVar3 * 0xc;
      do {
        if (*piVar2 == param_2) goto LAB_0049930c;
        lVar6 = lVar6 + -0xc;
        piVar2 = piVar2 + 3;
      } while (lVar6 != 0);
      piVar2 = piVar5;
    }
LAB_0049930c:
    if (piVar5 != piVar2) {
      if (piVar2 < piVar5 + -3) {
        do {
          piVar4 = piVar2 + 3;
          piVar2[2] = piVar2[5];
          *(undefined8 *)piVar2 = *(undefined8 *)piVar4;
          piVar2 = piVar4;
        } while (piVar4 < piVar5 + -3);
        uVar3 = *(uint *)(lVar1 + 0x28);
      }
      *(uint *)(lVar1 + 0x28) = uVar3 - 1;
      return 1;
    }
  }
  return 1;
}


