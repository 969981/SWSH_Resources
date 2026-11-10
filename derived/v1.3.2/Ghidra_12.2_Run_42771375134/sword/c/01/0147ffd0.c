/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0147ffd0; name: FUN_0147ffd0
 */


void FUN_0147ffd0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  long local_40;
  long local_38;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)
           (*(code *)**(undefined8 **)(param_3 + 0x50))((undefined8 *)(param_3 + 0x50));
  if (((*PTR_DAT_02729fc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02729fc8), iVar1 != 0))
  {
    uVar4 = FUN_008a4980();
    *(undefined8 *)PTR_DAT_02729fd0 = uVar4;
    __cxa_guard_release(PTR_DAT_02729fc8);
  }
  do {
    lVar3 = param_3;
    if (puVar2 == (undefined8 *)PTR_DAT_02729fd0) goto joined_r0x01480040;
    puVar2 = (undefined8 *)*puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  lVar3 = 0;
joined_r0x01480040:
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  switch(*(undefined4 *)(lVar3 + 0x80)) {
  case 1:
    uVar4 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_01484280(&local_38,uVar4,&local_40,&local_48);
    break;
  default:
    goto switchD_01480064_caseD_2;
  case 3:
    uVar4 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_01484520(&local_38,uVar4,&local_40,&local_48);
    break;
  case 4:
    uVar4 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_014843d0(&local_38,uVar4,&local_40,&local_48);
    break;
  case 5:
    uVar4 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_40,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_48 = local_38;
    lVar3 = FUN_01483ac0(&local_38,uVar4,&local_40,&local_48);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar3;
switchD_01480064_caseD_2:
  return;
}


