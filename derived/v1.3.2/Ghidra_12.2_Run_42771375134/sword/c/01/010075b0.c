/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010075b0; name: FUN_010075b0
 */


void FUN_010075b0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  byte *pbVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  byte *__s;
  undefined1 *local_2a0;
  code *local_298;
  code *local_290;
  undefined1 *local_288;
  undefined8 local_280;
  long lStack_278;
  undefined8 local_270;
  undefined *local_220;
  code *local_218;
  code *local_210;
  code *local_208;
  long local_200;
  code *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [80];
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [112];
  
  uVar14 = *(undefined8 *)PTR_DAT_0271e770;
  uVar11 = *(undefined8 *)(*(long *)PTR_DAT_0271e860 + 8);
  uVar9 = *(undefined8 *)(*(long *)PTR_DAT_0271e860 + 0xa8);
  puVar1 = PTR_DAT_0271e730 + 0x10;
  pcVar13 = (code *)(PTR_DAT_027194a8 + 0x10);
  lVar15 = 0;
  pcVar2 = (code *)(PTR_DAT_02710a48 + 0x10);
  do {
    local_218 = (code *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    local_208 = (code *)0x0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    __s = (&PTR_s_bin_archive_field_resident_light_02668ab0)[lVar15];
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_100 = 0;
    local_f8 = 0;
    local_220 = puVar1;
    local_210 = pcVar13;
    local_290 = (code *)strlen((char *)__s);
    bVar3 = *__s;
    local_2a0 = (undefined1 *)0xcbf29ce484222645;
    if (bVar3 != 0) {
      local_2a0 = (undefined1 *)0xcbf29ce484222645;
      pbVar12 = __s;
      do {
        pbVar12 = pbVar12 + 1;
        local_2a0 = (undefined1 *)(((ulong)local_2a0 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar12;
      } while (bVar3 != 0);
    }
    local_288 = (undefined1 *)0x0;
    local_298 = (code *)__s;
    FUN_01008430(&local_220,&local_2a0,uVar11);
    if (local_288 != (undefined1 *)0x0) {
      (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
      local_288 = (undefined1 *)0x0;
    }
    FUN_00d9f180(uVar14,&local_220,(&DAT_01d4ac20)[lVar15]);
    pcVar10 = local_e8;
    local_220 = PTR_DAT_0271e730 + 0x10;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = 0;
    }
    local_210 = pcVar2;
    if (local_208 == (code *)0x0) {
      local_208 = (code *)0x0;
      pcVar10 = local_178;
    }
    else {
      FUN_006e2100(local_208,&local_210);
      pcVar6 = local_208;
      local_208 = (code *)0x0;
      pcVar10 = local_178;
      if (pcVar6 != (code *)0x0) {
        (**(code **)(*(long *)((long)pcVar6 + 0x48) + 0x18))();
        pcVar10 = local_178;
      }
    }
    local_178 = pcVar10;
    if (pcVar10 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar10)(auStack_160);
    }
    pcVar10 = local_1f8;
    if (local_1f8 != (code *)0x0) {
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      local_1f8 = (code *)0x0;
      (*pcVar10)(auStack_1e0);
    }
    if (local_208 != (code *)0x0) {
      (**(code **)(*(long *)((long)local_208 + 0x48) + 0x18))();
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 != 4);
  local_208 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  puVar1 = PTR_DAT_0271e730 + 0x10;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_218 = (code *)0x0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_210 = (code *)(PTR_DAT_027194a8 + 0x10);
  local_2a0 = (undefined1 *)0x643c0ad894cdd0dc;
  local_298 = (code *)0x1cf019f;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_290 = (code *)0x2a;
  local_288 = (undefined1 *)0x0;
  local_220 = puVar1;
  FUN_01008430(&local_220,&local_2a0,uVar11);
  if (local_288 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
    local_288 = (undefined1 *)0x0;
  }
  FUN_00d9f180(uVar14,&local_220,3);
  pcVar13 = local_e8;
  local_220 = puVar1;
  if (local_e8 != (code *)0x0) {
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    (*pcVar13)(auStack_d0);
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  local_210 = (code *)(PTR_DAT_02710a48 + 0x10);
  if (local_208 == (code *)0x0) {
    local_208 = (code *)0x0;
    pcVar13 = local_178;
  }
  else {
    FUN_006e2100(local_208,&local_210);
    pcVar2 = local_208;
    local_208 = (code *)0x0;
    pcVar13 = local_178;
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar2 + 0x48) + 0x18))();
      pcVar13 = local_178;
    }
  }
  local_178 = pcVar13;
  if (pcVar13 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar13)(auStack_160);
  }
  pcVar13 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar13)(auStack_1e0);
  }
  if (local_208 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_208 + 0x48) + 0x18))();
    local_208 = (code *)0x0;
  }
  lVar15 = FUN_00da09e0(uVar14,3);
  local_220 = &LAB_010130e0;
  local_218 = FUN_01013430;
  local_210 = FUN_010141d0;
  local_208 = (code *)&LAB_010141f0;
  pcVar13 = *(code **)(lVar15 + 0x138);
  local_200 = param_1;
  local_1f8 = (code *)uVar11;
  local_1f0 = uVar9;
  if (pcVar13 == (code *)0x0) {
LAB_010079fc:
    (*local_210)(&local_200,lVar15 + 0x150);
    *(code **)(lVar15 + 0x148) = local_208;
    *(code **)(lVar15 + 0x138) = local_218;
    *(code **)(lVar15 + 0x140) = local_210;
    *(undefined8 *)(lVar15 + 0x130) = local_220;
  }
  else {
    *(undefined8 *)(lVar15 + 0x140) = 0;
    *(undefined8 *)(lVar15 + 0x148) = 0;
    *(undefined8 *)(lVar15 + 0x130) = 0;
    *(undefined8 *)(lVar15 + 0x138) = 0;
    (*pcVar13)(lVar15 + 0x150);
    if (local_210 != (code *)0x0) goto LAB_010079fc;
  }
  pcVar13 = *(code **)(lVar15 + 0x28);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar15 + 0x30) = 0;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    *(undefined8 *)(lVar15 + 0x20) = 0;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    (*pcVar13)(lVar15 + 0x40);
  }
  puVar1 = PTR_LAB_0271e8d8;
  *(long *)(lVar15 + 0x40) = lVar15;
  puVar5 = PTR_LAB_0271e8e8;
  puVar4 = PTR_LAB_0271e8e0;
  *(undefined8 *)(lVar15 + 0x20) = puVar1;
  *(undefined **)(lVar15 + 0x28) = puVar4;
  puVar1 = PTR_LAB_0271e8f0;
  *(undefined **)(lVar15 + 0x30) = puVar5;
  *(undefined **)(lVar15 + 0x38) = puVar1;
  lVar17 = *(long *)(lVar15 + 0x18);
  if (lVar17 != 0) {
    plVar16 = (long *)(lVar17 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_006e1e70(lVar17,lVar15 + 0x10,1);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  pcVar13 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = (code *)0x0;
    local_208 = (code *)0x0;
    local_220 = (undefined *)0x0;
    local_218 = (code *)0x0;
    (*pcVar13)(&local_200);
  }
  local_208 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  puVar1 = PTR_DAT_0271e730 + 0x10;
  local_180 = 0;
  local_178 = (code *)0x0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_218 = (code *)0x0;
  local_200 = 0;
  local_1f8 = (code *)0x0;
  local_210 = (code *)(PTR_DAT_027194a8 + 0x10);
  local_2a0 = (undefined1 *)0xd549f4f17affb278;
  local_298 = (code *)0x1ce8f1f;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = (code *)0x0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_290 = (code *)0x2b;
  local_288 = (undefined1 *)0x0;
  local_220 = puVar1;
  FUN_01008430(&local_220,&local_2a0,uVar11);
  if (local_288 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_288 + 0x48) + 0x18))();
    local_288 = (undefined1 *)0x0;
  }
  FUN_00d9f180(uVar14,&local_220,5);
  pcVar13 = local_e8;
  local_220 = puVar1;
  if (local_e8 != (code *)0x0) {
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = (code *)0x0;
    local_f0 = 0;
    (*pcVar13)(auStack_d0);
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  local_210 = (code *)(PTR_DAT_02710a48 + 0x10);
  if (local_208 == (code *)0x0) {
    local_208 = (code *)0x0;
    pcVar13 = local_178;
  }
  else {
    FUN_006e2100(local_208,&local_210);
    pcVar2 = local_208;
    local_208 = (code *)0x0;
    pcVar13 = local_178;
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(long *)((long)pcVar2 + 0x48) + 0x18))();
      pcVar13 = local_178;
    }
  }
  local_178 = pcVar13;
  if (pcVar13 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar13)(auStack_160);
  }
  pcVar13 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    (*pcVar13)(auStack_1e0);
  }
  if (local_208 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_208 + 0x48) + 0x18))();
    local_208 = (code *)0x0;
  }
  lVar15 = FUN_00da09e0(uVar14,5);
  local_220 = &LAB_01014210;
  local_218 = FUN_01014400;
  local_210 = FUN_01014870;
  local_208 = (code *)&LAB_01014880;
  pcVar13 = *(code **)(lVar15 + 0x138);
  local_200 = param_1;
  local_1f8 = (code *)uVar11;
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar15 + 0x140) = 0;
    *(undefined8 *)(lVar15 + 0x148) = 0;
    *(undefined8 *)(lVar15 + 0x130) = 0;
    *(undefined8 *)(lVar15 + 0x138) = 0;
    (*pcVar13)(lVar15 + 0x150);
    if (local_210 == (code *)0x0) goto LAB_01007d08;
  }
  (*local_210)(&local_200,lVar15 + 0x150);
  *(code **)(lVar15 + 0x148) = local_208;
  *(code **)(lVar15 + 0x138) = local_218;
  *(code **)(lVar15 + 0x140) = local_210;
  *(undefined8 *)(lVar15 + 0x130) = local_220;
LAB_01007d08:
  pcVar13 = *(code **)(lVar15 + 0x28);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(lVar15 + 0x30) = 0;
    *(undefined8 *)(lVar15 + 0x38) = 0;
    *(undefined8 *)(lVar15 + 0x20) = 0;
    *(undefined8 *)(lVar15 + 0x28) = 0;
    (*pcVar13)(lVar15 + 0x40);
  }
  *(long *)(lVar15 + 0x40) = lVar15;
  *(undefined8 *)(lVar15 + 0x20) = PTR_LAB_0271e8d8;
  *(undefined **)(lVar15 + 0x28) = PTR_LAB_0271e8e0;
  *(undefined **)(lVar15 + 0x30) = PTR_LAB_0271e8e8;
  *(undefined **)(lVar15 + 0x38) = PTR_LAB_0271e8f0;
  lVar17 = *(long *)(lVar15 + 0x18);
  if (lVar17 != 0) {
    plVar16 = (long *)(lVar17 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_006e1e70(lVar17,lVar15 + 0x10,1);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  pcVar13 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = (code *)0x0;
    local_208 = (code *)0x0;
    local_220 = (undefined *)0x0;
    local_218 = (code *)0x0;
    (*pcVar13)(&local_200);
  }
  puVar1 = PTR_DAT_0271e730 + 0x10;
  pcVar13 = (code *)(PTR_DAT_027194a8 + 0x10);
  lVar15 = 0x28;
  pcVar2 = (code *)(PTR_DAT_02710a48 + 0x10);
  do {
    lVar17 = lVar15 + 0x2a61dd0;
    local_218 = (code *)0x0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    local_208 = (code *)0x0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    local_1f8 = (code *)0x0;
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    local_100 = 0;
    local_f8 = 0;
    local_220 = puVar1;
    local_210 = pcVar13;
    FUN_01008430(&local_220,lVar17,uVar9);
    FUN_00d9f180(uVar14,&local_220,0);
    lVar7 = FUN_00da0830(uVar14,lVar17);
    local_2a0 = &LAB_01014890;
    local_298 = FUN_01014ea0;
    local_290 = FUN_01016a30;
    local_288 = &LAB_01016a50;
    pcVar10 = *(code **)(lVar7 + 0x138);
    local_280 = uVar11;
    lStack_278 = lVar17;
    local_270 = uVar14;
    if (pcVar10 == (code *)0x0) {
LAB_01007f44:
      (*local_290)(&local_280,lVar7 + 0x150);
      *(undefined1 **)(lVar7 + 0x148) = local_288;
      *(code **)(lVar7 + 0x138) = local_298;
      *(code **)(lVar7 + 0x140) = local_290;
      *(undefined8 *)(lVar7 + 0x130) = local_2a0;
      pcVar10 = *(code **)(lVar7 + 0x28);
    }
    else {
      *(undefined8 *)(lVar7 + 0x140) = 0;
      *(undefined8 *)(lVar7 + 0x148) = 0;
      *(undefined8 *)(lVar7 + 0x130) = 0;
      *(undefined8 *)(lVar7 + 0x138) = 0;
      (*pcVar10)(lVar7 + 0x150);
      if (local_290 != (code *)0x0) goto LAB_01007f44;
      pcVar10 = *(code **)(lVar7 + 0x28);
    }
    if (pcVar10 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x30) = 0;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      *(undefined8 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x28) = 0;
      (*pcVar10)(lVar7 + 0x40);
    }
    *(long *)(lVar7 + 0x40) = lVar7;
    *(undefined **)(lVar7 + 0x20) = PTR_LAB_0271e8d8;
    *(undefined **)(lVar7 + 0x28) = PTR_LAB_0271e8e0;
    *(undefined **)(lVar7 + 0x30) = PTR_LAB_0271e8e8;
    *(undefined **)(lVar7 + 0x38) = PTR_LAB_0271e8f0;
    lVar17 = *(long *)(lVar7 + 0x18);
    if (lVar17 != 0) {
      plVar16 = (long *)(lVar17 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_006e1e70(lVar17,lVar7 + 0x10,1);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    pcVar10 = local_298;
    if (local_298 != (code *)0x0) {
      local_290 = (code *)0x0;
      local_288 = (undefined1 *)0x0;
      local_2a0 = (undefined1 *)0x0;
      local_298 = (code *)0x0;
      (*pcVar10)(&local_280);
    }
    pcVar10 = local_e8;
    local_220 = PTR_DAT_0271e730 + 0x10;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      local_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar10)(auStack_d0);
    }
    if (local_f8 != 0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = 0;
    }
    local_210 = pcVar2;
    if (local_208 == (code *)0x0) {
      local_208 = (code *)0x0;
      pcVar10 = local_178;
    }
    else {
      FUN_006e2100(local_208,&local_210);
      pcVar6 = local_208;
      local_208 = (code *)0x0;
      pcVar10 = local_178;
      if (pcVar6 != (code *)0x0) {
        (**(code **)(*(long *)((long)pcVar6 + 0x48) + 0x18))();
        pcVar10 = local_178;
      }
    }
    local_178 = pcVar10;
    if (pcVar10 != (code *)0x0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar10)(auStack_160);
    }
    pcVar10 = local_1f8;
    if (local_1f8 != (code *)0x0) {
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      local_1f8 = (code *)0x0;
      (*pcVar10)(auStack_1e0);
    }
    if (local_208 != (code *)0x0) {
      (**(code **)(*(long *)((long)local_208 + 0x48) + 0x18))();
    }
    lVar15 = lVar15 + 0x60;
    if (lVar15 == 0x1a8) {
      local_208 = (code *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      puVar1 = PTR_DAT_0271e730 + 0x10;
      local_180 = 0;
      local_178 = (code *)0x0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_218 = (code *)0x0;
      local_200 = 0;
      local_1f8 = (code *)0x0;
      local_210 = (code *)(PTR_DAT_027194a8 + 0x10);
      local_2a0 = (undefined1 *)0xae5f6f6d43d094da;
      local_298 = (code *)0x1d36db2;
      local_d8 = 0;
      local_290 = (code *)0x27;
      local_288 = (undefined1 *)0x0;
      local_e0 = 0;
      local_e8 = (code *)0x0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_220 = puVar1;
      FUN_01008430(&local_220,&local_2a0,*(undefined8 *)(param_1 + 8));
      if (local_288 != (undefined1 *)0x0) {
        (**(code **)(*(long *)((long)local_288 + 0x48) + 0x18))();
        local_288 = (undefined1 *)0x0;
      }
      FUN_00d9f180(uVar14,&local_220,8);
      pcVar13 = local_e8;
      local_220 = puVar1;
      if (local_e8 != (code *)0x0) {
        local_d8 = 0;
        local_e0 = 0;
        local_e8 = (code *)0x0;
        local_f0 = 0;
        (*pcVar13)(auStack_d0);
      }
      if (local_f8 != 0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = 0;
      }
      local_210 = (code *)(PTR_DAT_02710a48 + 0x10);
      if (local_208 == (code *)0x0) {
        local_208 = (code *)0x0;
        pcVar13 = local_178;
      }
      else {
        FUN_006e2100(local_208,&local_210);
        pcVar2 = local_208;
        local_208 = (code *)0x0;
        pcVar13 = local_178;
        if (pcVar2 != (code *)0x0) {
          (**(code **)(*(long *)((long)pcVar2 + 0x48) + 0x18))();
          pcVar13 = local_178;
        }
      }
      local_178 = pcVar13;
      if (pcVar13 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar13)(auStack_160);
      }
      pcVar13 = local_1f8;
      if (local_1f8 != (code *)0x0) {
        local_1f0 = 0;
        uStack_1e8 = 0;
        local_200 = 0;
        local_1f8 = (code *)0x0;
        (*pcVar13)(auStack_1e0);
      }
      if (local_208 != (code *)0x0) {
        (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
        local_208 = (code *)0x0;
      }
      puVar1 = PTR_DAT_0271e8f8;
      if (*(long *)PTR_DAT_0271e8f8 == 0) {
        local_180 = 0;
        local_178 = (code *)0x0;
        local_190 = 0;
        local_188 = (code *)0x0;
        local_200 = 0;
        local_1f8 = (code *)0x0;
        local_210 = (code *)0x0;
        local_208 = (code *)0x0;
        local_220 = PTR_DAT_02710ac8 + 0x10;
        local_218 = (code *)0x0;
        FUN_010087b0(&local_220,"bin/field/param/effect/effect_resource_table.bin",uVar11,0);
        local_2a0 = (undefined1 *)
                    ((long)*(uint **)((long)local_218 + 400) +
                    (ulong)**(uint **)((long)local_218 + 400));
        uVar9 = FUN_01016a70(uVar11,0,&local_2a0);
        FUN_01008a10(uVar9,uVar11,1);
        local_220 = PTR_DAT_02710a48 + 0x10;
        if (local_218 == (code *)0x0) {
          local_218 = (code *)0x0;
          pcVar13 = local_188;
        }
        else {
          FUN_006e2100(local_218,&local_220);
          pcVar2 = local_218;
          local_218 = (code *)0x0;
          pcVar13 = local_188;
          if (pcVar2 != (code *)0x0) {
            (**(code **)(*(long *)((long)pcVar2 + 0x48) + 0x18))();
            pcVar13 = local_188;
          }
        }
        local_188 = pcVar13;
        if (pcVar13 != (code *)0x0) {
          local_180 = 0;
          local_178 = (code *)0x0;
          local_190 = 0;
          local_188 = (code *)0x0;
          (*pcVar13)(&local_170);
        }
        pcVar13 = local_208;
        if (local_208 != (code *)0x0) {
          local_200 = 0;
          local_1f8 = (code *)0x0;
          local_210 = (code *)0x0;
          local_208 = (code *)0x0;
          (*pcVar13)(&local_1f0);
        }
        if (local_218 != (code *)0x0) {
          (**(code **)(*(long *)((long)local_218 + 0x48) + 0x18))();
          local_218 = (code *)0x0;
        }
      }
      puVar4 = PTR_DAT_0271fe18;
      if (*(long *)PTR_DAT_0271fe18 == 0) {
        uVar9 = FUN_01017b20(uVar11,0);
        FUN_00fafd50(uVar9,uVar11,1);
      }
      uVar8 = FUN_00da07f0(uVar14);
      if ((uVar8 & 1) != 0) goto LAB_010083b8;
LAB_010083a4:
      do {
        do {
          nn::os::SleepThread(&DAT_01f78a40);
          uVar8 = FUN_00da07f0(uVar14);
        } while ((uVar8 & 1) == 0);
LAB_010083b8:
        for (plVar16 = *(long **)(*(long *)puVar1 + 0x70); plVar16 != (long *)0x0;
            plVar16 = (long *)*plVar16) {
          if ((*(char *)(plVar16 + 0x2c) != '\0') &&
             ((plVar16[0xb] == 0 || (*(char *)(plVar16[0xb] + 0x170) == '\0')))) goto LAB_010083a4;
        }
        uVar8 = FUN_00fb0410(*(undefined8 *)puVar4);
        if ((uVar8 & 1) != 0) {
          return;
        }
      } while( true );
    }
  } while( true );
}


