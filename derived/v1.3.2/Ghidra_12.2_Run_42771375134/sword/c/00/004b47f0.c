/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b47f0; name: FUN_004b47f0
 */


undefined8 FUN_004b47f0(undefined8 *param_1,int param_2,long param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 4;
    while( true ) {
      if (*piVar3 == param_2) break;
      lVar5 = lVar5 + -0x10;
      piVar3 = piVar3 + 4;
      if (lVar5 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar3 == piVar2 + (ulong)uVar1 * 4) {
    return 0x14;
  }
  lVar5 = *(long *)(*(long *)(piVar3 + 2) + 8);
  if (lVar5 == 0 || lVar5 == param_3) {
    lVar4 = 0;
    lVar6 = lVar5;
  }
  else {
    lVar6 = lVar5;
    do {
      lVar4 = lVar6;
      lVar6 = *(long *)(lVar4 + 8);
    } while (lVar6 != 0 && lVar6 != param_3);
  }
  if (lVar6 != 0) {
    if (lVar6 == lVar5) {
      *(undefined8 *)(*(long *)(piVar3 + 2) + 8) = *(undefined8 *)(lVar6 + 8);
      return 1;
    }
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar6 + 8);
  }
  return 1;
}


