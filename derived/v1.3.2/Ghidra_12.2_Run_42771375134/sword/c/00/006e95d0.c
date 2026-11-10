/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e95d0; name: FUN_006e95d0
 */


void FUN_006e95d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if (DAT_029f00e8 == (void *)0x0) {
    if (*(char *)(param_1 + 0xad) == '\0') {
      plVar7 = *(long **)(param_1 + 8);
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      pvVar3 = (void *)(**(code **)(*plVar7 + 0x10))(plVar7,uVar8,0x1000);
      lVar6 = *(long *)(param_1 + 0x140);
      *(void **)(param_1 + 0x140) = pvVar3;
      if (lVar6 != 0) {
        (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
                  (*(long **)(param_1 + 0x148),lVar6,*(undefined8 *)(param_1 + 0x150),
                   *(undefined8 *)(param_1 + 0x158));
        pvVar3 = *(void **)(param_1 + 0x140);
      }
      *(undefined8 *)(param_1 + 0x158) = 0x1000;
      *(long **)(param_1 + 0x148) = plVar7;
      *(undefined8 *)(param_1 + 0x150) = uVar8;
      nv::InitializeGraphics(pvVar3,*(ulong *)(param_1 + 0x78));
      lVar6 = *(long *)PTR_DAT_027155c0;
      plVar7 = *(long **)(param_1 + 8);
      *(long **)(lVar6 + 0x10) = plVar7;
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(param_1 + 0x80);
      plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_1 + 0x80),8);
      *(long **)(lVar6 + 0x18) = plVar7;
      if (plVar7 == (long *)0x0) {
        (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
        plVar7 = *(long **)(lVar6 + 0x18);
      }
      FUN_00760770(plVar7,plVar7 + 0x18,*(long *)(param_1 + 0x80) + -0xc0,0);
      *(undefined1 *)(plVar7 + 0x17) = 0;
      puVar1 = PTR_DAT_02710518 + 0xe8;
      *plVar7 = (long)(PTR_DAT_02710518 + 0x10);
      plVar7[1] = (long)puVar1;
      *(long **)(lVar6 + 8) = plVar7;
      DAT_029f00e0 = plVar7;
      nv::SetGraphicsAllocator
                ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_006e9c60,
                 (_func_void_void_ptr_void_ptr *)&LAB_006e9ce0,
                 (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_006e9d20,plVar7);
    }
    else {
      DAT_029f00e8 = (void *)aligned_alloc(0x1000,*(undefined8 *)(param_1 + 0x78));
      nv::InitializeGraphics(DAT_029f00e8,*(ulong *)(param_1 + 0x78));
      nv::SetGraphicsAllocator
                ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_006e9c60,
                 (_func_void_void_ptr_void_ptr *)&LAB_006e9ce0,
                 (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_006e9d20,(void *)0x0);
      nv::SetGraphicsDevtoolsAllocator
                ((_func_void_ptr_ulong_ulong_void_ptr *)&LAB_006e9c60,
                 (_func_void_void_ptr_void_ptr *)&LAB_006e9ce0,
                 (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_006e9d20,(void *)0x0);
    }
  }
  FUN_019a5c00();
  FUN_006f2b30();
  puVar2 = PTR_DAT_027154f0;
  FUN_006e9dd0(*(undefined8 *)PTR_DAT_027154f0,0);
  puVar1 = PTR_DAT_02710860;
  uVar8 = *(undefined8 *)(param_1 + 8);
  plVar7 = *(long **)(*(long *)puVar2 + 8);
  lVar6 = *(long *)(*(long *)puVar2 + 0x10);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x288,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN_006ed7e0(lVar5,uVar8,*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c));
    *(long **)(lVar5 + 8) = plVar7;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x288;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar6 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar6 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar6 + 8) = 0;
    }
    *(long *)(lVar6 + 8) = lVar5;
    uVar8 = *(undefined8 *)(param_1 + 8);
    plVar7 = *(long **)(*(long *)puVar2 + 8);
    plVar10 = *(long **)(*(long *)puVar2 + 0x10);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x288,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_006ed7e0(lVar4,uVar8,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x5c));
      *(long **)(lVar4 + 8) = plVar7;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x288;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*plVar10 != 0) {
        (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
        *plVar10 = 0;
      }
      *plVar10 = lVar4;
      FUN_006e9dd0(*(undefined8 *)puVar2,1);
      lVar6 = *(long *)puVar2;
      plVar7 = *(long **)(lVar6 + 8);
      uVar8 = *(undefined8 *)(param_1 + 8);
      plVar10 = *(long **)(lVar6 + 0x30);
      uVar9 = **(undefined8 **)(lVar6 + 0x10);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar6 + 0x80) < 0x10) {
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar7;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,0x170,8);
        if (lVar4 == 0) {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
        }
        FUN_006ee270(lVar4,uVar8,uVar9,*(undefined8 *)(param_1 + 0x90),4);
        *(long **)(lVar4 + 8) = plVar7;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 0x170;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*plVar10 != 0) {
          (**(code **)(*(long *)(*plVar10 + 0x48) + 0x18))();
          *plVar10 = 0;
        }
        *plVar10 = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


