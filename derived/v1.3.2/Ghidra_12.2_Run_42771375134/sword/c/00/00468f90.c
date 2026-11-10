/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00468f90; name: FUN_00468f90
 */


void FUN_00468f90(int param_1,long param_2,int param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  piVar2 = *(int **)PTR_DAT_02713118;
  uVar1 = *(uint *)(PTR_DAT_02713118 + 8);
  uVar4 = (ulong)uVar1;
  piVar3 = piVar2 + uVar4 * 10;
  piVar5 = piVar2;
  if (uVar1 == 0) {
LAB_00468ff8:
    if (piVar5 != piVar3) {
      *param_4 = *(undefined8 *)(piVar5 + 6);
      *param_5 = piVar5[8];
      return;
    }
  }
  else {
    lVar6 = uVar4 * 0x28;
    do {
      if (((*piVar5 == param_1) && (piVar5[4] == param_3)) && (*(long *)(piVar5 + 2) == param_2))
      goto LAB_00468ff8;
      lVar6 = lVar6 + -0x28;
      piVar5 = piVar5 + 10;
    } while (lVar6 != 0);
  }
  if (param_2 != -1) {
    if (uVar1 == 0) {
LAB_0046906c:
      if (piVar2 != piVar3) {
        *param_4 = *(undefined8 *)(piVar2 + 6);
        *param_5 = piVar2[8];
        return;
      }
    }
    else {
      lVar6 = uVar4 * 0x28;
      do {
        if (((*piVar2 == param_1) && (piVar2[4] == param_3)) && (*(long *)(piVar2 + 2) == -1))
        goto LAB_0046906c;
        lVar6 = lVar6 + -0x28;
        piVar2 = piVar2 + 10;
      } while (lVar6 != 0);
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  return;
}


