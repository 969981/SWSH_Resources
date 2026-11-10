/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be0540; name: FUN_00be0540
 */


void FUN_00be0540(undefined1 *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined *puVar17;
  bool bVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined *local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  char local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  lVar19 = FUN_007a9d00();
  puVar17 = PTR_DAT_027167e8;
  local_40 = local_50;
  local_38 = 0x10;
  puVar1 = PTR_DAT_027167e8 + 0x10;
  local_50[0] = 0;
  local_58 = puVar1;
  FUN_017d05f0(&local_58,*(undefined8 *)(lVar19 + 0x10),0xffffffffffffffff);
  FUN_01864d60(auStack_78,&local_58,param_2);
  if (local_60 == '\0') {
    *param_1 = 0;
  }
  else {
    FUN_018443b0(&local_a0,auStack_78);
    uVar2 = local_98;
    *param_1 = 0;
    *(undefined **)(param_1 + 8) = puVar1;
    puVar20 = param_1 + 0x10;
    *puVar20 = 0;
    *(undefined1 **)(param_1 + 0x20) = puVar20;
    *(undefined8 *)(param_1 + 0x28) = 0x10;
    if (&local_a0 != (undefined **)(param_1 + 8)) {
      local_98 = 0;
      param_1[0x10] = uVar2;
      uVar2 = param_1[0x11];
      uVar3 = param_1[0x12];
      param_1[0x11] = local_97;
      uVar4 = param_1[0x13];
      uVar5 = param_1[0x14];
      uVar6 = param_1[0x15];
      uVar7 = param_1[0x16];
      param_1[0x12] = local_96;
      uVar8 = param_1[0x17];
      param_1[0x16] = local_92;
      uVar9 = param_1[0x18];
      param_1[0x17] = local_91;
      uVar10 = param_1[0x19];
      param_1[0x18] = local_90;
      uVar11 = param_1[0x1a];
      param_1[0x13] = local_95;
      param_1[0x19] = local_8f;
      uVar12 = param_1[0x1b];
      param_1[0x1b] = local_8d;
      uVar13 = param_1[0x1c];
      param_1[0x1c] = local_8c;
      uVar14 = param_1[0x1d];
      param_1[0x1d] = local_8b;
      uVar15 = param_1[0x1e];
      param_1[0x1e] = local_8a;
      uVar16 = param_1[0x1f];
      param_1[0x1f] = local_89;
      param_1[0x1a] = local_8e;
      bVar18 = local_88 == &local_98;
      param_1[0x14] = local_94;
      param_1[0x15] = local_93;
      uVar21 = *(undefined8 *)(param_1 + 0x28);
      *(undefined1 **)(param_1 + 0x20) = local_88;
      *(undefined8 *)(param_1 + 0x28) = local_80;
      local_97 = uVar2;
      local_96 = uVar3;
      local_95 = uVar4;
      local_94 = uVar5;
      local_93 = uVar6;
      local_92 = uVar7;
      local_91 = uVar8;
      local_90 = uVar9;
      local_8f = uVar10;
      local_8e = uVar11;
      local_8d = uVar12;
      local_8c = uVar13;
      local_8b = uVar14;
      local_8a = uVar15;
      local_89 = uVar16;
      local_88 = &local_98;
      local_80 = uVar21;
      if (bVar18) {
        *(undefined1 **)(param_1 + 0x20) = puVar20;
      }
    }
    *param_1 = 1;
    local_a0 = puVar17 + 0x10;
    FUN_017d0720(&local_a0);
  }
  local_58 = puVar17 + 0x10;
  FUN_017d0720(&local_58);
  return;
}


