/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad7f80; name: FUN_00ad7f80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ad7f80(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *local_68;
  long local_60;
  long local_58 [3];
  
  uVar3 = (**(code **)(*param_1 + 400))();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((int)param_1[0x9a] != 2) {
    return;
  }
  if (param_1[0xab] != 0) {
    return;
  }
  if ((1 < (int)param_1[0x9e] - 0x301U) && (1 < (int)param_1[0x9e] - 0x32U)) {
    return;
  }
  if (*(uint *)(param_1 + 0xb4) < 0x10) {
    lVar6 = param_1[0x78];
    plVar7 = *(long **)(lVar6 + (ulong)*(uint *)(param_1 + 0xb4) * 0x20 + 0xb8);
    local_58[1] = 0;
    local_58[2] = 0;
    FUN_00a66750(lVar6,local_58 + 1);
    puVar8 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
    uVar1 = *puVar8;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar4 + 0x80) < 0x10) {
      *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar7;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x710,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_00adae20(lVar5,lVar6,plVar7,local_58 + 1,(long)puVar8 + (ulong)uVar1);
      *(long **)(lVar5 + 8) = plVar7;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x710;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (param_1[0xab] != 0) {
        (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
        param_1[0xab] = 0;
      }
      param_1[0xab] = lVar5;
      FUN_00adaee0(lVar5,lVar6 + 0x810,0,0);
      lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      lVar6 = *(long *)(param_1[0xab] + 0x5d0);
      if (lVar6 == 0) {
        local_58[0] = 0;
      }
      else {
        plVar7 = (long *)(lVar6 + 0x48);
        (**(code **)(*plVar7 + 0x10))(plVar7);
        local_58[0] = lVar6;
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
      FUN_01066f60(lVar4,local_58);
      if (local_58[0] != 0) {
        (**(code **)(*(long *)(local_58[0] + 0x48) + 0x18))();
        local_58[0] = 0;
      }
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
      }
      local_60 = param_1[0xab];
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x10))();
      }
      local_68 = param_1;
      (**(code **)(param_1[9] + 0x10))();
      FUN_00a90a30(&local_60,&local_68);
      if (local_68 != (long *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
        local_68 = (long *)0x0;
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      }
      iVar2 = (int)param_1[0x9e];
      if (iVar2 < 0x5e) {
        if (iVar2 == 0x32) {
          uVar9 = _DAT_01d4b210;
          uVar10 = _UNK_01d4b218;
        }
        else {
          if (iVar2 != 0x33) {
            return;
          }
          uVar9 = _DAT_01d4a1a0;
          uVar10 = _UNK_01d4a1a8;
        }
      }
      else {
        if (iVar2 != 0x5e) {
          if (iVar2 == 0x301) {
            uVar9 = _DAT_01d49ee0;
            uVar10 = _UNK_01d49ee8;
            goto LAB_00ad826c;
          }
          if (iVar2 != 0x302) {
            return;
          }
        }
        uVar9 = _DAT_01d4b050;
        uVar10 = _UNK_01d4b058;
      }
LAB_00ad826c:
      lVar4 = param_1[0xab];
      *(undefined8 *)(lVar4 + 0x418) = uVar10;
      *(undefined8 *)(lVar4 + 0x410) = uVar9;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


