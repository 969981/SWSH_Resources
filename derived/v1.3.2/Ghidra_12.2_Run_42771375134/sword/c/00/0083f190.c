/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083f190; name: FUN_0083f190
 */


void FUN_0083f190(long *param_1,long *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  
  plVar3 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_00817700(param_4,param_2);
    piVar4 = (int *)param_1[2];
    if (piVar4 == (int *)0x0) goto LAB_0083f250;
LAB_0083f210:
    iVar5 = (int)param_1[1];
    if (iVar5 == *(int *)((long)param_1 + 0xc)) goto LAB_0083f254;
    iVar1 = *piVar4;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      if ((*(long **)(piVar4 + (long)iVar5 * 2 + 2) != (long *)0x0) && (*param_1 == 0)) {
        (**(code **)(**(long **)(piVar4 + (long)iVar5 * 2 + 2) + 8))();
      }
      goto LAB_0083f270;
    }
    if (iVar5 < iVar1) {
      *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2);
      goto LAB_0083f260;
    }
  }
  else {
    if (param_4 != param_3) {
      plVar3 = (long *)FUN_00818cf0(param_2,param_4);
      FUN_0081d600(param_2,plVar3);
      if (param_3 == 0) {
        (**(code **)(*param_2 + 8))(param_2);
      }
    }
    piVar4 = (int *)param_1[2];
    param_2 = plVar3;
    if (piVar4 != (int *)0x0) goto LAB_0083f210;
LAB_0083f250:
    iVar5 = *(int *)((long)param_1 + 0xc);
    plVar3 = param_2;
LAB_0083f254:
    FUN_00824290(param_1,iVar5 + 1);
LAB_0083f260:
    piVar4 = (int *)param_1[2];
    iVar1 = *piVar4;
  }
  *piVar4 = iVar1 + 1;
LAB_0083f270:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(long **)(param_1[2] + (long)(int)lVar2 * 8 + 8) = plVar3;
  return;
}


