/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffba40; name: FUN_00ffba40
 */


void FUN_00ffba40(long param_1)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_68;
  
  puVar1 = PTR_DAT_02710788;
  if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  plVar5 = *(long **)(param_1 + 0x10);
  FUN_00d99d50(&local_68,*(undefined8 *)PTR_DAT_02710788,1,param_1 + 0x28,0,plVar5,0);
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  lVar3 = local_68;
  *(long *)(param_1 + 0xa8) = local_68;
  if (local_68 != 0) {
    plVar6 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0xb0) != 0) || (*(long *)(param_1 + 0x130) != 0)) {
      FUN_006e1e70(lVar3,param_1 + 0xa0,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined1 *)(param_1 + 0x491) = 1;
    FUN_00ffe4e0(&local_68,*(undefined8 *)puVar1,1,param_1 + 0x58,0,plVar5,0);
    if (*(long *)(param_1 + 0x2b8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2b8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x2b8) = 0;
    }
    *(long *)(param_1 + 0x2b8) = local_68;
    if (local_68 != 0) {
      plVar6 = (long *)(local_68 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((*(long *)(param_1 + 0x2c0) != 0) || (*(long *)(param_1 + 0x340) != 0)) {
        FUN_006e1e70(local_68,param_1 + 0x2b0,1);
      }
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if (*(uint *)(param_1 + 0x8c) == 0) {
    if (*(char *)(param_1 + 0x94) != '\0') {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ffc2fc;
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x180,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_016a7120(lVar4,plVar5);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x180;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x438) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x438) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x438) = 0;
      }
      *(long *)(param_1 + 0x438) = lVar4;
      FUN_016a7560(lVar4,0);
    }
    if (*(char *)(param_1 + 0x95) != '\0') {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ffc2fc;
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x180,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_016a6780(lVar4,plVar5);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x180;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x430) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x430) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x430) = 0;
      }
      *(long *)(param_1 + 0x430) = lVar4;
      FUN_016a6840(lVar4,0);
    }
    if (*(char *)(param_1 + 0x96) != '\0') {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ffc2fc;
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x180,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar5 + 0xb8))(plVar5);
      }
      FUN_0167a340(lVar4,plVar5);
      *(long **)(lVar4 + 8) = plVar5;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x180;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x440) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x440) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x440) = 0;
      }
      *(long *)(param_1 + 0x440) = lVar4;
      FUN_0167a400(lVar4,0);
    }
    if (*(uint *)(param_1 + 0x98) == 0) {
      if (*(uint *)(param_1 + 0x9c) == 0) {
        if (*(int *)(param_1 + 0x90) != 0) {
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_00ffc2fc;
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,0x1b0,0x10);
          if (lVar4 == 0) {
            (**(code **)(*plVar5 + 0xb8))(plVar5);
          }
          FUN_0168dde0(lVar4,plVar5,*(undefined4 *)(param_1 + 0x90));
          *(long **)(lVar4 + 8) = plVar5;
          *(long *)(lVar4 + 0x10) = lVar4;
          *(undefined8 *)(lVar4 + 0x18) = 0x1b0;
          *(undefined8 *)(lVar4 + 0x20) = 0x10;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          if (lVar4 != 0) {
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x428) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x428) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x428) = 0;
          }
          *(long *)(param_1 + 0x428) = lVar4;
          FUN_0168e020(lVar4,0);
        }
        return;
      }
      pvVar2 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,(ulong)*(uint *)(param_1 + 0x9c) * 0x3d0,0x10);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
        memset(pvVar2,0,0x3d0);
      }
    }
    else {
      pvVar2 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,(ulong)*(uint *)(param_1 + 0x98) * 0x3d0,0x10);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
        memset(pvVar2,0,0x3d0);
      }
    }
  }
  else {
    pvVar2 = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,(ulong)*(uint *)(param_1 + 0x8c) * 0x3e0,0x10);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(pvVar2,0,0x3e0);
    }
  }
LAB_00ffc2fc:
                    /* WARNING: Subroutine does not return */
  abort();
}


