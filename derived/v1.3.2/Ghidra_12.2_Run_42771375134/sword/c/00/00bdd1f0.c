/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdd1f0; name: FUN_00bdd1f0
 */


void FUN_00bdd1f0(undefined1 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long local_c8;
  long local_c0;
  uint local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar9 = *(long *)PTR_DAT_027185f8;
  if (((lVar9 != 0) && (iVar2 = FUN_0120e820(lVar9), iVar2 == 2)) &&
     (lVar7 = *(long *)PTR_DAT_02718f20, lVar7 != 0)) {
    local_b4 = FUN_0120e610(lVar9);
    local_78 = *(long **)(param_2 + 8);
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_90 = (long *)0x0;
    local_68 = 0;
    uStack_70 = 0;
    local_b4 = local_b4 & 0xff;
    if (local_b4 != 0xfd) {
      local_c0 = param_2 + 0x78;
      uVar8 = 0;
      local_c8 = param_2 + 0x80;
      while( true ) {
        FUN_011ffb90(&local_98,lVar7,uVar8);
        plVar10 = local_90;
        if ((local_98 == 0) || (lVar9 = *(long *)(local_98 + 8), lVar9 == 0)) {
          *param_1 = 0;
          plVar11 = local_88;
          if (local_90 == (long *)0x0) {
            return;
          }
          while (plVar1 = plVar11, plVar1 != plVar10) {
            if (plVar1[-1] != 0) {
              (**(code **)(*(long *)(plVar1[-1] + 0x48) + 0x18))();
              plVar1[-1] = 0;
            }
            if (plVar1[-2] != 0) {
              (**(code **)(*(long *)(plVar1[-2] + 0x48) + 0x18))();
              plVar1[-2] = 0;
            }
            plVar11 = plVar1 + -3;
            if (plVar1[-3] != 0) {
              (**(code **)(*(long *)(plVar1[-3] + 0x48) + 0x18))();
              plVar1[-3] = 0;
            }
          }
          local_88 = plVar10;
          (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,8);
          return;
        }
        plVar10 = (long *)(lVar9 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        plVar11 = *(long **)(param_2 + 8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) break;
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar11;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
        if (lVar4 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
        FUN_0077d050(lVar4,4);
        *(undefined8 *)(lVar4 + 0x18) = 0x80;
        *(long **)(lVar4 + 8) = plVar11;
        *(long *)(lVar4 + 0x10) = lVar4;
        *(undefined8 *)(lVar4 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        uVar5 = FUN_01524df0(lVar9);
        FUN_00cc1290(uVar5,lVar4);
        plVar11 = *(long **)(param_2 + 8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar3 + 0x80)) break;
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar11;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
        if (lVar6 == 0) {
          (**(code **)(*plVar11 + 0xb8))(plVar11);
        }
        FUN_0077d050(lVar6,0x2d);
        *(undefined8 *)(lVar6 + 0x18) = 0x80;
        *(long **)(lVar6 + 8) = plVar11;
        *(long *)(lVar6 + 0x10) = lVar6;
        *(undefined8 *)(lVar6 + 0x20) = 8;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        FUN_014c9030(*(undefined8 *)(param_2 + 0xb8),0,lVar9);
        FUN_014c62d0(*(undefined8 *)(param_2 + 0xb8),lVar6,*(undefined8 *)(param_2 + 0xb0));
        local_b0 = 0;
        plVar11 = &local_c0;
        if (local_b4 != uVar8) {
          plVar11 = &local_c8;
        }
        local_a8 = 0;
        local_a0 = 0;
        lVar9 = *(long *)*plVar11;
        if ((lVar9 != 0) && ((**(code **)(*(long *)(lVar9 + 0x48) + 0x10))(), local_b0 != 0)) {
          plVar11 = (long *)(local_b0 + 0x48);
          local_b0 = lVar9;
          (**(code **)(*plVar11 + 0x18))();
          lVar9 = local_b0;
        }
        local_b0 = lVar9;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar9 = lVar6;
        if (local_a8 != 0) {
          plVar11 = (long *)(local_a8 + 0x48);
          local_a8 = lVar6;
          (**(code **)(*plVar11 + 0x18))();
          lVar9 = local_a8;
        }
        local_a8 = lVar9;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        lVar9 = lVar4;
        if (local_a0 != 0) {
          plVar11 = (long *)(local_a0 + 0x48);
          local_a0 = lVar4;
          (**(code **)(*plVar11 + 0x18))();
          lVar9 = local_a0;
        }
        local_a0 = lVar9;
        plVar1 = local_78;
        plVar11 = local_88;
        if (local_88 == local_80) {
          FUN_00bdf4a0(&local_90,&local_b0);
        }
        else {
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar9 + 0x80)) break;
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar1;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          *plVar11 = local_b0;
          if (local_b0 != 0) {
            (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
          }
          plVar11[1] = local_a8;
          if (local_a8 != 0) {
            (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
          }
          plVar11[2] = local_a0;
          if (local_a0 != 0) {
            (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
          }
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          local_88 = local_88 + 3;
        }
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
          local_a0 = 0;
        }
        if (local_a8 != 0) {
          (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
          local_a8 = 0;
        }
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
          local_b0 = 0;
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        uVar8 = uVar8 + 1;
        if (1 < uVar8) {
          *(long **)(param_1 + 0x20) = local_78;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(long **)(param_1 + 0x10) = local_88;
          *(long **)(param_1 + 0x18) = local_80;
          *(long **)(param_1 + 8) = local_90;
          *param_1 = 1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  *param_1 = 0;
  return;
}


