/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f7930; name: FUN_007f7930
 */


undefined8 * FUN_007f7930(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  else {
    iVar1 = (int)param_1[1];
    iVar4 = *piVar3;
    if (iVar1 < iVar4) {
      *(int *)(param_1 + 1) = iVar1 + 1;
      return *(undefined8 **)(piVar3 + (long)iVar1 * 2 + 2);
    }
    if (iVar4 != *(int *)((long)param_1 + 0xc)) goto LAB_007f7998;
  }
  FUN_00824290(param_1,iVar4 + 1);
  piVar3 = (int *)param_1[2];
  iVar4 = *piVar3;
LAB_007f7998:
  *piVar3 = iVar4 + 1;
  lVar5 = *param_1;
  if (lVar5 == 0) {
    puVar2 = operator_new(0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
  }
  else {
    puVar2 = (undefined8 *)FUN_0080efb0(lVar5,0,0x18);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    FUN_0080eeb0(lVar5,puVar2,PTR_LAB_02716e80);
  }
  lVar5 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar5 + 1;
  *(undefined8 **)(param_1[2] + (long)(int)lVar5 * 8 + 8) = puVar2;
  return puVar2;
}


