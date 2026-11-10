/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004675b0; name: FUN_004675b0
 */


undefined4 FUN_004675b0(long param_1,int param_2)

{
  int *__src;
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  
  piVar3 = *(int **)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x20);
  piVar5 = piVar3;
  if (uVar2 == 0) {
LAB_00467608:
    if (piVar5 != piVar3 + (ulong)uVar2 * 0xc) {
      if (*(long *)(piVar5 + 4) == 0) {
        uVar1 = 1;
        lVar4 = *(long *)(piVar5 + 6);
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[2] = 0;
      }
      else {
        uVar1 = FUN_00480a30(*(long *)(piVar5 + 4),param_1);
        piVar5[4] = 0;
        piVar5[5] = 0;
        lVar4 = *(long *)(piVar5 + 6);
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[2] = 0;
      }
      if (lVar4 != 0) {
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        piVar5[6] = 0;
        piVar5[7] = 0;
      }
      piVar5[8] = 0;
      piVar5[9] = 0;
      uVar2 = *(uint *)(param_1 + 0x20);
      piVar3 = (int *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 0x30 + -0x30);
      if (piVar5 < piVar3) {
        do {
          __src = piVar5 + 0xc;
          memcpy(piVar5,__src,0x30);
          piVar5 = __src;
        } while (__src < piVar3);
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      *(uint *)(param_1 + 0x20) = uVar2 - 1;
      return uVar1;
    }
  }
  else {
    lVar4 = (ulong)uVar2 * 0x30;
    do {
      if (*piVar5 == param_2) goto LAB_00467608;
      lVar4 = lVar4 + -0x30;
      piVar5 = piVar5 + 0xc;
    } while (lVar4 != 0);
  }
  return 0x10;
}


