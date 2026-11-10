/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a95be0; name: FUN_00a95be0
 */


void FUN_00a95be0(long param_1)

{
  void *__src;
  ulong uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  void *__dest;
  ulong *puVar9;
  code *pcVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  size_t sVar21;
  void *pvVar22;
  long *plVar23;
  undefined1 *local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  long local_1a0;
  undefined4 local_198;
  int local_140 [4];
  long *local_130;
  ulong local_128;
  long alStack_120 [4];
  long *local_100;
  void *local_f0;
  ulong local_e8;
  ulong local_e0;
  long *local_d0;
  ulong local_c8;
  long alStack_c0 [4];
  long *local_a0;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  iVar6 = FUN_00a97670();
  puVar3 = PTR_DAT_02710848;
  puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar12 = *puVar9;
  uVar14 = puVar9[1];
  do {
    uVar15 = uVar12 ^ uVar14;
    iVar13 = (int)uVar14;
    iVar11 = (int)uVar12;
    uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
    uVar12 = uVar15 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar15 << 0x10;
    uVar18 = iVar11 + iVar13 & 0x7f;
  } while (99 < uVar18);
  *puVar9 = uVar12;
  puVar9[1] = uVar14;
  plVar17 = *(long **)(*(long *)(param_1 + 8) + 0x278);
  uVar7 = 1;
  if ((int)uVar18 < *(int *)(&DAT_02157858 + (long)iVar6 * 4)) {
    uVar7 = 2;
  }
  local_1c0 = (undefined1 *)0xb3236763c32e0e7d;
  local_1b8 = (code *)0x1d25339;
  local_1b0 = (code *)0x7;
  FUN_012b4250(auStack_90,param_1 + 0x120,&local_1c0);
  local_a0 = (long *)0x0;
  local_c8 = 0x3fffffffffffffff;
  local_d0 = plVar17;
  uVar12 = FUN_012b40f0(auStack_90);
  local_130 = local_d0;
  local_128 = local_c8;
  if (local_a0 == (long *)0x0) {
    local_100 = (long *)0x0;
joined_r0x00a95d20:
    if (uVar12 != 0) goto LAB_00a95d24;
LAB_00a95cf4:
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = (void *)0x0;
    lVar8 = FUN_012b40f0(auStack_90);
    if (lVar8 != 0) goto LAB_00a95d00;
LAB_00a95e08:
    puVar9 = *(ulong **)(*(long *)puVar3 + 0x98);
LAB_00a95efc:
    uVar14 = *puVar9;
    uVar12 = (ulong)(uint)((int)puVar9[1] + (int)uVar14);
    uVar15 = puVar9[1] ^ uVar14;
    *puVar9 = uVar15 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar15 << 0x10;
    puVar9[1] = uVar15 >> 0x1b | uVar15 << 0x25;
  }
  else {
    if (alStack_c0 == local_a0) {
      local_100 = alStack_120;
      (**(code **)(*local_a0 + 0x18))();
      goto joined_r0x00a95d20;
    }
    local_100 = (long *)(**(code **)(*local_a0 + 0x10))();
    if (uVar12 == 0) goto LAB_00a95cf4;
LAB_00a95d24:
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = (void *)0x0;
    if (local_128 < uVar12) goto LAB_00a96704;
    __dest = (void *)(**(code **)(*local_130 + 0x10))(local_130,uVar12 << 2,4);
    pvVar5 = local_f0;
    pvVar22 = __dest;
    if (local_f0 != (void *)0x0) {
      __src = (void *)((long)local_f0 + local_e8 * 4);
      if (local_e8 == 0) {
        lVar8 = -(long)__src;
      }
      else {
        sVar21 = local_e8 * 4;
        memmove(__dest,local_f0,sVar21);
        pvVar22 = (void *)((long)__dest + sVar21);
        lVar8 = local_e8 * 4 - (long)__src;
      }
      sVar21 = (long)pvVar5 + lVar8;
      if (sVar21 != 0) {
        memmove(pvVar22,__src,sVar21);
        pvVar22 = (void *)((long)pvVar22 + sVar21);
      }
      (**(code **)(*local_130 + 0x18))(local_130,local_f0,local_e0 << 2,4);
    }
    local_e8 = (long)pvVar22 - (long)__dest >> 2;
    local_f0 = __dest;
    local_e0 = uVar12;
    lVar8 = FUN_012b40f0(auStack_90);
    if (lVar8 == 0) goto LAB_00a95e08;
LAB_00a95d00:
    puVar4 = PTR_DAT_02710860;
    uVar18 = 0;
    uVar20 = 1;
    do {
      iVar6 = uVar20 - 1;
      uVar14 = FUN_00a96a10(param_1,iVar6,*(undefined4 *)(param_1 + 0x10c),uVar7,
                            *(undefined1 *)(param_1 + 0x170));
      uVar12 = local_e8;
      pvVar22 = local_f0;
      plVar17 = local_130;
      if ((uVar14 & 1) != 0) {
        local_140[0] = iVar6;
        if (local_e8 < local_e0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00a96704;
          *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *(int *)((long)pvVar22 + uVar12 * 4) = local_140[0];
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
          local_e8 = local_e8 + 1;
        }
        else {
          local_1c0 = (undefined1 *)((long)local_f0 + local_e8 * 4);
          FUN_00a9aa70(&local_80,&local_130,&local_1c0,1,local_140);
        }
        uVar18 = uVar18 + 1;
      }
      uVar14 = FUN_012b40f0(auStack_90);
      uVar12 = (ulong)uVar20;
      uVar20 = uVar20 + 1;
    } while (uVar12 < uVar14);
    if (uVar18 == 1) {
      uVar12 = 0;
    }
    else {
      puVar9 = *(ulong **)(*(long *)puVar3 + 0x98);
      if (uVar18 == 0) goto LAB_00a95efc;
      uVar14 = (0x20 - LZCOUNT(uVar18)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar18)) & 0x1f) &
                       uVar18) == 0);
      uVar12 = uVar14 >> 6;
      if ((uVar14 & 0x3f) != 0) {
        uVar12 = uVar12 + 1;
      }
      uVar15 = 0;
      if (uVar12 != 0) {
        uVar15 = uVar14 / uVar12;
      }
      uVar1 = 0;
      if (uVar12 <= uVar14) {
        uVar1 = 0xffffffffffffffff >> (-uVar15 & 0x3f);
      }
      uVar14 = *puVar9;
      uVar15 = puVar9[1];
      do {
        uVar16 = uVar14 ^ uVar15;
        uVar12 = uVar14 + uVar15;
        uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
        uVar14 = uVar16 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar16 << 0x10;
        uVar12 = uVar12 & uVar1;
      } while (uVar18 <= (uint)uVar12);
      *puVar9 = uVar14;
      puVar9[1] = uVar15;
    }
  }
  if (local_e8 != 0) {
    uVar14 = 0;
    do {
      if ((int)uVar12 < 1) {
        *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((long)local_f0 + uVar14 * 4);
        iVar6 = *(int *)(param_1 + 0x28);
        goto joined_r0x00a9608c;
      }
      uVar14 = uVar14 + 1;
      uVar12 = (ulong)((int)uVar12 - 1);
    } while ((uVar14 & 0xffffffff) < local_e8);
  }
  iVar6 = *(int *)(param_1 + 0x28);
joined_r0x00a9608c:
  if (iVar6 == 0) {
    if (*(char *)(param_1 + 0x170) != '\0') {
      *(undefined2 *)(param_1 + 0x170) = 0x100;
    }
    uVar2 = *(undefined2 *)(param_1 + 0x10c);
    local_1c0 = (undefined1 *)0xb3236763c32e0e7d;
    local_1b8 = (code *)0x1d25339;
    local_1b0 = (code *)0x7;
    FUN_012b4250(&local_80,param_1 + 0x120,&local_1c0);
    FUN_012b4190(local_140,&local_80,uVar2);
    local_1c0 = (undefined1 *)0x3322cc25fc3c128f;
    local_1b8 = (code *)0x1d1b461;
    local_1b0 = (code *)0xd;
    FUN_012b4250(&local_80,local_140,&local_1c0);
    iVar6 = FUN_012b4420(&local_80,0);
    if (iVar6 != 0) {
      local_1c0 = (undefined1 *)0xab1700cf3efb1f7;
      local_1b8 = (code *)0x1cf337b;
      local_1b0 = (code *)0x10;
      FUN_012b4250(&local_80,local_140,&local_1c0);
      uVar7 = FUN_012b4420(&local_80,0);
      local_1c0 = (undefined1 *)0x563729b991c94c76;
      local_1b8 = (code *)0x1d1eb6e;
      local_1b0 = (code *)0xa;
      FUN_012b4250(&local_80,local_140,&local_1c0);
      iVar6 = FUN_012b4420(&local_80,0);
      if (-1 < iVar6) {
        *(undefined1 *)(param_1 + 0x170) = 1;
        plVar17 = *(long **)(*(long *)(param_1 + 8) + 0xd8);
        local_1c0 = &LAB_00a9ac50;
        local_1b8 = FUN_00a9aee0;
        local_1b0 = FUN_00a9aef0;
        local_1a8 = &LAB_00a9af00;
        pcVar10 = *(code **)(param_1 + 0x198);
        local_1a0 = param_1;
        local_198 = uVar7;
        if (pcVar10 == (code *)0x0) {
LAB_00a96248:
          (*local_1b0)(&local_1a0,param_1 + 0x1b0);
          *(undefined1 **)(param_1 + 0x1a8) = local_1a8;
          *(code **)(param_1 + 0x198) = local_1b8;
          *(code **)(param_1 + 0x1a0) = local_1b0;
          *(undefined8 *)(param_1 + 400) = local_1c0;
        }
        else {
          *(undefined8 *)(param_1 + 0x1a0) = 0;
          *(undefined8 *)(param_1 + 0x1a8) = 0;
          *(undefined8 *)(param_1 + 400) = 0;
          *(undefined8 *)(param_1 + 0x198) = 0;
          (*pcVar10)(param_1 + 0x1b0);
          if (local_1b0 != (code *)0x0) goto LAB_00a96248;
        }
        lVar8 = *(long *)(param_1 + 0x188);
        if (lVar8 != 0) {
          plVar23 = (long *)(lVar8 + 0x48);
          (**(code **)(*plVar23 + 0x10))(plVar23);
          FUN_006e1e70(lVar8,param_1 + 0x180,1);
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
        pcVar10 = local_1b8;
        if (local_1b8 != (code *)0x0) {
          local_1b0 = (code *)0x0;
          local_1a8 = (undefined1 *)0x0;
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (code *)0x0;
          (*pcVar10)(&local_1a0);
        }
        FUN_00a76ae0(&local_1c0,*(undefined8 *)(param_1 + 8),uVar7);
        puVar3 = PTR_DAT_02710788;
        FUN_006dccd0(&local_80,*(undefined8 *)PTR_DAT_02710788,1,&local_1c0,0,plVar17,0);
        if (*(long *)(param_1 + 0x188) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x188) = 0;
        }
        *(long *)(param_1 + 0x188) = local_80;
        if (local_80 != 0) {
          plVar23 = (long *)(local_80 + 0x48);
          (**(code **)(*plVar23 + 0x10))(plVar23);
          if ((*(long *)(param_1 + 400) != 0) || (*(long *)(param_1 + 0x210) != 0)) {
            FUN_006e1e70(local_80,param_1 + 0x180,1);
          }
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
        if ((local_1a8 != (undefined1 *)0x0) && (local_1c0 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
        }
        local_1c0 = (undefined1 *)0x0;
        local_1b8 = (code *)0xcbf29ce484222645;
        local_1b0 = (code *)&DAT_01d38550;
        local_1a8 = (undefined1 *)0x0;
        if (local_1a0 != 0) {
          (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
          local_1a0 = 0;
        }
        local_80 = 0;
        uStack_78 = 0;
        FUN_00a66750(*(undefined8 *)(param_1 + 8),&local_80);
        puVar19 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
        uVar18 = *puVar19;
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00a96704:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar17;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        plVar23 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x710,0x10);
        if (plVar23 == (long *)0x0) {
          (**(code **)(*plVar17 + 0xb8))(plVar17);
        }
        FUN_00adae20(plVar23,*(undefined8 *)(param_1 + 8),plVar17,&local_80,
                     (long)puVar19 + (ulong)uVar18);
        plVar23[1] = (long)plVar17;
        plVar23[2] = (long)plVar23;
        plVar23[3] = 0x710;
        plVar23[4] = 0x10;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (plVar23 != (long *)0x0) {
          (**(code **)(plVar23[9] + 0x10))();
        }
        if (*(long *)(param_1 + 0x710) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x710) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x710) = 0;
        }
        *(long **)(param_1 + 0x710) = plVar23;
        (**(code **)(*plVar23 + 0x198))(plVar23,0);
        local_1c0 = &LAB_00a9af10;
        local_1b8 = FUN_00a9b0e0;
        local_1b0 = FUN_00a9b0f0;
        local_1a8 = &LAB_00a9b100;
        pcVar10 = *(code **)(param_1 + 0x508);
        local_1a0 = param_1;
        local_198 = uVar7;
        if (pcVar10 == (code *)0x0) {
LAB_00a9653c:
          (*local_1b0)(&local_1a0,param_1 + 0x520);
          *(undefined1 **)(param_1 + 0x518) = local_1a8;
          *(code **)(param_1 + 0x508) = local_1b8;
          *(code **)(param_1 + 0x510) = local_1b0;
          *(undefined8 *)(param_1 + 0x500) = local_1c0;
        }
        else {
          *(undefined8 *)(param_1 + 0x510) = 0;
          *(undefined8 *)(param_1 + 0x518) = 0;
          *(undefined8 *)(param_1 + 0x500) = 0;
          *(undefined8 *)(param_1 + 0x508) = 0;
          (*pcVar10)(param_1 + 0x520);
          if (local_1b0 != (code *)0x0) goto LAB_00a9653c;
        }
        lVar8 = *(long *)(param_1 + 0x4f8);
        if (lVar8 != 0) {
          plVar23 = (long *)(lVar8 + 0x48);
          (**(code **)(*plVar23 + 0x10))(plVar23);
          FUN_006e1e70(lVar8,param_1 + 0x4f0,1);
          (**(code **)(*plVar23 + 0x18))(plVar23);
        }
        pcVar10 = local_1b8;
        if (local_1b8 != (code *)0x0) {
          local_1b0 = (code *)0x0;
          local_1a8 = (undefined1 *)0x0;
          local_1c0 = (undefined1 *)0x0;
          local_1b8 = (code *)0x0;
          (*pcVar10)(&local_1a0);
        }
        FUN_00a76b80(&local_1c0,*(undefined8 *)(param_1 + 8),uVar7);
        FUN_006dccd0(local_70,*(undefined8 *)puVar3,1,&local_1c0,0,plVar17,0);
        if (*(long *)(param_1 + 0x4f8) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x4f8) = 0;
        }
        *(long *)(param_1 + 0x4f8) = local_70[0];
        if (local_70[0] != 0) {
          plVar17 = (long *)(local_70[0] + 0x48);
          (**(code **)(*plVar17 + 0x10))(plVar17);
          if ((*(long *)(param_1 + 0x500) != 0) || (*(long *)(param_1 + 0x580) != 0)) {
            FUN_006e1e70(local_70[0],param_1 + 0x4f0,1);
          }
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
        if ((local_1a8 != (undefined1 *)0x0) && (local_1c0 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
        }
        local_1c0 = (undefined1 *)0x0;
        local_1b8 = (code *)0xcbf29ce484222645;
        local_1b0 = (code *)&DAT_01d38550;
        local_1a8 = (undefined1 *)0x0;
        if (local_1a0 != 0) {
          (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
          local_1a0 = 0;
        }
        FUN_00a71380(*(undefined8 *)(param_1 + 8),iVar6);
      }
    }
    local_1c0 = (undefined1 *)0x846023c103658f33;
    local_1b8 = (code *)0x1d47e21;
    local_1b0 = (code *)0xa;
    FUN_012b4250(&local_80,local_140,&local_1c0);
    iVar6 = FUN_012b4420(&local_80,0);
    *(bool *)(param_1 + 0x718) = iVar6 != 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*local_130 + 0x18))(local_130,local_f0,local_e0 << 2,4);
  }
  if (alStack_120 == local_100) {
    pcVar10 = *(code **)(*local_100 + 0x20);
  }
  else {
    if (local_100 == (long *)0x0) goto LAB_00a9602c;
    pcVar10 = *(code **)(*local_100 + 0x28);
  }
  (*pcVar10)();
LAB_00a9602c:
  if (alStack_c0 == local_a0) {
    pcVar10 = *(code **)(*local_a0 + 0x20);
  }
  else {
    if (local_a0 == (long *)0x0) {
      return;
    }
    pcVar10 = *(code **)(*local_a0 + 0x28);
  }
  (*pcVar10)();
  return;
}


