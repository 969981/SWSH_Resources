/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01480da0; name: FUN_01480da0
 */


void FUN_01480da0(long *param_1,long *param_2,long param_3)

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
  if (((*PTR_DAT_0272a008 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0272a008), iVar1 != 0))
  {
    uVar6 = FUN_008a4980();
    *(undefined8 *)PTR_DAT_0272a010 = uVar6;
    __cxa_guard_release(PTR_DAT_0272a008);
  }
  do {
    lVar5 = param_3;
    if (puVar2 == (undefined8 *)PTR_DAT_0272a010) goto joined_r0x01480e88;
    puVar2 = (undefined8 *)*puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  lVar5 = 0;
joined_r0x01480e88:
  if (param_3 == 0) goto LAB_014811c4;
  switch(*(undefined4 *)(lVar5 + 0x7c)) {
  case 0:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) {
LAB_014811c4:
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
          goto LAB_01480fa0;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_01480fa0:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_014811c4;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01483fe0(&local_38,uVar6,&local_48,&local_50);
    break;
  default:
    goto switchD_01480e28_caseD_1;
  case 2:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) goto LAB_014811c4;
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar2)(puVar2);
      lVar4 = FUN_01481a10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar2 = puVar2 + -10;
          goto LAB_01481108;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_01481108:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_014811c4;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01483e90(&local_38,uVar6,&local_48,&local_50);
    break;
  case 3:
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    lVar5 = local_38;
    if (local_38 == 0) goto LAB_014811c4;
    puVar2 = *(undefined8 **)(local_38 + 0x60);
    if (puVar2 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar2)(puVar2);
      lVar4 = FUN_01481a10();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar2 = puVar2 + -10;
          goto LAB_0148101c;
        }
      }
      puVar2 = (undefined8 *)0x0;
    }
LAB_0148101c:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar2 == (undefined8 *)0x0) goto LAB_014811c4;
    *(undefined4 *)(puVar2 + 0xe) = 1;
    uVar6 = FUN_00ff5cf0(param_2);
    (**(code **)(*param_2 + 0x10))(&local_48,param_2);
    (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
    local_50 = local_38;
    lVar5 = FUN_01484520(&local_38,uVar6,&local_48,&local_50);
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
switchD_01480e28_caseD_1:
  return;
}


