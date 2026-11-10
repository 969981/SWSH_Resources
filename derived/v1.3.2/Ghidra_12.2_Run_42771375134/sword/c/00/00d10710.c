/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d10710; name: FUN_00d10710
 */


void FUN_00d10710(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  char *__s1;
  undefined8 uVar17;
  char *local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  long local_198;
  long local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 *local_170;
  long local_168;
  long local_160;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70 [2];
  
  plVar1 = (long *)(param_1 + 0x2b8);
  lVar6 = *(long *)(param_1 + 0x2b8);
  local_80 = *(undefined8 *)(lVar6 + 0x80);
  local_78 = *(undefined8 *)(lVar6 + 0x78);
  FUN_00d65930(lVar6,&local_80);
  FUN_00d66ca0(*(undefined8 *)(param_1 + 0x2b8),param_3);
  if (*(long *)(param_2 + 0x50) != -0x7c28d155a55e5845) {
    snprintf((char *)&local_180,0x100,"bin/archive/demo/%s.gfpak",*(char **)(param_2 + 0x58));
    puVar2 = PTR_s_data___02710918;
    sVar7 = strlen(PTR_s_data___02710918);
    iVar5 = strncmp((char *)&local_180,puVar2,sVar7);
    if (iVar5 == 0) {
      local_70[0] = &local_180;
      FUN_00d99c10(&local_1b0,local_70,0);
    }
    else {
      FUN_008802d0(local_70,PTR_s_data___02710918,&local_180);
      FUN_006e5870(&local_1b0,local_70,0);
      if (local_70[0] != (undefined8 *)0x0) {
        (**(code **)(local_70[0][9] + 0x18))();
        local_70[0] = (undefined8 *)0x0;
      }
    }
    FUN_006dccd0(local_70,*(undefined8 *)PTR_DAT_02710788,1,&local_1b0,0,
                 *(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x348) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x348) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    puVar4 = local_70[0];
    *(undefined8 **)(param_1 + 0x348) = local_70[0];
    if (local_70[0] != (undefined8 *)0x0) {
      plVar16 = local_70[0] + 9;
      (**(code **)(*plVar16 + 0x10))(plVar16);
      if ((*(long *)(param_1 + 0x350) != 0) || (*(long *)(param_1 + 0x3d0) != 0)) {
        FUN_006e1e70(puVar4,param_1 + 0x340,1);
      }
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    if ((local_198 != 0) && (local_1b0 != (char *)0x0)) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    }
    local_1b0 = (char *)0x0;
    uStack_1a8 = 0xcbf29ce484222645;
    local_1a0 = &DAT_01d38550;
    local_198 = 0;
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
  }
  puVar2 = PTR_s_data___02710918;
  lVar6 = *plVar1;
  __s1 = *(char **)(param_2 + 0x28);
  plVar16 = *(long **)(lVar6 + 0x90);
  sVar7 = strlen(PTR_s_data___02710918);
  iVar5 = strncmp(__s1,puVar2,sVar7);
  if (iVar5 == 0) {
    local_1b0 = __s1;
    FUN_00d99c10(&local_180,&local_1b0,0);
  }
  else {
    FUN_008d5230(&local_1b0,PTR_s_data___02710918,param_2 + 0x20);
    FUN_006e5870(&local_180,&local_1b0,0);
    if (local_1b0 != (char *)0x0) {
      (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
      local_1b0 = (char *)0x0;
    }
  }
  uVar17 = *(undefined8 *)(param_1 + 0x298);
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar16;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar16 + 0x10))(plVar16,0x2f0,0x10);
  if (lVar9 == 0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  FUN_015d3780(lVar9,*(undefined8 *)(lVar6 + 0x90),&local_180,uVar17,0);
  *(long **)(lVar9 + 8) = plVar16;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar9 + 0x20) = 0x10;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar6 = *plVar1;
  if (*(long *)(lVar6 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x98) = 0;
  }
  *(long *)(lVar6 + 0x98) = lVar9;
  if ((local_168 != 0) && (local_180 != 0)) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  local_180 = 0;
  uStack_178 = 0xcbf29ce484222645;
  local_170 = &DAT_01d38550;
  local_168 = 0;
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
    local_160 = 0;
  }
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 1000) = *(undefined8 *)(param_3 + 0x28);
  uVar17 = *(undefined8 *)(param_3 + 0x30);
  uVar14 = *(undefined8 *)(param_3 + 0x38);
  uVar13 = *(undefined8 *)(param_3 + 0x40);
  *(undefined4 *)(lVar6 + 0x408) = *(undefined4 *)(param_3 + 0x48);
  *(undefined8 *)(lVar6 + 0x400) = uVar13;
  *(undefined8 *)(lVar6 + 0x3f8) = uVar14;
  *(undefined8 *)(lVar6 + 0x3f0) = uVar17;
  lVar6 = *plVar1;
  uVar17 = *(undefined8 *)(param_3 + 0x54);
  uVar14 = *(undefined8 *)(param_3 + 0x5c);
  uVar13 = *(undefined8 *)(param_3 + 100);
  *(undefined4 *)(lVar6 + 0x42c) = *(undefined4 *)(param_3 + 0x6c);
  uVar15 = *(undefined8 *)(param_3 + 0x4c);
  *(undefined8 *)(lVar6 + 0x424) = uVar13;
  *(undefined8 *)(lVar6 + 0x41c) = uVar14;
  *(undefined8 *)(lVar6 + 0x414) = uVar17;
  *(undefined8 *)(lVar6 + 0x40c) = uVar15;
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 0x430) = *(undefined8 *)(param_3 + 0x70);
  uVar13 = *(undefined8 *)(param_3 + 0x88);
  uVar17 = *(undefined8 *)(param_3 + 0x78);
  uVar14 = *(undefined8 *)(param_3 + 0x80);
  *(undefined4 *)(lVar6 + 0x450) = *(undefined4 *)(param_3 + 0x90);
  *(undefined8 *)(lVar6 + 0x448) = uVar13;
  *(undefined8 *)(lVar6 + 0x440) = uVar14;
  *(undefined8 *)(lVar6 + 0x438) = uVar17;
  lVar6 = *plVar1;
  uVar17 = *(undefined8 *)(param_3 + 0x9c);
  uVar14 = *(undefined8 *)(param_3 + 0xa4);
  uVar13 = *(undefined8 *)(param_3 + 0xac);
  *(undefined4 *)(lVar6 + 0x474) = *(undefined4 *)(param_3 + 0xb4);
  uVar15 = *(undefined8 *)(param_3 + 0x94);
  *(undefined8 *)(lVar6 + 0x46c) = uVar13;
  *(undefined8 *)(lVar6 + 0x464) = uVar14;
  *(undefined8 *)(lVar6 + 0x45c) = uVar17;
  *(undefined8 *)(lVar6 + 0x454) = uVar15;
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 0x478) = *(undefined8 *)(param_3 + 0xb8);
  uVar17 = *(undefined8 *)(param_3 + 0xc0);
  uVar14 = *(undefined8 *)(param_3 + 200);
  uVar13 = *(undefined8 *)(param_3 + 0xd0);
  *(undefined4 *)(lVar6 + 0x498) = *(undefined4 *)(param_3 + 0xd8);
  *(undefined8 *)(lVar6 + 0x490) = uVar13;
  *(undefined8 *)(lVar6 + 0x488) = uVar14;
  *(undefined8 *)(lVar6 + 0x480) = uVar17;
  lVar6 = *plVar1;
  uVar13 = *(undefined8 *)(param_3 + 0xf4);
  uVar17 = *(undefined8 *)(param_3 + 0xe4);
  uVar14 = *(undefined8 *)(param_3 + 0xec);
  *(undefined4 *)(lVar6 + 0x4bc) = *(undefined4 *)(param_3 + 0xfc);
  uVar15 = *(undefined8 *)(param_3 + 0xdc);
  *(undefined8 *)(lVar6 + 0x4b4) = uVar13;
  *(undefined8 *)(lVar6 + 0x4ac) = uVar14;
  *(undefined8 *)(lVar6 + 0x4a4) = uVar17;
  *(undefined8 *)(lVar6 + 0x49c) = uVar15;
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 0x4c0) = *(undefined8 *)(param_3 + 0x100);
  uVar17 = *(undefined8 *)(param_3 + 0x108);
  uVar14 = *(undefined8 *)(param_3 + 0x110);
  uVar13 = *(undefined8 *)(param_3 + 0x118);
  *(undefined4 *)(lVar6 + 0x4e0) = *(undefined4 *)(param_3 + 0x120);
  *(undefined8 *)(lVar6 + 0x4d8) = uVar13;
  *(undefined8 *)(lVar6 + 0x4d0) = uVar14;
  *(undefined8 *)(lVar6 + 0x4c8) = uVar17;
  lVar6 = *plVar1;
  uVar15 = *(undefined8 *)(param_3 + 0x13c);
  uVar14 = *(undefined8 *)(param_3 + 300);
  uVar13 = *(undefined8 *)(param_3 + 0x134);
  *(undefined4 *)(lVar6 + 0x504) = *(undefined4 *)(param_3 + 0x144);
  uVar17 = *(undefined8 *)(param_3 + 0x124);
  *(undefined8 *)(lVar6 + 0x4fc) = uVar15;
  *(undefined8 *)(lVar6 + 0x4f4) = uVar13;
  *(undefined8 *)(lVar6 + 0x4ec) = uVar14;
  *(undefined8 *)(lVar6 + 0x4e4) = uVar17;
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 0x508) = *(undefined8 *)(param_3 + 0x148);
  uVar17 = *(undefined8 *)(param_3 + 0x150);
  uVar14 = *(undefined8 *)(param_3 + 0x158);
  uVar13 = *(undefined8 *)(param_3 + 0x160);
  *(undefined4 *)(lVar6 + 0x528) = *(undefined4 *)(param_3 + 0x168);
  *(undefined8 *)(lVar6 + 0x520) = uVar13;
  *(undefined8 *)(lVar6 + 0x518) = uVar14;
  *(undefined8 *)(lVar6 + 0x510) = uVar17;
  lVar6 = *plVar1;
  uVar15 = *(undefined8 *)(param_3 + 0x184);
  uVar14 = *(undefined8 *)(param_3 + 0x174);
  uVar13 = *(undefined8 *)(param_3 + 0x17c);
  *(undefined4 *)(lVar6 + 0x54c) = *(undefined4 *)(param_3 + 0x18c);
  uVar17 = *(undefined8 *)(param_3 + 0x16c);
  *(undefined8 *)(lVar6 + 0x544) = uVar15;
  *(undefined8 *)(lVar6 + 0x53c) = uVar13;
  *(undefined8 *)(lVar6 + 0x534) = uVar14;
  *(undefined8 *)(lVar6 + 0x52c) = uVar17;
  lVar6 = *plVar1;
  *(undefined8 *)(lVar6 + 0x550) = *(undefined8 *)(param_3 + 400);
  uVar17 = *(undefined8 *)(param_3 + 0x198);
  uVar14 = *(undefined8 *)(param_3 + 0x1a0);
  uVar13 = *(undefined8 *)(param_3 + 0x1a8);
  *(undefined4 *)(lVar6 + 0x570) = *(undefined4 *)(param_3 + 0x1b0);
  *(undefined8 *)(lVar6 + 0x568) = uVar13;
  *(undefined8 *)(lVar6 + 0x560) = uVar14;
  *(undefined8 *)(lVar6 + 0x558) = uVar17;
  lVar8 = *plVar1;
  uVar14 = *(undefined8 *)(param_3 + 0x1bc);
  uVar13 = *(undefined8 *)(param_3 + 0x1c4);
  uVar15 = *(undefined8 *)(param_3 + 0x1cc);
  *(undefined4 *)(lVar8 + 0x594) = *(undefined4 *)(param_3 + 0x1d4);
  uVar17 = *(undefined8 *)(param_3 + 0x1b4);
  lVar6 = 0;
  *(undefined8 *)(lVar8 + 0x58c) = uVar15;
  *(undefined8 *)(lVar8 + 0x584) = uVar13;
  *(undefined8 *)(lVar8 + 0x574) = uVar17;
  *(undefined8 *)(lVar8 + 0x57c) = uVar14;
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_3 + 0x1d8 + lVar6);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar9 + lVar6 + 0x598);
    *(long *)(lVar9 + lVar6 + 0x598) = lVar8;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xa0);
  lVar6 = 0;
  do {
    lVar9 = *plVar1;
    lVar8 = *(long *)(param_3 + 0x278 + lVar6);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar9 + lVar6 + 0x638);
    *(long *)(lVar9 + lVar6 + 0x638) = lVar8;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xa0);
  lVar6 = *plVar1;
  lVar8 = *(long *)(param_3 + 0x410);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar6 + 0x6d8);
  *(long *)(lVar6 + 0x6d8) = lVar8;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar6 = *plVar1;
  lVar8 = *(long *)(param_3 + 0x418);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar6 + 0x6e0);
  *(long *)(lVar6 + 0x6e0) = lVar8;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar6 = *plVar1;
  lVar8 = *(long *)(param_3 + 0x420);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar6 + 0x6e8);
  *(long *)(lVar6 + 0x6e8) = lVar8;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar6 = *plVar1;
  lVar8 = *(long *)(param_3 + 0x428);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar6 + 0x6f0);
  *(long *)(lVar6 + 0x6f0) = lVar8;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar6 = 0;
  do {
    uVar17 = *(undefined8 *)(param_3 + 0x318 + lVar6);
    if ((int)uVar17 != -1) {
      local_180 = uVar17;
      puVar11 = (undefined1 *)FUN_00d14760(param_1 + 0x2c8,&local_180);
      *puVar11 = (char)((ulong)uVar17 >> 0x20);
      if ((int)local_180 - 1000U < 1000) {
        bVar3 = local_180._4_1_;
        local_1b0 = (char *)CONCAT44(local_1b0._4_4_,(int)local_180 + 1000);
        pbVar12 = (byte *)FUN_00d14a10(param_1 + 0x2c8,&local_1b0);
        *pbVar12 = bVar3 ^ 1;
      }
    }
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0xf0);
  *(undefined1 *)(param_1 + 0x330) = *(undefined1 *)(param_3 + 0x40d);
  *(undefined8 *)(param_1 + 0x2c0) = 1;
  return;
}


