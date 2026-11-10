/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00829780; name: FUN_00829780
 */


void FUN_00829780(long *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)param_1[2];
  if (piVar2 == (int *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0xc);
LAB_00829808:
    FUN_00824290(param_1,iVar5 + 1);
LAB_00829814:
    piVar2 = (int *)param_1[2];
    iVar1 = *piVar2;
  }
  else {
    iVar1 = *piVar2;
    iVar4 = (int)param_1[1];
    iVar5 = *(int *)((long)param_1 + 0xc);
    lVar3 = (long)iVar4;
    if (iVar1 < iVar5) {
      if (iVar4 < iVar1) {
        *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + lVar3 * 2 + 2);
        iVar4 = (int)param_1[1];
      }
      *(undefined8 *)(piVar2 + (long)iVar4 * 2 + 2) = param_2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *(int *)param_1[2] = *(int *)param_1[2] + 1;
      return;
    }
    if (iVar4 == iVar5) goto LAB_00829808;
    if (iVar1 == iVar5) {
      if ((*(long **)(piVar2 + lVar3 * 2 + 2) != (long *)0x0) && (*param_1 == 0)) {
        (**(code **)(**(long **)(piVar2 + lVar3 * 2 + 2) + 8))();
      }
      goto LAB_00829824;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar2 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar2 + lVar3 * 2 + 2);
      goto LAB_00829814;
    }
  }
  *piVar2 = iVar1 + 1;
LAB_00829824:
  lVar3 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar3 + 1;
  *(undefined8 *)(param_1[2] + (long)(int)lVar3 * 8 + 8) = param_2;
  return;
}


