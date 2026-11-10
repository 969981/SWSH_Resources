/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048bf10; name: FUN_0048bf10
 */


void FUN_0048bf10(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  if ((*(long *)(param_2 + 2) != 0 && *(long *)(param_2 + 2) != param_1[5]) ||
     ((param_2[4] != 0 && (param_2[4] != (int)param_1[0x3b])))) {
switchD_0048bf74_caseD_4:
    return;
  }
  switch(*param_2) {
  case 0:
    FUN_0048c100(param_1,param_2 + 5,1);
    return;
  case 1:
    *(int *)((long)param_1 + 0x284) = *(int *)((long)param_1 + 0x284) + 1;
    if (param_2[5] == 0) {
      if ((*(byte *)((long)param_1 + 0x26a) & 0x78) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048c0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x98))(param_1,0);
        return;
      }
      lVar2 = param_1[0x3d];
      if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048c0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x98))(param_1,1);
        return;
      }
      uVar3 = *(undefined8 *)PTR_DAT_02712b18;
      uVar5 = 0;
      uVar4 = 0x4000000;
LAB_0048c080:
      FUN_004be340(uVar5,uVar3,lVar2,uVar4,0,4,0);
      return;
    }
    uVar4 = *(undefined8 *)(param_2 + 5);
    uVar5 = param_2[7];
    uVar3 = 0x4000000;
    break;
  case 2:
    if ((*(char *)((long)param_2 + 0x22) == '\0') &&
       (iVar1 = *(int *)((long)param_1 + 0x284) + -1,
       *(int *)((long)param_1 + 0x284) != 0 && iVar1 != 0)) {
      *(int *)((long)param_1 + 0x284) = iVar1;
      return;
    }
    *(undefined4 *)((long)param_1 + 0x284) = 0;
    (**(code **)(*param_1 + 0xa0))(param_1);
    if (param_2[5] == 0) {
      lVar2 = param_1[0x3d];
      if (lVar2 == 0) {
        *(undefined4 *)((long)param_1 + 0x21c) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x0048c0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x68))(param_1);
        return;
      }
      uVar3 = *(undefined8 *)PTR_DAT_02712b18;
      uVar4 = 0x8000000;
      uVar5 = 0x3f800000;
      goto LAB_0048c080;
    }
    uVar4 = *(undefined8 *)(param_2 + 5);
    uVar5 = param_2[7];
    uVar3 = 0x8000000;
    break;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x0048c01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)(param_2 + 10));
    return;
  default:
    goto switchD_0048bf74_caseD_4;
  case 5:
    FUN_0044f5c0(param_1 + 3);
    return;
  }
  FUN_0048c4c0(param_1,0,uVar3,uVar4,uVar5);
  return;
}


