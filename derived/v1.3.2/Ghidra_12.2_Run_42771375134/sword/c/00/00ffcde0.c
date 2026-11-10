/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffcde0; name: FUN_00ffcde0
 */


void FUN_00ffcde0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x3c8) != 0) && (*(int *)(param_1 + 0x8c) != 0)) {
    FUN_0168b630();
    if (1 < *(uint *)(param_1 + 0x8c)) {
      uVar1 = 1;
      lVar2 = 0x3e0;
      do {
        FUN_0168b630(*(long *)(param_1 + 0x3c8) + lVar2);
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x3e0;
      } while (uVar1 < *(uint *)(param_1 + 0x8c));
    }
  }
  if ((*(long *)(param_1 + 1000) != 0) && (*(int *)(param_1 + 0x98) != 0)) {
    FUN_0168b630();
    if (1 < *(uint *)(param_1 + 0x98)) {
      uVar1 = 1;
      lVar2 = 0x3d0;
      do {
        FUN_0168b630(*(long *)(param_1 + 1000) + lVar2);
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x3d0;
      } while (uVar1 < *(uint *)(param_1 + 0x98));
    }
  }
  if ((*(long *)(param_1 + 0x408) != 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_0168b630();
    if (1 < *(uint *)(param_1 + 0x9c)) {
      uVar1 = 1;
      lVar2 = 0x3d0;
      do {
        FUN_0168b630(*(long *)(param_1 + 0x408) + lVar2);
        uVar1 = uVar1 + 1;
        lVar2 = lVar2 + 0x3d0;
      } while (uVar1 < *(uint *)(param_1 + 0x9c));
    }
  }
  lVar2 = *(long *)(param_1 + 0x428);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1a0) != 0)) {
    lVar3 = 0;
    uVar1 = 0;
    do {
      FUN_0168b630(*(long *)(lVar2 + 0x180) + lVar3);
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 0x3d0;
    } while (uVar1 < *(uint *)(lVar2 + 0x1a0));
  }
  if (*(long *)(param_1 + 0x3c0) == 0) {
    return;
  }
  FUN_016d2270(*(long *)(param_1 + 0x3c0),param_2);
  FUN_016d2170(*(undefined8 *)(param_1 + 0x3c0));
  FUN_016d2260(*(undefined8 *)(param_1 + 0x3c0));
  return;
}


