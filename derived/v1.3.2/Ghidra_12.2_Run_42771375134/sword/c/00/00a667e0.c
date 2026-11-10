/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a667e0; name: FUN_00a667e0
 */


void FUN_00a667e0(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  local_68 = 0;
  local_70 = 0;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar6 == 0) {
    FUN_0101cb00(0,&local_70);
  }
  else {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_0101cb00(lVar6,&local_70);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  puVar5 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
  lVar7 = *(long *)(param_1 + 0x528);
  lVar6 = (long)puVar5 + (ulong)*puVar5;
  if (lVar7 == 0) {
    puVar2 = (undefined8 *)FUN_00c79e90(0,0x18);
    uVar8 = *puVar2;
    if (param_3 != 0x1000000) goto LAB_00a668cc;
LAB_00a66a14:
    uVar1 = FUN_00aa5730(param_1 + 0x3d0);
    *(uint *)(param_1 + 0xbf0) = uVar1;
    if (uVar1 == 0x10) {
LAB_00a66dc0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (0xf < uVar1) goto LAB_00a66dbc;
    uVar4 = *(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 0xb8);
    *(undefined8 *)(param_1 + 0xbe0) = 0x2c699c0b1880fff6;
    puVar11 = (undefined4 *)PTR_DAT_02710860;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00a66dbc;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00aabd10(lVar3,param_1,param_2,&local_70,lVar6);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x510;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xbd0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xbd0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xbd0) = 0;
    }
    *(long *)(param_1 + 0xbd0) = lVar3;
    FUN_00aabe60(lVar3,uVar4,0xac6b1274261ea10,0x2c699c0b1880fff6,uVar8);
    uVar1 = FUN_00aa5730(param_1 + 0x3d0);
    *(uint *)(param_1 + 0xbf4) = uVar1;
    if (uVar1 == 0x10) goto LAB_00a66dc0;
    if (0xf < uVar1) goto LAB_00a66dbc;
    uVar4 = 0x7cc9ea6a85a2496f;
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    puVar2 = (undefined8 *)FUN_00c79e90(lVar7,0x18);
    uVar8 = *puVar2;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    if (param_3 == 0x1000000) goto LAB_00a66a14;
LAB_00a668cc:
    if (param_3 != 0x800000) {
      if (param_3 != 0x10000) {
        return;
      }
      uVar1 = FUN_00aa5730(param_1 + 0x3d0);
      *(uint *)(param_1 + 0xbf0) = uVar1;
      if (uVar1 == 0x10) goto LAB_00a66dc0;
      if (0xf < uVar1) goto LAB_00a66dbc;
      uVar10 = *(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 0xb8);
      *(undefined8 *)(param_1 + 0xbe0) = 0xc157261277011d12;
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00a66dbc;
      *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
      if (lVar3 == 0) {
        (**(code **)(*param_2 + 0xb8))(param_2);
      }
      FUN_00aabd10(lVar3,param_1,param_2,&local_70,lVar6);
      *(long **)(lVar3 + 8) = param_2;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x510;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xbd0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xbd0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xbd0) = 0;
      }
      *(long *)(param_1 + 0xbd0) = lVar3;
      uVar4 = 0xc157261277011d12;
      goto LAB_00a66d94;
    }
    uVar1 = FUN_00aa5730(param_1 + 0x3d0);
    *(uint *)(param_1 + 0xbf0) = uVar1;
    if (uVar1 == 0x10) goto LAB_00a66dc0;
    if (0xf < uVar1) goto LAB_00a66dbc;
    uVar4 = *(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 0xb8);
    *(undefined8 *)(param_1 + 0xbe0) = 0xf53dee04b9cca662;
    puVar11 = (undefined4 *)PTR_DAT_02710860;
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00a66dbc;
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00aabd10(lVar3,param_1,param_2,&local_70,lVar6);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x510;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xbd0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xbd0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xbd0) = 0;
    }
    *(long *)(param_1 + 0xbd0) = lVar3;
    FUN_00aabe60(lVar3,uVar4,0xac6b1274261ea10,0xf53dee04b9cca662,uVar8);
    uVar1 = FUN_00aa5730(param_1 + 0x3d0);
    *(uint *)(param_1 + 0xbf4) = uVar1;
    if (uVar1 == 0x10) goto LAB_00a66dc0;
    if (0xf < uVar1) goto LAB_00a66dbc;
    uVar4 = 0xc157261277011d12;
  }
  uVar10 = *(undefined8 *)(param_1 + (ulong)uVar1 * 0x20 + 0xb8);
  *(undefined8 *)(param_1 + 0xbe8) = uVar4;
  lVar7 = nn::os::GetTlsValue(*puVar11);
  if (*(ulong *)(lVar7 + 0x80) < 0x10) {
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x510,0x10);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00aabd10(lVar3,param_1,param_2,&local_70,lVar6);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x510;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xbd8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xbd8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xbd8) = 0;
    }
    *(long *)(param_1 + 0xbd8) = lVar3;
LAB_00a66d94:
    FUN_00aabe60(lVar3,uVar10,0xac6b1274261ea10,uVar4,uVar8);
    return;
  }
LAB_00a66dbc:
                    /* WARNING: Subroutine does not return */
  abort();
}


