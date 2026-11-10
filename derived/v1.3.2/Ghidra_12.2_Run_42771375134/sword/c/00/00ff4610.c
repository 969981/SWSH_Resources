/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff4610; name: FUN_00ff4610
 */


undefined8 FUN_00ff4610(int *param_1,int *param_2)

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
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_78;
  
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
    FUN_0077d050(lVar7,0x40);
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
      local_d0 = 0x1c2a25cccc1a7e7a;
      FUN_0077eb10(lVar6,&local_d0,lVar7);
      FUN_00ff4df0(&local_d0);
      local_d0 = CONCAT44(local_d0._4_4_,1);
      local_b0 = 0;
      local_b8 = 0x300000003;
      local_c8 = FUN_0077d470(lVar7);
      local_78 = FUN_0077d470(lVar9);
      FUN_00ff04b0(&local_d8,*(undefined8 *)(param_1 + 4));
      uVar10 = FUN_00ff4e20(lVar9,*(undefined8 *)(param_1 + 4),&local_d0);
      lVar8 = local_d8;
      if (local_d8 == 0) {
        FUN_006d0420(0);
      }
      else {
        plVar13 = (long *)(local_d8 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_006d0420(lVar8);
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if ((param_2 != (int *)0x0) && ((int)uVar10 == 0)) {
        if (lVar9 == 0) {
          *param_2 = 0;
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
          *param_2 = iVar5;
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        local_d8 = 0;
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


