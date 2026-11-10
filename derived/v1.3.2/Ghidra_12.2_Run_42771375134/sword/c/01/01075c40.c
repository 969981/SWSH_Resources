/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01075c40; name: FUN_01075c40
 */


void FUN_01075c40(uint *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 *local_210;
  code *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined4 *local_1f0;
  uint *local_1e8;
  uint *puStack_1e0;
  undefined1 local_188 [4];
  undefined8 local_184;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined4 local_44;
  long local_40;
  uint local_34;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  local_34 = param_2;
  if (lVar6 == 0) {
    FUN_00c58c10(&local_40,0);
  }
  else {
    plVar7 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_00c58c10(&local_40,lVar6);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  uVar2 = local_34;
  local_44 = FUN_0106ff60(local_34);
  if (uVar2 < 3) {
    local_188[0] = 0;
    local_184 = 0x3ff00000000;
    local_150 = 0;
    local_1f0 = &local_44;
    local_160 = 0;
    uStack_158 = 0;
    local_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_210 = &LAB_01077650;
    local_208 = FUN_01077790;
    local_200 = &LAB_010777a0;
    local_1f8 = &LAB_010777b0;
    local_1e8 = param_1;
    uVar4 = FUN_00cc4600(local_40,*(undefined1 *)
                                   (*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58),&local_210
                         ,local_188);
    pcVar1 = local_208;
    if (local_208 != (code *)0x0) {
      local_200 = (undefined1 *)0x0;
      local_1f8 = (undefined1 *)0x0;
      local_210 = (undefined1 *)0x0;
      local_208 = (code *)0x0;
      (*pcVar1)(&local_1f0);
    }
    if ((uVar4 & 1) != 0) {
      FUN_00d83ac0(*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1f8),local_44,local_178);
      uVar4 = FUN_0106f400(*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x60),1);
      if ((uVar4 & 1) != 0) {
        lVar6 = FUN_0106ff80(1,local_188);
        *(bool *)(param_1 + 0x1a4) = lVar6 == -0x2ff60d54f2674d29;
      }
      if ((*(char *)(*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58) == '\x01') &&
         (local_34 == 0)) {
        uVar5 = FUN_0106ff80(1,local_188);
        bVar3 = FUN_0106f510(1,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58)
                            );
        *(undefined8 *)(param_1 + (ulong)bVar3 * 2 + 0x198) = uVar5;
      }
    }
  }
  else {
    if (uVar2 - 3 < 2) {
      local_188[0] = 0;
      local_184 = 0x3ff00000000;
      local_150 = 0;
      local_1f0 = &local_44;
      local_160 = 0;
      uStack_158 = 0;
      local_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_210 = &LAB_010777c0;
      local_208 = FUN_01077890;
      local_200 = &LAB_010778a0;
      local_1f8 = &LAB_010778b0;
      local_1e8 = param_1;
      uVar4 = FUN_00cc4600(local_40,*(undefined1 *)
                                     (*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58),
                           &local_210,local_188);
      pcVar1 = local_208;
      if (local_208 != (code *)0x0) {
        local_200 = (undefined1 *)0x0;
        local_1f8 = (undefined1 *)0x0;
        local_210 = (undefined1 *)0x0;
        local_208 = (code *)0x0;
        (*pcVar1)(&local_1f0);
      }
      if ((uVar4 & 1) == 0) goto joined_r0x01075efc;
      lVar6 = *(long *)(param_1 + 0x174);
    }
    else {
      if (uVar2 == 7) {
        bVar3 = FUN_0106f510(7,*(undefined1 *)(*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58)
                            );
        if (*(long *)(param_1 + (ulong)bVar3 * 2 + 0x198) == 0x67c6affac77e74ab) {
          FUN_00d83b20(*(undefined8 *)(*(long *)(param_1 + 0x174) + 0x1f8),5);
          goto joined_r0x01075efc;
        }
      }
      local_188[0] = 0;
      local_184 = 0x3ff00000000;
      local_150 = 0;
      local_1f0 = &local_44;
      local_160 = 0;
      uStack_158 = 0;
      local_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_1e8 = &local_34;
      local_210 = &LAB_010778c0;
      local_208 = FUN_01077950;
      local_200 = &LAB_01077960;
      local_1f8 = &LAB_01077980;
      puStack_1e0 = param_1;
      uVar4 = FUN_00cc4600(local_40,*(undefined1 *)
                                     (*(long *)(*(long *)(param_1 + 0x174) + 0x1f8) + 0x58),
                           &local_210,local_188);
      pcVar1 = local_208;
      if (local_208 != (code *)0x0) {
        local_200 = (undefined1 *)0x0;
        local_1f8 = (undefined1 *)0x0;
        local_210 = (undefined1 *)0x0;
        local_208 = (code *)0x0;
        (*pcVar1)(&local_1f0);
      }
      if ((uVar4 & 1) == 0) goto joined_r0x01075efc;
      lVar6 = *(long *)(param_1 + 0x174);
    }
    FUN_00d83ac0(*(undefined8 *)(lVar6 + 0x1f8),local_44,local_178);
  }
joined_r0x01075efc:
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


