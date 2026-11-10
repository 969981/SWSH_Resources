/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b0fc0; name: FUN_014b0fc0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_014b0fc0(long *param_1,int *param_2,undefined2 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long local_60;
  long local_58;
  undefined4 local_50;
  undefined1 local_4c;
  long local_48;
  undefined4 local_38;
  undefined2 local_34;
  
  plVar13 = &local_60;
  local_48 = *param_1;
  if (local_48 == 0) {
    uVar4 = FUN_014b1380(&local_48);
    local_38 = (undefined4)uVar4;
    local_34 = (undefined2)(uVar4 >> 0x20);
    if (param_2[1] == ((uint)(uVar4 >> 8) & 0xff)) {
      return 0;
    }
  }
  else {
    plVar14 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    uVar4 = FUN_014b1380(&local_48);
    local_38 = (undefined4)uVar4;
    local_34 = (undefined2)(uVar4 >> 0x20);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    local_48 = 0;
    if (param_2[1] == ((uint)(uVar4 >> 8) & 0xff)) {
      return 0;
    }
  }
  puVar3 = PTR_DAT_02710848;
  puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar8 = *puVar6;
  uVar10 = puVar6[1];
  do {
    uVar11 = uVar8 ^ uVar10;
    iVar9 = (int)uVar10;
    iVar7 = (int)uVar8;
    uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
    uVar8 = uVar11 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar11 << 0x10;
    uVar1 = iVar7 + iVar9 & 0x7f;
  } while (99 < uVar1);
  *puVar6 = uVar8;
  puVar6[1] = uVar10;
  if (param_2[2] <= (int)(uVar1 + 1)) {
    return 0;
  }
  if ((char)param_2[3] == '\0') {
    if ((uVar4 & 0xff) != 0) {
      if (((uint)uVar4 & 0xff) != 7) {
        iVar7 = *param_2;
        uVar1 = (uint)uVar4 & 0xff;
        if ((int)(uVar1 - iVar7) < 3) {
          puVar6 = *(ulong **)(*(long *)puVar3 + 0x98);
          uVar8 = *puVar6;
          uVar11 = puVar6[1];
          uVar10 = uVar11 ^ uVar8;
          *puVar6 = uVar10 ^ (uVar8 >> 0x28 | uVar8 << 0x18) ^ uVar10 << 0x10;
          puVar6[1] = uVar10 >> 0x1b | uVar10 << 0x25;
          puVar6 = *(ulong **)(*(long *)puVar3 + 0x98);
          uVar10 = *puVar6;
          uVar2 = puVar6[1];
          uVar12 = uVar2 ^ uVar10;
          *puVar6 = uVar12 ^ (uVar10 >> 0x28 | uVar10 << 0x18) ^ uVar12 << 0x10;
          puVar6[1] = uVar12 >> 0x1b | uVar12 << 0x25;
          if ((int)(((int)uVar11 + (int)uVar8 & 0xffU) * uVar1) <
              (int)(((int)uVar2 + (int)uVar10 & 0xffU) * iVar7)) goto LAB_014b10b8;
          local_38 = CONCAT31(local_38._1_3_,(char)uVar4 + '\x01');
        }
      }
      local_60 = *param_1;
      if (local_60 != 0) {
        plVar13 = (long *)(local_60 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_014b17f0(&local_60,&local_38);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        return 1;
      }
      puVar5 = &local_38;
      local_60 = 0;
      goto LAB_014b1200;
    }
  }
LAB_014b10b8:
  local_50._0_1_ = (undefined1)*param_2;
  local_50._1_1_ = (undefined1)param_2[1];
  local_50._2_2_ = param_3;
  local_4c = FUN_014b14c0(param_2 + 7);
  local_58 = *param_1;
  if (local_58 != 0) {
    plVar13 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_014b17f0(&local_58,&local_50);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    return 1;
  }
  plVar13 = &local_58;
  puVar5 = &local_50;
  local_58 = 0;
LAB_014b1200:
  FUN_014b17f0(plVar13,puVar5);
  return 1;
}


