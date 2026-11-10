/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cca0; name: FUN_0080cca0
 */


undefined8 FUN_0080cca0(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 < 0) {
    return 0;
  }
  lVar2 = *param_1;
  iVar5 = (int)param_1[1] - (int)lVar2;
  if (param_2 <= iVar5) {
    *param_1 = lVar2 + param_2;
    return 1;
  }
  if (0 < *(int *)((long)param_1 + 0x2c)) {
    *param_1 = lVar2 + iVar5;
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_1[6];
  if ((int)param_1[5] <= (int)param_1[6]) {
    iVar1 = (int)param_1[5];
  }
  iVar3 = iVar1 - (int)param_1[3];
  if (param_2 - iVar5 <= iVar3) {
    *(int *)(param_1 + 3) = (int)param_1[3] + (param_2 - iVar5);
                    /* WARNING: Could not recover jumptable at 0x0080cd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*(long *)param_1[2] + 0x20))();
    return uVar4;
  }
  if (iVar3 < 1) {
    return 0;
  }
  *(int *)(param_1 + 3) = iVar1;
  (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],iVar3);
  return 0;
}


