/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081cc60; name: FUN_0081cc60
 */


void FUN_0081cc60(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_0081ccd4:
    FUN_00824290(param_1,iVar4 + 1);
LAB_0081cce0:
    piVar3 = (int *)param_1[2];
    iVar1 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_0081ccd4;
    iVar1 = *piVar3;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      pbVar5 = *(byte **)(piVar3 + (long)iVar4 * 2 + 2);
      if (pbVar5 != (byte *)0x0 && *param_1 == 0) {
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + 0x10));
        }
        operator_delete(pbVar5);
      }
      goto LAB_0081ccf0;
    }
    if (iVar4 < iVar1) {
      *(undefined8 *)(piVar3 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_0081cce0;
    }
  }
  *piVar3 = iVar1 + 1;
LAB_0081ccf0:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 *)(param_1[2] + (long)(int)lVar2 * 8 + 8) = param_2;
  return;
}


