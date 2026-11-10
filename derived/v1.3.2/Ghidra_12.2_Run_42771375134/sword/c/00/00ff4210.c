/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff4210; name: FUN_00ff4210
 */


undefined8 FUN_00ff4210(int *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long *plVar11;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined4 local_98 [2];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  puVar2 = PTR_DAT_02710860;
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  plVar11 = *(long **)(param_1 + 4);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
    if (lVar6 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_0077d050(lVar6,0x80);
    *(long **)(lVar6 + 8) = plVar11;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x80;
    *(undefined8 *)(lVar6 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar11 = *(long **)(param_1 + 4);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar11;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
      }
      FUN_0077d050(lVar7,0x80);
      *(long **)(lVar7 + 8) = plVar11;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x80;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      lVar5 = *(long *)(*(long *)(param_1 + 2) + 0x60);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      bVar3 = (param_3 & 1) == 0;
      local_58 = 0x543056c1f5b41f54;
      if (bVar3) {
        local_58 = 0x543057c1f5b42107;
      }
      uVar9 = 0x3e;
      if (bVar3) {
        uVar9 = 0x3a;
      }
      FUN_0077eb10(lVar5,&local_58,lVar6);
      local_108 = 0x543058c1f5b422ba;
      FUN_0077eb10(lVar5,&local_108,lVar7);
      local_98[0] = uVar9;
      local_90 = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      local_88 = *(undefined8 *)(param_1 + 4);
      local_80 = 0xb9e4e56c5c7aa74f;
      uStack_78 = 0xb9e4e36c5c7aa3e9;
      local_70 = 0xcbf29ce484222645;
      local_68 = 2;
      FUN_00ff4df0(&local_108);
      local_108._4_4_ = 4;
      local_e8 = 0;
      iVar4 = FUN_008d3750();
      uVar1 = iVar4 - 1;
      if (((uVar1 & 0xff) < 10) && ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
        uVar10 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar1 & 0xff) << 2;
        local_108._0_4_ = *(undefined4 *)(&DAT_021626c0 + uVar10);
        local_f0 = *(undefined4 *)(&DAT_021626f0 + uVar10);
        uStack_ec = param_3 & 1;
      }
      local_100 = FUN_0077d470(lVar6);
      if ((param_3 & 1) == 0) {
        local_f8 = FUN_0077d470(lVar7);
      }
      uStack_b0 = FUN_0077d470(*param_2);
      local_c0 = &LAB_00ff0c20;
      local_b8 = local_98;
      FUN_00ff04b0(&local_110,*(undefined8 *)(param_1 + 4));
      uVar8 = FUN_00ff4e20(*param_2,*(undefined8 *)(param_1 + 4),&local_108);
      if (local_110 == 0) {
        FUN_006d0420(0);
      }
      else {
        plVar11 = (long *)(local_110 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        FUN_006d0420(local_110);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        (**(code **)(*plVar11 + 0x18))(plVar11);
        local_110 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


