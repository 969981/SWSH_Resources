/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005632d0; name: FUN_005632d0
 */


int FUN_005632d0(undefined8 *param_1,long param_2,undefined8 param_3,uint param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char acStack_460 [1024];
  int local_60 [2];
  undefined8 local_58;
  
  FUN_00550fe0(local_60,param_3);
  FUN_005515e0(local_60,local_60[0] + -1);
  if ((int)param_4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        uVar1 = uVar5 + 1;
        sprintf(acStack_460,"%s%d",local_58,uVar1 & 0xffffffff);
        iVar2 = (**(code **)(*(long *)*param_1 + 0x78))((long *)*param_1,acStack_460);
        *(int *)(param_2 + uVar5 * 4) = iVar2;
        iVar3 = iVar4;
        if (iVar2 != 0) break;
LAB_0056339c:
        uVar5 = uVar1;
        iVar4 = iVar3;
        if (param_4 == uVar1) goto LAB_005633c4;
      }
      iVar2 = (**(code **)(*(long *)*param_1 + 0xe0))((long *)*param_1,iVar2);
      if (-1 < iVar2) {
        if (*(int *)(param_2 + uVar5 * 4) != 0) {
          iVar3 = (**(code **)(*(long *)*param_1 + 0xd8))();
          if (-1 < iVar3) {
            iVar3 = iVar4;
          }
        }
        goto LAB_0056339c;
      }
      *(undefined4 *)(param_2 + uVar5 * 4) = 0;
      uVar5 = uVar1;
    } while (param_4 != uVar1);
  }
LAB_005633c4:
  FUN_00551380(local_60);
  return iVar3;
}


