/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01173380; name: FUN_01173380
 */


void FUN_01173380(undefined1 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
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
  
  lVar6 = *(long *)PTR_DAT_02718f20;
  if (((lVar6 == 0) || (*(long *)(param_2 + 0xd8) == 0)) || (*(long *)(param_2 + 0xe0) == 0)) {
    *param_1 = 0;
  }
  else {
    local_78 = *(long **)(param_2 + 0x80);
    uVar7 = 0;
    local_88 = (long *)0x0;
    local_80 = (long *)0x0;
    local_90 = (long *)0x0;
    local_68 = 0;
    uStack_70 = 0;
    do {
      FUN_011ffb90(&local_98,lVar6,uVar7);
      plVar8 = local_90;
      if ((local_98 == 0) || (lVar10 = *(long *)(local_98 + 8), lVar10 == 0)) {
        *param_1 = 0;
        plVar9 = local_88;
        if (local_90 == (long *)0x0) {
          return;
        }
        while (plVar1 = plVar9, plVar1 != plVar8) {
          if (plVar1[-1] != 0) {
            (**(code **)(*(long *)(plVar1[-1] + 0x48) + 0x18))();
            plVar1[-1] = 0;
          }
          if (plVar1[-2] != 0) {
            (**(code **)(*(long *)(plVar1[-2] + 0x48) + 0x18))();
            plVar1[-2] = 0;
          }
          plVar9 = plVar1 + -3;
          if (plVar1[-3] != 0) {
            (**(code **)(*(long *)(plVar1[-3] + 0x48) + 0x18))();
            plVar1[-3] = 0;
          }
        }
        local_88 = plVar8;
        (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,8);
        return;
      }
      plVar8 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar9 = *(long **)(param_2 + 0x80);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_0117387c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
      if (lVar3 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_0077d050(lVar3,0x2d);
      *(undefined8 *)(lVar3 + 0x18) = 0x80;
      *(long **)(lVar3 + 8) = plVar9;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      plVar9 = *(long **)(param_2 + 0x80);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_0117387c;
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9,0x80,8);
      if (lVar4 == 0) {
        (**(code **)(*plVar9 + 0xb8))(plVar9);
      }
      FUN_0077d050(lVar4,4);
      *(undefined8 *)(lVar4 + 0x18) = 0x80;
      *(long **)(lVar4 + 8) = plVar9;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x20) = 8;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      uVar5 = FUN_01524df0(lVar10);
      FUN_00cc1290(uVar5,lVar4);
      FUN_014c9030(*(undefined8 *)(param_2 + 0xf0),0,lVar10);
      FUN_014c62d0(*(undefined8 *)(param_2 + 0xf0),lVar3,*(undefined8 *)(param_2 + 0xe8));
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      plVar9 = (long *)(param_2 + 0xd8);
      if (uVar7 != 0) {
        plVar9 = (long *)(param_2 + 0xe0);
      }
      lVar10 = *plVar9;
      if ((lVar10 != 0) && ((**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(), local_b0 != 0)) {
        plVar9 = (long *)(local_b0 + 0x48);
        local_b0 = lVar10;
        (**(code **)(*plVar9 + 0x18))();
        lVar10 = local_b0;
      }
      local_b0 = lVar10;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      lVar10 = lVar3;
      if (local_a8 != 0) {
        plVar9 = (long *)(local_a8 + 0x48);
        local_a8 = lVar3;
        (**(code **)(*plVar9 + 0x18))();
        lVar10 = local_a8;
      }
      local_a8 = lVar10;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar10 = lVar4;
      if (local_a0 != 0) {
        plVar9 = (long *)(local_a0 + 0x48);
        local_a0 = lVar4;
        (**(code **)(*plVar9 + 0x18))();
        lVar10 = local_a0;
      }
      local_a0 = lVar10;
      plVar1 = local_78;
      plVar9 = local_88;
      if (local_88 == local_80) {
        FUN_00bdf4a0(&local_90,&local_b0);
      }
      else {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0117387c;
        *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar1;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        *plVar9 = local_b0;
        if (local_b0 != 0) {
          (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
        }
        plVar9[1] = local_a8;
        if (local_a8 != 0) {
          (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
        }
        plVar9[2] = local_a0;
        if (local_a0 != 0) {
          (**(code **)(*(long *)(local_a0 + 0x48) + 0x10))();
        }
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
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
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      (**(code **)(*plVar8 + 0x18))(plVar8);
      uVar7 = uVar7 + 1;
    } while (uVar7 < 2);
    *(long **)(param_1 + 0x20) = local_78;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long **)(param_1 + 8) = local_90;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(long **)(param_1 + 0x10) = local_88;
    *(long **)(param_1 + 0x18) = local_80;
    *param_1 = 1;
  }
  return;
}


