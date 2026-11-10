/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049d930; name: FUN_0049d930
 */


void FUN_0049d930(undefined8 param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  
  switch((int)param_2[9]) {
  case 0:
    local_3c = FUN_0049d430(param_1,param_2,param_2 + 3);
    FUN_0044fbf0(*param_2,(int)param_2[1],&local_3c,4);
    break;
  case 1:
    plVar5 = (long *)*param_2;
    iVar1 = *(int *)((long)param_2 + 0x4c);
    if (param_3 == 0) {
      uVar2 = (undefined4)param_2[1];
      uVar3 = 1;
      param_3 = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x20);
      uVar6 = 0x3f800000;
      if (iVar1 != 3) {
        uVar6 = 0;
      }
    }
    else {
      if (iVar1 == 3) {
        uVar6 = FUN_0049e710();
      }
      else {
        uVar6 = FUN_0049e8d0(param_1,param_2,param_2 + 3,param_3);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0x20);
      uVar2 = (undefined4)param_2[1];
      iVar1 = *(int *)((long)param_2 + 0x4c);
      uVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0049db04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar6,plVar5,uVar2,param_3,iVar1,uVar3);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x0049d9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*param_2 + 8))((long *)*param_2,param_3 != 0,(int)param_2[1]);
    return;
  case 3:
    FUN_0049d430(param_1,param_2,param_2 + 3);
    FUN_0046aca0(*param_2,(int)param_2[1],param_2 + 3);
    return;
  default:
    FUN_00466430(*param_2,param_3 != 0);
    return;
  case 6:
    fVar7 = (float)FUN_0049d430(param_1,param_2,param_2 + 3);
    lVar4 = *param_2;
    FUN_004bc400(auStack_38);
    if (lVar4 != 0) {
      FUN_004bc330(lVar4,param_2 + 3,(int)fVar7,0);
    }
    FUN_004bc420(auStack_38);
  }
  return;
}


