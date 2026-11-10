/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c18a0; name: FUN_014c18a0
 */


void FUN_014c18a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  puVar1 = PTR_DAT_02710860;
  plVar8 = *(long **)(param_1 + 0x1b0);
  local_70[0] = 0x80000000800;
  local_70[1] = 0x2080000000800;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x190c0,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_014c47d0(lVar4,*(undefined8 *)(param_1 + 0x1b0),local_70);
    *(long **)(lVar4 + 8) = plVar8;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x190c0;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x260) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x260) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x260) = 0;
    }
    *(long *)(param_1 + 0x260) = lVar4;
    plVar8 = *(long **)(param_1 + 0x1b0);
    local_70[0] = 0x40000000400;
    local_70[1] = 0x2080000000400;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar8;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      lVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,0x190c0,0x10);
      if (lVar4 == 0) {
        (**(code **)(*plVar8 + 0xb8))(plVar8);
      }
      FUN_014c47d0(lVar4,*(undefined8 *)(param_1 + 0x1b0),local_70);
      *(long **)(lVar4 + 8) = plVar8;
      *(long *)(lVar4 + 0x10) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 0x190c0;
      *(undefined8 *)(lVar4 + 0x20) = 0x10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x268) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x268) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x268) = 0;
      }
      *(long *)(param_1 + 0x268) = lVar4;
      local_70[0] = -0x509938b379f91e23;
      FUN_014c2280(param_1,0,0,local_70);
      local_70[0] = -0x509947b379f937a0;
      FUN_014c2280(param_1,0,1,local_70);
      local_70[0] = -0x509939b379f91fd6;
      FUN_014c2280(param_1,0,2,local_70);
      local_70[0] = -0x509941b379f92d6e;
      FUN_014c2280(param_1,0,3,local_70);
      local_70[0] = -0x509936b379f91abd;
      FUN_014c2280(param_1,0,4,local_70);
      local_70[0] = 0x125a3c07bd8c1544;
      FUN_014c2280(param_1,1,0,local_70);
      local_70[0] = 0x125a3307bd8c05f9;
      FUN_014c2280(param_1,1,1,local_70);
      local_70[0] = 0x125a3d07bd8c16f7;
      FUN_014c2280(param_1,1,2,local_70);
      local_70[0] = 0x125a3507bd8c095f;
      FUN_014c2280(param_1,1,3,local_70);
      local_70[0] = 0x125a4207bd8c1f76;
      FUN_014c2280(param_1,1,4,local_70);
      FUN_014c4d10(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x1b0));
      FUN_014c4d10(*(undefined8 *)(param_1 + 0x268),*(undefined8 *)(param_1 + 0x1b0));
      uVar7 = 0;
      plVar8 = (long *)(param_1 + 0x1d0);
      do {
        lVar3 = *(long *)(param_1 + 0x260);
        if (lVar3 == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
        }
        else {
          plVar10 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        lVar4 = FUN_014c3e70(local_70,uVar9);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (plVar8[-2] != 0) {
          (**(code **)(*(long *)(plVar8[-2] + 0x48) + 0x18))();
          plVar8[-2] = 0;
        }
        plVar8[-2] = lVar4;
        local_70[0] = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_014c4670(lVar4,local_70);
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
          local_70[0] = 0;
        }
        FUN_014c46d0(plVar8[-2],uVar7 & 0xffffffff,0x20,0x3f);
        if (lVar3 == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
        }
        else {
          plVar10 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        lVar4 = FUN_014c3e70(local_70,uVar9);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (plVar8[-1] != 0) {
          (**(code **)(*(long *)(plVar8[-1] + 0x48) + 0x18))();
          plVar8[-1] = 0;
        }
        plVar8[-1] = lVar4;
        local_70[0] = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_014c4670(lVar4,local_70);
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
          local_70[0] = 0;
        }
        FUN_014c46d0(plVar8[-1],uVar7 & 0xffffffff,0x2a,0x3f);
        if (lVar3 == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
        }
        else {
          plVar10 = (long *)(lVar3 + 0x48);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        lVar4 = FUN_014c3e70(local_70,uVar9);
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        *plVar8 = lVar4;
        local_70[0] = lVar3;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        FUN_014c4670(lVar4,local_70);
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
          local_70[0] = 0;
        }
        FUN_014c46d0(*plVar8,uVar7 & 0xffffffff,0x36,0x3f);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        }
        lVar4 = *(long *)(param_1 + 0x268);
        if (lVar4 == 0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
        }
        else {
          plVar10 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          uVar9 = *(undefined8 *)(param_1 + 0x1b8);
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        lVar5 = FUN_014c3e70(local_70,uVar9);
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        if (plVar8[1] != 0) {
          (**(code **)(*(long *)(plVar8[1] + 0x48) + 0x18))();
          plVar8[1] = 0;
        }
        plVar8[1] = lVar5;
        local_70[0] = lVar4;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        }
        FUN_014c4670(lVar5,local_70);
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
          local_70[0] = 0;
        }
        FUN_014c46d0(plVar8[1],uVar7 & 0xffffffff,100,0x3f);
        if (lVar4 != 0) {
          plVar10 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar10 + 0x18))(plVar10);
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
        }
        puVar2 = PTR_DAT_02710820;
        puVar1 = PTR_DAT_02710470;
        uVar7 = uVar7 + 1;
        plVar8 = plVar8 + 4;
      } while (uVar7 != 5);
      uVar6 = *(undefined8 *)PTR_DAT_02710470;
      uVar9 = FUN_014c47c0(*(undefined8 *)(*(long *)PTR_DAT_02710820 + 0x1c8));
      FUN_0010d170(&local_78,"ScFontB");
      FUN_00782bb0(uVar6,uVar9,&local_78);
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      uVar6 = *(undefined8 *)puVar1;
      uVar9 = FUN_014c47c0(*(undefined8 *)(*(long *)puVar2 + 0x1c0));
      FUN_0010d170(&local_80,"system32_jpn.fcpx");
      FUN_00782bb0(uVar6,uVar9,&local_80);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      uVar6 = *(undefined8 *)puVar1;
      uVar9 = FUN_014c47c0(*(undefined8 *)(*(long *)puVar2 + 0x1c8));
      FUN_0010d170(&local_88,"system42_jpn.fcpx");
      FUN_00782bb0(uVar6,uVar9,&local_88);
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      uVar6 = *(undefined8 *)puVar1;
      uVar9 = FUN_014c47c0(*(undefined8 *)(*(long *)puVar2 + 0x1d0));
      FUN_0010d170(&local_90,"system54_jpn.fcpx");
      FUN_00782bb0(uVar6,uVar9,&local_90);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      uVar6 = *(undefined8 *)puVar1;
      uVar9 = FUN_014c47c0(*(undefined8 *)(*(long *)puVar2 + 0x1d8));
      FUN_0010d170(&local_98,"system_huge_jpn.fcpx");
      FUN_00782bb0(uVar6,uVar9,&local_98);
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


