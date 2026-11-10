/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff1c10; name: FUN_00ff1c10
 */


undefined8 FUN_00ff1c10(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined1 *local_b0;
  undefined4 *local_a8;
  undefined8 uStack_a0;
  undefined4 local_88 [2];
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  puVar2 = PTR_DAT_02710860;
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  plVar10 = *(long **)(param_1 + 4);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar4 + 0x80) < 0x10) {
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar10 + 0x10))(plVar10,0x80,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_0077d050(lVar5,0x40);
    *(long **)(lVar5 + 8) = plVar10;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x80;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 2) + 0x60);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    plVar10 = *(long **)(param_1 + 4);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (*(ulong *)(lVar6 + 0x80) < 0x10) {
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x80,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
      }
      FUN_0077d050(lVar7,0x40);
      *(long **)(lVar7 + 8) = plVar10;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x18) = 0x80;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      local_f8 = 0xc462d626ff5efb42;
      FUN_0077eb10(lVar4,&local_f8,lVar5);
      local_88[0] = 0x3e;
      local_80 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      local_78 = *(undefined8 *)(param_1 + 4);
      local_70 = 0xb9e4e56c5c7aa74f;
      uStack_68 = 0xb9e4e36c5c7aa3e9;
      local_60 = 0xc462d426ff5ef7dc;
      local_58 = 0x10;
      FUN_00ff4df0(&local_f8);
      local_f8._4_4_ = 4;
      local_d8 = 0;
      iVar3 = FUN_008d3750();
      uVar1 = iVar3 - 1;
      if (((uVar1 & 0xff) < 10) && ((0x3dfU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
        uVar9 = -((ulong)(uVar1 >> 7) & 1) & 0xfffffffffffffc00 | ((ulong)uVar1 & 0xff) << 2;
        local_f8._0_4_ = *(undefined4 *)(&DAT_021626c0 + uVar9);
        local_e0 = *(undefined4 *)(&DAT_02162690 + uVar9);
        uStack_dc = 1;
      }
      local_f0 = FUN_0077d470(lVar5);
      uStack_a0 = FUN_0077d470(*param_2);
      local_b0 = &LAB_00ff0c20;
      local_a8 = local_88;
      FUN_00ff04b0(&local_48,*(undefined8 *)(param_1 + 4));
      uVar8 = FUN_00ff4e20(*param_2,*(undefined8 *)(param_1 + 4),&local_f8);
      if (local_48 == 0) {
        FUN_006d0420(0);
      }
      else {
        plVar10 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        FUN_006d0420(local_48);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        local_48 = 0;
      }
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


