/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff2cb0; name: FUN_00ff2cb0
 */


undefined8 FUN_00ff2cb0(int *param_1,undefined4 param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 *local_c8;
  undefined4 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_a0 [2];
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  puVar4 = PTR_DAT_02710860;
  if ((param_1 != (int *)0x0) && (*param_1 != 0x736b6264)) {
    param_1 = (int *)0x0;
  }
  plVar13 = *(long **)(param_1 + 4);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar13;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar13 + 0x10))(plVar13,0x80,8);
    if (lVar7 == 0) {
      (**(code **)(*plVar13 + 0xb8))(plVar13);
    }
    FUN_0077d050(lVar7,0x80);
    *(long **)(lVar7 + 8) = plVar13;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x80;
    *(undefined8 *)(lVar7 + 0x20) = 8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(*(long *)(param_1 + 2) + 0x60);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    plVar13 = *(long **)(param_1 + 4);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13,0x80,8);
      if (lVar9 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_0077d050(lVar9,0x40);
      *(long **)(lVar9 + 8) = plVar13;
      *(long *)(lVar9 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x18) = 0x80;
      *(undefined8 *)(lVar9 + 0x20) = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      local_110 = 0xb47e6a6222005e8a;
      FUN_0077eb10(lVar6,&local_110,lVar7);
      local_a0[0] = 1;
      local_98 = lVar6;
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      local_90 = *(undefined8 *)(param_1 + 4);
      local_78 = 0xcbf29ce484222645;
      local_70 = 1;
      local_88 = 0xcbf29ce484222645;
      uStack_80 = 0xcbf29ce484222645;
      uStack_6c = param_2;
      FUN_00ff4df0(&local_110);
      local_110 = CONCAT44(local_110._4_4_,1);
      local_f0 = 0;
      local_f8 = 0x100000002;
      local_108 = FUN_0077d470(lVar7);
      uStack_b8 = FUN_0077d470(lVar9);
      local_c8 = &LAB_00ff3080;
      local_c0 = local_a0;
      FUN_00ff04b0(&local_118,*(undefined8 *)(param_1 + 4));
      uVar10 = FUN_00ff4e20(lVar9,*(undefined8 *)(param_1 + 4),&local_110);
      lVar8 = local_118;
      if (local_118 == 0) {
        FUN_006d0420(0);
      }
      else {
        plVar13 = (long *)(local_118 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_006d0420(lVar8);
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if ((param_3 != (int *)0x0) && ((int)uVar10 == 0)) {
        if (lVar9 == 0) {
          *param_3 = 0;
        }
        else {
          plVar13 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13);
          iVar5 = FUN_0077d480(lVar9);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            uVar14 = 0;
            iVar5 = 0;
            do {
              lVar11 = FUN_0077d470(lVar9);
              lVar1 = uVar14 * 2;
              uVar14 = uVar14 + 1;
              uVar3 = *(ushort *)(lVar11 + lVar1) - 0x30;
              uVar2 = 0;
              if (uVar3 < 10) {
                uVar2 = uVar3;
              }
              iVar5 = uVar2 + iVar5 * 10;
              uVar12 = FUN_0077d480(lVar9);
            } while (uVar14 < (uVar12 & 0xffffffff));
          }
          *param_3 = iVar5;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        local_118 = 0;
      }
      if (local_98 != 0) {
        (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
        local_98 = 0;
      }
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
      return uVar10;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


