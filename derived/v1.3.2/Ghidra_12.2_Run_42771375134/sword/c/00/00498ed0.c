/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00498ed0; name: FUN_00498ed0
 */


undefined8 FUN_00498ed0(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  int *piVar4;
  
  if ((param_2 != 0) && (4 < *(uint *)(param_2 + 0x40))) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x38) + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
    piVar2 = *(int **)(lVar3 + 0x20);
    uVar1 = *(uint *)(lVar3 + 0x28);
    piVar4 = piVar2;
    if (uVar1 == 0) {
LAB_00498f38:
      if (piVar4 != piVar2 + (ulong)uVar1 * 3) {
        return *(undefined8 *)(piVar4 + 1);
      }
    }
    else {
      lVar3 = (ulong)uVar1 * 0xc;
      do {
        if (*piVar4 == param_3) goto LAB_00498f38;
        lVar3 = lVar3 + -0xc;
        piVar4 = piVar4 + 3;
      } while (lVar3 != 0);
    }
  }
  return 0;
}


