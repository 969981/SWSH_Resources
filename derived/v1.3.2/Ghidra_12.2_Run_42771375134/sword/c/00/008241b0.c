/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008241b0; name: FUN_008241b0
 */


int * FUN_008241b0(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  
  iVar3 = (int)param_1[1];
  piVar5 = (int *)param_1[2];
  uVar4 = iVar3 + param_2;
  if ((int)uVar4 <= *(int *)((long)param_1 + 0xc)) goto LAB_00824278;
  uVar1 = *(int *)((long)param_1 + 0xc) * 2;
  if ((int)uVar4 <= (int)uVar1) {
    uVar4 = uVar1;
  }
  lVar6 = *param_1;
  if ((int)uVar4 < 5) {
    uVar4 = 4;
  }
  if (lVar6 == 0) {
    puVar2 = operator_new__((ulong)uVar4 * 8 + 8);
    param_1[2] = (long)puVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (piVar5 != (int *)0x0) goto LAB_00824218;
LAB_00824268:
    *puVar2 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_0080efb0(lVar6,0);
    param_1[2] = (long)puVar2;
    *(uint *)((long)param_1 + 0xc) = uVar4;
    if (piVar5 == (int *)0x0) goto LAB_00824268;
LAB_00824218:
    if (*piVar5 < 1) goto LAB_00824268;
    memcpy(puVar2 + 2,piVar5 + 2,(long)*piVar5 << 3);
    *(int *)param_1[2] = *piVar5;
  }
  if ((piVar5 != (int *)0x0) && (lVar6 == 0)) {
    operator_delete__(piVar5);
  }
  piVar5 = (int *)param_1[2];
  iVar3 = (int)param_1[1];
LAB_00824278:
  return piVar5 + (long)iVar3 * 2 + 2;
}


