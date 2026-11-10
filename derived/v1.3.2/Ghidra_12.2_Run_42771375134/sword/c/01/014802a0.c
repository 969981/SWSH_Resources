/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014802a0; name: FUN_014802a0
 */


void FUN_014802a0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_50;
  long local_48;
  long local_38;
  
  *param_1 = 0;
  puVar2 = (undefined8 *)
           (*(code *)**(undefined8 **)(param_3 + 0x50))((undefined8 *)(param_3 + 0x50));
  if (((*PTR_DAT_02729fd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02729fd8), iVar1 != 0))
  {
    uVar3 = FUN_008a4980();
    *(undefined8 *)PTR_DAT_02729fe0 = uVar3;
    __cxa_guard_release(PTR_DAT_02729fd8);
  }
  do {
    lVar4 = param_3;
    if (puVar2 == (undefined8 *)PTR_DAT_02729fe0) goto joined_r0x01480384;
    puVar2 = (undefined8 *)*puVar2;
  } while (puVar2 != (undefined8 *)0x0);
  lVar4 = 0;
joined_r0x01480384:
  if (param_3 != 0) {
    iVar1 = *(int *)(lVar4 + 0x7c);
    if (iVar1 == 0) {
      (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        puVar2 = *(undefined8 **)(local_38 + 0x60);
        if (puVar2 != (undefined8 *)0x0) {
          plVar5 = (long *)(**(code **)*puVar2)(puVar2);
          lVar6 = FUN_01481a10();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar6) {
              puVar2 = puVar2 + -10;
              goto LAB_0148052c;
            }
          }
          puVar2 = (undefined8 *)0x0;
        }
LAB_0148052c:
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar2 + 0xe) = 1;
          uVar3 = FUN_00ff5cf0(param_2);
          (**(code **)(*param_2 + 0x10))(&local_48,param_2);
          (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
          local_50 = local_38;
          lVar4 = FUN_01483fe0(&local_38,uVar3,&local_48,&local_50);
          goto joined_r0x014804b0;
        }
      }
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 5) {
          return;
        }
        uVar3 = FUN_00ff5cf0(param_2);
        (**(code **)(*param_2 + 0x10))(&local_48,param_2);
        (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
        local_50 = local_38;
        lVar4 = FUN_01483ac0(&local_38,uVar3,&local_48,&local_50);
joined_r0x014804b0:
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
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
        *param_1 = lVar4;
        return;
      }
      (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        puVar2 = *(undefined8 **)(local_38 + 0x60);
        if (puVar2 != (undefined8 *)0x0) {
          plVar5 = (long *)(**(code **)*puVar2)(puVar2);
          lVar6 = FUN_01481a10();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar6) {
              puVar2 = puVar2 + -10;
              goto LAB_01480440;
            }
          }
          puVar2 = (undefined8 *)0x0;
        }
LAB_01480440:
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        if (puVar2 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar2 + 0xe) = 1;
          uVar3 = FUN_00ff5cf0(param_2);
          (**(code **)(*param_2 + 0x10))(&local_48,param_2);
          (**(code **)(*(long *)param_2[0x59] + 0x10))(&local_38);
          local_50 = local_38;
          lVar4 = FUN_01483e90(&local_38,uVar3,&local_48,&local_50);
          goto joined_r0x014804b0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


