/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01480600; name: FUN_01480600
 */


void FUN_01480600(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long local_50;
  long local_48;
  long local_38;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)
           (*(code *)**(undefined8 **)(param_3 + 0x50))((undefined8 *)(param_3 + 0x50));
  if (((*PTR_DAT_02729fe8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02729fe8), iVar1 != 0))
  {
    uVar6 = FUN_008a4980();
    *(undefined8 *)PTR_DAT_02729ff0 = uVar6;
    __cxa_guard_release(PTR_DAT_02729fe8);
  }
  do {
    lVar5 = param_3;
    if (puVar2 == (undefined8 *)PTR_DAT_02729ff0) goto joined_r0x014806e8;
    puVar2 = (undefined8 *)*puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  lVar5 = 0;
joined_r0x014806e8:
  if (param_3 == 0) goto LAB_01480a24;
  switch(*(undefined4 *)(lVar5 + 0x7c)) {
  case 0:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) {
LAB_01480a24:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar2)(puVar2);
      lVar4 = FUN_01481a10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar2 = puVar2 + -10;
          goto LAB_01480800;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_01480800:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_01480a24;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01483fe0(&local_38,uVar6,&local_48,&local_50);
    break;
  case 1:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) goto LAB_01480a24;
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar2)(puVar2);
      lVar4 = FUN_01481a10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar2 = puVar2 + -10;
          goto LAB_01480968;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_01480968:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_01480a24;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01484280(&local_38,uVar6,&local_48,&local_50);
    break;
  default:
    goto switchD_01480688_caseD_2;
  case 4:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) goto LAB_01480a24;
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar2)(puVar2);
      lVar4 = FUN_01481a10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar2 = puVar2 + -10;
          goto LAB_0148087c;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_0148087c:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_01480a24;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_014843d0(&local_38,uVar6,&local_48,&local_50);
    break;
  case 5:
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01483ac0(&local_38,uVar6,&local_48,&local_50);
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = lVar5;
switchD_01480688_caseD_2:
  return;
}


