/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0081e830; name: FUN_0081e830
 */


undefined8 FUN_0081e830(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long local_b0 [3];
  undefined8 uStack_98;
  int local_80 [2];
  long local_78;
  undefined8 uStack_60;
  long local_58;
  
  if ((int)param_1[6] == 1) {
    FUN_00801420(param_1 + 5);
    if ((int)param_1[6] == 1) {
      (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined4 *)(param_1 + 6) = 2;
    }
    FUN_008014c0(param_1 + 5);
  }
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    FUN_00822b50(local_b0,param_1[9],param_2);
    lVar1 = 0;
    iVar6 = 2;
    lVar5 = local_b0[0];
    uVar2 = uStack_98;
  }
  else {
    lVar1 = FUN_00823090(param_1[9],param_2);
    iVar6 = 1;
    lVar5 = 0;
    uVar2 = 0;
  }
  iVar3 = 1;
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    iVar3 = 2;
  }
  if (iVar6 == iVar3) {
    if (iVar6 == 1) {
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 6) = 0;
        plVar4 = (long *)(lVar1 + 0x20);
        goto LAB_0081e938;
      }
    }
    else if (lVar5 != 0) {
      *(undefined4 *)(param_1 + 6) = 0;
      goto LAB_0081e934;
    }
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 6) = 0;
    if (iVar6 == 1) {
      plVar4 = (long *)(lVar1 + 0x20);
    }
    else {
LAB_0081e934:
      plVar4 = (long *)(lVar5 + 0x10);
    }
LAB_0081e938:
    FUN_0081e0e0(*plVar4 + 0x10);
    local_80[0] = iVar6;
    local_78 = lVar5;
    uStack_60 = uVar2;
    local_58 = lVar1;
    FUN_0081e990(local_b0,param_1 + 7,local_80);
    uVar2 = 1;
  }
  return uVar2;
}


