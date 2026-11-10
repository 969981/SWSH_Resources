/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c75950; name: FUN_00c75950
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00c75950(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long local_38;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  plVar4 = param_2 + 1;
  *plVar4 = 0;
  *(undefined2 *)(param_2 + 4) = 0x101;
  *(undefined1 *)((long)param_2 + 0x22) = 1;
  param_2[2] = 0;
  param_2[3] = 0;
  (**(code **)(*param_1 + 0x98))(&local_38,param_1);
  if (*param_2 != 0) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = local_38;
  (**(code **)(*param_1 + 0xa8))(&local_38,param_1);
  if (local_38 == 0) {
    *plVar4 = 0;
  }
  else {
    lVar2 = *(long *)(local_38 + 0x60);
    if (lVar2 == 0) {
      *plVar4 = 0;
    }
    else {
      uVar3 = FUN_00a8cbe0(lVar2);
      lVar2 = lVar2 + -0x50;
      if ((uVar3 & 1) == 0) {
        lVar2 = 0;
      }
      *plVar4 = lVar2;
      if (local_38 == 0) goto LAB_00c75a3c;
    }
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
LAB_00c75a3c:
  (**(code **)(*param_1 + 0xd0))(&local_38,param_1);
  if (local_38 != 0) {
    iVar1 = *(int *)(local_38 + 0x54);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xd0))(&local_38,param_1);
      if (local_38 == 0) {
        param_2[2] = 0;
      }
      else {
        puVar6 = *(undefined8 **)(local_38 + 0x60);
        if (puVar6 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar6)(puVar6);
          if (((*PTR_DAT_027150a8 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar1 != 0)) {
            uVar5 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_027150b0 = uVar5;
            __cxa_guard_release(PTR_DAT_027150a8);
          }
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)PTR_DAT_027150b0) {
              param_2[2] = (long)(puVar6 + -10);
              goto joined_r0x00c75be8;
            }
          }
        }
        param_2[2] = 0;
joined_r0x00c75be8:
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0xd8))(&local_38,param_1);
  if (local_38 != 0) {
    iVar1 = *(int *)(local_38 + 0x54);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0xd8))(&local_38,param_1);
      if (local_38 == 0) {
        param_2[3] = 0;
      }
      else {
        puVar6 = *(undefined8 **)(local_38 + 0x60);
        if (puVar6 != (undefined8 *)0x0) {
          plVar4 = (long *)(**(code **)*puVar6)(puVar6);
          if (((*PTR_DAT_0271c1e8 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_0271c1e8), iVar1 != 0)) {
            uVar5 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_0271c1f0 = uVar5;
            __cxa_guard_release(PTR_DAT_0271c1e8);
          }
          for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
            if (plVar4 == (long *)PTR_DAT_0271c1f0) {
              param_2[3] = (long)(puVar6 + -10);
              goto joined_r0x00c75bfc;
            }
          }
        }
        param_2[3] = 0;
joined_r0x00c75bfc:
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
      }
    }
  }
  return;
}


