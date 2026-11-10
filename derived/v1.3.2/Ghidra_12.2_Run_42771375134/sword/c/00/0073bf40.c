/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073bf40; name: FUN_0073bf40
 */


uint FUN_0073bf40(long param_1,long param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint local_194;
  undefined *local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  code *local_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  code *local_e8;
  undefined1 auStack_e0 [96];
  undefined4 local_80;
  
  plVar8 = *(long **)(param_1 + 0x7f0);
  uVar2 = (int)((ulong)((long)plVar8 - *(long *)(param_1 + 0x7e8)) >> 5) * 0x38e38e39;
  if (uVar2 != 0) {
    uVar7 = 0;
    lVar10 = 0x110;
    do {
      uVar6 = (uint)uVar7;
      if (*(long *)(*(long *)(param_1 + 0x7e8) + uVar7 * 0x120 + 8) == 0) {
        local_188 = *(long *)(param_2 + 8);
        local_190 = PTR_DAT_02710800 + 0x10;
        if (local_188 != 0) {
          (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
        }
        local_170 = 0;
        local_168 = (code *)0x0;
        local_180 = 0;
        local_178 = (code *)0x0;
        if (*(code **)(param_2 + 0x20) != (code *)0x0) {
          (**(code **)(param_2 + 0x20))(param_2 + 0x30,auStack_160);
          local_180 = *(undefined8 *)(param_2 + 0x10);
          local_178 = *(code **)(param_2 + 0x18);
          local_170 = *(undefined8 *)(param_2 + 0x20);
          local_168 = *(code **)(param_2 + 0x28);
        }
        local_f0 = 0;
        local_e8 = (code *)0x0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
          (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,auStack_e0);
          local_100 = *(undefined8 *)(param_2 + 0x90);
          local_f8 = *(code **)(param_2 + 0x98);
          local_f0 = *(undefined8 *)(param_2 + 0xa0);
          local_e8 = *(code **)(param_2 + 0xa8);
        }
        local_190 = PTR_DAT_02710810 + 0x10;
        local_80 = *param_3;
        lVar4 = *(long *)(param_1 + 0x7e8);
        lVar3 = lVar4 + lVar10;
        plVar8 = (long *)(lVar3 + -0x108);
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          *plVar8 = 0;
        }
        lVar1 = local_188;
        local_188 = 0;
        *plVar8 = lVar1;
        pcVar5 = *(code **)(lVar3 + -0xf8);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0xf0) = 0;
          *(undefined8 *)(lVar3 + -0xe8) = 0;
          *(undefined8 *)(lVar3 + -0x100) = 0;
          *(undefined8 *)(lVar3 + -0xf8) = 0;
          (*pcVar5)(lVar3 + -0xe0);
        }
        if (local_168 != (code *)0x0) {
          (*local_168)(auStack_160,lVar3 + -0xe0);
          pcVar5 = local_178;
          *(code **)(lVar3 + -0xe8) = local_168;
          *(undefined8 *)(lVar3 + -0x100) = local_180;
          *(code **)(lVar3 + -0xf8) = local_178;
          *(undefined8 *)(lVar3 + -0xf0) = local_170;
          if (local_178 != (code *)0x0) {
            local_170 = 0;
            local_168 = (code *)0x0;
            local_180 = 0;
            local_178 = (code *)0x0;
            (*pcVar5)(auStack_160);
          }
        }
        pcVar5 = *(code **)(lVar3 + -0x78);
        if (pcVar5 != (code *)0x0) {
          *(undefined8 *)(lVar3 + -0x70) = 0;
          *(undefined8 *)(lVar3 + -0x68) = 0;
          *(undefined8 *)(lVar3 + -0x80) = 0;
          *(undefined8 *)(lVar3 + -0x78) = 0;
          (*pcVar5)(lVar3 + -0x60);
        }
        if (local_e8 != (code *)0x0) {
          (*local_e8)(auStack_e0,lVar3 + -0x60);
          pcVar5 = local_f8;
          *(code **)(lVar3 + -0x68) = local_e8;
          *(undefined8 *)(lVar3 + -0x80) = local_100;
          *(code **)(lVar3 + -0x78) = local_f8;
          *(undefined8 *)(lVar3 + -0x70) = local_f0;
          if (local_f8 != (code *)0x0) {
            local_f0 = 0;
            local_e8 = (code *)0x0;
            local_100 = 0;
            local_f8 = (code *)0x0;
            (*pcVar5)(auStack_e0);
          }
        }
        *(undefined4 *)(lVar4 + lVar10) = local_80;
        local_190 = PTR_DAT_02710800 + 0x10;
        if (local_188 == 0) {
          local_188 = 0;
          pcVar5 = local_f8;
        }
        else {
          FUN_006e2100(local_188,&local_190);
          lVar10 = local_188;
          local_188 = 0;
          pcVar5 = local_f8;
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
            pcVar5 = local_f8;
          }
        }
        local_f8 = pcVar5;
        if (pcVar5 != (code *)0x0) {
          local_f0 = 0;
          local_e8 = (code *)0x0;
          local_100 = 0;
          local_f8 = (code *)0x0;
          (*pcVar5)(auStack_e0);
        }
        pcVar5 = local_178;
        if (local_178 != (code *)0x0) {
          local_170 = 0;
          local_168 = (code *)0x0;
          local_180 = 0;
          local_178 = (code *)0x0;
          (*pcVar5)(auStack_160);
        }
        if (local_188 != 0) {
          (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
          local_188 = 0;
        }
        if (uVar2 != uVar6) goto LAB_0073c338;
        plVar8 = *(long **)(param_1 + 0x7f0);
        if (plVar8 < *(long **)(param_1 + 0x7f8)) goto LAB_0073bfc8;
        goto LAB_0073c324;
      }
      uVar7 = (ulong)(uVar6 + 1);
      lVar10 = lVar10 + 0x120;
    } while (uVar6 + 1 < uVar2);
  }
  if (plVar8 < *(long **)(param_1 + 0x7f8)) {
LAB_0073bfc8:
    uVar9 = *(undefined8 *)(param_1 + 0x800);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_0073c4f0;
    *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar9;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    *plVar8 = (long)(PTR_DAT_02710800 + 0x10);
    lVar3 = *(long *)(param_2 + 8);
    plVar8[1] = lVar3;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    plVar8[2] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[3] = 0;
    if (*(code **)(param_2 + 0x20) != (code *)0x0) {
      (**(code **)(param_2 + 0x20))(param_2 + 0x30,plVar8 + 6);
      lVar3 = *(long *)(param_2 + 0x10);
      lVar4 = *(long *)(param_2 + 0x18);
      lVar1 = *(long *)(param_2 + 0x28);
      plVar8[4] = *(long *)(param_2 + 0x20);
      plVar8[5] = lVar1;
      plVar8[2] = lVar3;
      plVar8[3] = lVar4;
    }
    plVar8[0x12] = 0;
    plVar8[0x14] = 0;
    plVar8[0x15] = 0;
    plVar8[0x13] = 0;
    if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
      (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,plVar8 + 0x16);
      lVar3 = *(long *)(param_2 + 0x90);
      lVar4 = *(long *)(param_2 + 0x98);
      lVar1 = *(long *)(param_2 + 0xa8);
      plVar8[0x14] = *(long *)(param_2 + 0xa0);
      plVar8[0x15] = lVar1;
      plVar8[0x12] = lVar3;
      plVar8[0x13] = lVar4;
    }
    *plVar8 = (long)(PTR_DAT_02710810 + 0x10);
    *(undefined4 *)(plVar8 + 0x22) = *param_3;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    *(long *)(param_1 + 0x7f0) = *(long *)(param_1 + 0x7f0) + 0x120;
  }
  else {
LAB_0073c324:
    FUN_00741e60((long *)(param_1 + 0x7e8),param_2,param_3);
  }
  uVar6 = uVar2;
LAB_0073c338:
  plVar8 = *(long **)(param_1 + 0x10);
  FUN_00729ec0(&local_190,param_2,*param_3,0x3f);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,0x8f0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_0072a630(lVar3,&local_190);
    *(long **)(lVar3 + 8) = plVar8;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x8f0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_194 = uVar6;
    plVar8 = (long *)FUN_0073d4c0(param_1 + 0x700,&local_194);
    if (*plVar8 != 0) {
      (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      *plVar8 = 0;
    }
    *plVar8 = lVar3;
    local_190 = PTR_DAT_02710800 + 0x10;
    if (local_188 == 0) {
      local_188 = 0;
      pcVar5 = local_f8;
    }
    else {
      FUN_006e2100(local_188,&local_190);
      lVar10 = local_188;
      local_188 = 0;
      pcVar5 = local_f8;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
        pcVar5 = local_f8;
      }
    }
    local_f8 = pcVar5;
    if (pcVar5 != (code *)0x0) {
      local_f0 = 0;
      local_e8 = (code *)0x0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar5)(auStack_e0);
    }
    pcVar5 = local_178;
    if (local_178 != (code *)0x0) {
      local_170 = 0;
      local_168 = (code *)0x0;
      local_180 = 0;
      local_178 = (code *)0x0;
      (*pcVar5)(auStack_160);
    }
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    }
    return uVar6;
  }
LAB_0073c4f0:
                    /* WARNING: Subroutine does not return */
  abort();
}


