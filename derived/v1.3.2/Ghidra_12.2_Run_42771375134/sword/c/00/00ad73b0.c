/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad73b0; name: FUN_00ad73b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ad73b0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *******ppppppplVar5;
  long *****ppppplVar6;
  long local_b8;
  long ******local_b0;
  long *****local_a8;
  undefined4 *local_a0;
  undefined1 *local_98;
  long *******local_90 [12];
  
  if (*(int *)(param_1 + 0x4d0) == 1) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_b8 = *(long *)(param_1 + 0x510);
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_b0,lVar2,&local_b8);
    if (local_b0 == (long ******)0x0) {
      ppppplVar6 = (long *****)0x0;
    }
    else {
      ppppplVar6 = local_b0[0xc];
      if (ppppplVar6 != (long *****)0x0) {
        puVar3 = (undefined8 *)(*(code *)**ppppplVar6)(ppppplVar6);
        if (((*PTR_DAT_02719750 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(PTR_DAT_02719750), iVar1 != 0)) {
          uVar4 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar4;
          __cxa_guard_release(PTR_DAT_02719750);
        }
        for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
          if (puVar3 == (undefined8 *)PTR_DAT_02719758) {
            ppppplVar6 = ppppplVar6 + -10;
            goto joined_r0x00ad7504;
          }
        }
      }
      ppppplVar6 = (long *****)0x0;
joined_r0x00ad7504:
      if (local_b0 != (long ******)0x0) {
        (*(code *)local_b0[9][3])();
      }
    }
    local_b0 = (long ******)0x0;
    if (local_b8 != 0) {
      (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
      local_b8 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    if (ppppplVar6 == (long *****)0x0) {
      return;
    }
    local_b0 = (long ******)&PTR_LAB_026341f8;
    local_a8 = (long *****)param_2;
    local_a0 = param_3;
    local_90[0] = &local_b0;
    FUN_00c68760(ppppplVar6,&local_b0);
    ppppppplVar5 = local_90[0];
    if (&local_b0 == local_90[0]) {
      ppppplVar6 = (*local_90[0])[4];
    }
    else {
      if (local_90[0] == (long *******)0x0) {
        return;
      }
      ppppplVar6 = (*local_90[0])[5];
    }
  }
  else {
    if (*(int *)(param_1 + 0x4d0) != 2) {
      return;
    }
    lVar2 = FUN_00ad6c60(param_1);
    if (lVar2 == 0) {
      return;
    }
    local_90[0] = (long *******)CONCAT44(local_90[0]._4_4_,*param_3);
    local_b0 = (long ******)&LAB_00ada690;
    local_a8 = (long *****)FUN_00ada6a0;
    local_a0 = (undefined4 *)&LAB_00ada6b0;
    local_98 = &LAB_00ada6c0;
    FUN_0105dbc0(lVar2,param_2,&local_b0);
    ppppplVar6 = local_a8;
    if (local_a8 == (long *****)0x0) {
      return;
    }
    local_a0 = (undefined4 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (long ******)0x0;
    local_a8 = (long *****)0x0;
    ppppppplVar5 = (long *******)local_90;
  }
  (*(code *)ppppplVar6)(ppppppplVar5);
  return;
}


