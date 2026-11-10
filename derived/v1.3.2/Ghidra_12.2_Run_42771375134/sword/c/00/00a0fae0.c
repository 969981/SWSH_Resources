/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0fae0; name: FUN_00a0fae0
 */


void FUN_00a0fae0(long param_1,long *param_2)

{
  char *param3;
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  size_t sVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  char *param3_00;
  ulong uVar13;
  long lVar14;
  float fVar15;
  long local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar14 = *(long *)(param_1 + 0x10);
  uVar4 = 0;
  if ((param_2[1] != -0x340d631b7bddd9bb) && (param_2[1] != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0));
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  uVar4 = 0;
  if ((param_2[0x36] != -0x340d631b7bddd9bb) && (param_2[0x36] != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x36);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  uVar4 = 0;
  if ((param_2[0x39] != -0x340d631b7bddd9bb) && (param_2[0x39] != 0)) {
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x39);
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  *(long *)(param_1 + 0x98) = param_2[2];
  *(long *)(param_1 + 0xa8) = param_2[6];
  *(long *)(param_1 + 0xb0) = param_2[9];
  *(long *)(param_1 + 0xb8) = param_2[0x37];
  *(long *)(param_1 + 0xc0) = param_2[0x3a];
  *(long *)(param_1 + 200) = param_2[0x3c];
  *(long *)(param_1 + 0x110) = param_2[0x32];
  uVar4 = 0;
  if ((param_2[0x33] != -0x340d631b7bddd9bb) && (param_2[0x33] != 0)) {
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x33);
  }
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  uVar4 = 0;
  if ((param_2[0x34] != -0x340d631b7bddd9bb) && (param_2[0x34] != 0)) {
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x34);
  }
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  *(long *)(param_1 + 0xd0) = param_2[0x35];
  *(long *)(param_1 + 0xd8) = param_2[0x3d];
  *(long *)(param_1 + 0xe0) = param_2[0x3e];
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar13 = 0xcbf29ce484222645;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  param3_00 = (char *)((long)param_2 + 0xc2);
  if (*param3_00 == '\0') {
LAB_00a0fcbc:
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  else {
    snprintf((char *)&local_c8,100,"pane_%s",param3_00);
    if ((byte)local_c8 == 0) goto LAB_00a0fcbc;
    uVar11 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar11 = (uVar11 ^ (byte)local_c8) * 0x100000001b3;
      local_c8._0_1_ = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while ((byte)local_c8 != 0);
    if (uVar11 == 0xcbf29ce484222645 || uVar11 == 0) goto LAB_00a0fcbc;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar11 = 0xcbf29ce484222645;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (*param3_00 != '\0') {
      snprintf((char *)&local_c8,100,"pane_%s",param3_00);
      uVar11 = 0xcbf29ce484222645;
      if ((byte)local_c8 != 0) {
        uVar11 = 0xcbf29ce484222645;
        pbVar10 = (byte *)((ulong)&local_c8 | 1);
        do {
          uVar11 = (uVar11 ^ (byte)local_c8) * 0x100000001b3;
          local_c8._0_1_ = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while ((byte)local_c8 != 0);
      }
    }
    local_c8 = uVar11;
    uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),&local_c8);
    *(undefined8 *)(param_1 + 0x198) = uVar4;
  }
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*param3_00 == '\0') {
    snprintf((char *)&local_c8,100,"pane_%s","P_sick_00");
    if ((byte)local_c8 != 0) goto LAB_00a0fd34;
LAB_00a0fd60:
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  else {
    snprintf((char *)&local_c8,100,"pane_%s_%s",param3_00,"P_sick_00");
    if ((byte)local_c8 == 0) goto LAB_00a0fd60;
LAB_00a0fd34:
    uVar11 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar11 = (uVar11 ^ (byte)local_c8) * 0x100000001b3;
      local_c8._0_1_ = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while ((byte)local_c8 != 0);
    if (uVar11 == 0xcbf29ce484222645 || uVar11 == 0) goto LAB_00a0fd60;
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (*param3_00 == '\0') {
      snprintf((char *)&local_c8,100,"pane_%s","P_sick_00");
      uVar11 = local_c8;
    }
    else {
      snprintf((char *)&local_c8,100,"pane_%s_%s",param3_00,"P_sick_00");
      uVar11 = local_c8;
    }
    bVar2 = (byte)local_c8 != '\0';
    local_c8 = 0xcbf29ce484222645;
    if (bVar2) {
      uVar11 = uVar11 & 0xff;
      local_c8 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)&local_c8 | 1);
      do {
        local_c8 = (local_c8 ^ uVar11) * 0x100000001b3;
        bVar1 = *pbVar10;
        uVar11 = (ulong)bVar1;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
    }
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar14 + 0x1b0),&local_c8);
    *(undefined8 *)(param_1 + 0x1a0) = uVar4;
  }
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  param3 = (char *)((long)param_2 + 0x127);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*(char *)((long)param_2 + 0x127) != '\0') {
    snprintf((char *)&local_c8,100,"pane_%s",param3);
    if ((byte)local_c8 != 0) {
      uVar11 = 0xcbf29ce484222645;
      pbVar10 = (byte *)((ulong)&local_c8 | 1);
      do {
        uVar11 = (uVar11 ^ (byte)local_c8) * 0x100000001b3;
        local_c8._0_1_ = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while ((byte)local_c8 != 0);
      if (uVar11 != 0xcbf29ce484222645 && uVar11 != 0) {
        local_68 = 0;
        local_78 = 0;
        uStack_70 = 0;
        uVar11 = 0xcbf29ce484222645;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        if (*param3 != '\0') {
          snprintf((char *)&local_c8,100,"pane_%s",param3);
          uVar11 = 0xcbf29ce484222645;
          if ((byte)local_c8 != 0) {
            uVar11 = 0xcbf29ce484222645;
            pbVar10 = (byte *)((ulong)&local_c8 | 1);
            do {
              uVar11 = (uVar11 ^ (byte)local_c8) * 0x100000001b3;
              local_c8._0_1_ = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while ((byte)local_c8 != 0);
          }
        }
        local_c8 = uVar11;
        uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),&local_c8);
        *(undefined8 *)(param_1 + 0x1b0) = uVar4;
        goto LAB_00a0ff14;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
LAB_00a0ff14:
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  if (*param3 == '\0') {
    snprintf((char *)&local_c8,100,"anime_%s","sick");
    bVar1 = (byte)local_c8;
  }
  else {
    snprintf((char *)&local_c8,100,"anime_%s_%s",param3,"sick");
    bVar1 = (byte)local_c8;
  }
  uVar11 = 0xcbf29ce484222645;
  if (bVar1 != 0) {
    uVar11 = 0xcbf29ce484222645;
    pbVar10 = (byte *)((ulong)&local_c8 | 1);
    do {
      uVar11 = (uVar11 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar10;
      pbVar10 = pbVar10 + 1;
    } while (bVar1 != 0);
  }
  *(ulong *)(param_1 + 0x1b8) = uVar11;
  *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)((long)param_2 + 0x126);
  *(undefined1 *)(param_1 + 0x1a9) = *(undefined1 *)((long)param_2 + 0x18b);
  if (param_2[3] != 0) {
    FUN_0077eb10(*param_2,param_2 + 3,*(undefined8 *)(param_1 + 0x128));
  }
  if (param_2[7] != 0) {
    FUN_0077eb10(*param_2,param_2 + 7,*(undefined8 *)(param_1 + 0x130));
  }
  if (param_2[8] != 0) {
    FUN_0077eb10(*param_2,param_2 + 8,*(undefined8 *)(param_1 + 0x138));
  }
  if (param_2[10] != 0) {
    FUN_0077eb10(*param_2,param_2 + 10,*(undefined8 *)(param_1 + 0x140));
  }
  if (param_2[0x38] != 0) {
    FUN_0077eb10(*param_2,param_2 + 0x38,*(undefined8 *)(param_1 + 0x148));
  }
  if (param_2[0x3b] != 0) {
    FUN_0077eb10(*param_2,param_2 + 0x3b,*(undefined8 *)(param_1 + 0x150));
  }
  sVar5 = strlen((char *)(param_2 + 0xb));
  if (sVar5 != 0) {
    plVar6 = (long *)FUN_00ff93d0(param_1);
    plVar7 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0xd8,8);
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar6;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar12 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(param_1 + 0x10);
    plVar7[0xc] = 0;
    plVar7[0xd] = 0;
    puVar3 = PTR_DAT_02718e98;
    plVar7[10] = 0;
    plVar7[0xb] = 0;
    plVar7[0x10] = 0;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[2] = lVar9;
    plVar7[3] = 0;
    plVar7[0x19] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x17] = 0;
    plVar7[0x18] = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    *plVar7 = (long)(puVar3 + 0x10);
    plVar7[1] = lVar12;
    plVar7[0xe] = 0;
    plVar7[0xf] = -0x100000000;
    plVar7[0x13] = 0;
    plVar7[0x14] = 0;
    plVar7[0x11] = 0;
    plVar7[0x12] = 0;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    FUN_00a12030(plVar7);
    lVar8 = *(long *)(param_1 + 0x170);
    *(long **)(param_1 + 0x170) = plVar7;
    if (lVar8 != 0) {
      (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
                (*(long **)(param_1 + 0x178),lVar8,*(undefined8 *)(param_1 + 0x180),
                 *(undefined8 *)(param_1 + 0x188));
      plVar7 = *(long **)(param_1 + 0x170);
    }
    *(long **)(param_1 + 0x178) = plVar6;
    *(undefined8 *)(param_1 + 0x180) = 0xd8;
    *(undefined8 *)(param_1 + 0x188) = 8;
    FUN_00a12040(plVar7,param_2 + 0xb);
  }
  *(char *)(param_1 + 400) = (char)param_2[0x18];
  *(undefined1 *)(param_1 + 0x191) = *(undefined1 *)((long)param_2 + 0xc1);
  lVar8 = param_2[4];
  if ((lVar8 != -0x340d631b7bddd9bb) && (lVar8 != 0)) {
    local_d0 = *param_2;
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
    }
    FUN_008c4e70(lVar14,param_2 + 4,&local_d0,param_2 + 5,10);
    if (local_d0 != 0) {
      (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      local_d0 = 0;
    }
  }
  if (((param_2[0x45] != -0x340d631b7bddd9bb) && (param_2[0x45] != 0)) &&
     (lVar8 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x45), lVar8 != 0)) {
    fVar15 = *(float *)(lVar8 + 0x54);
    if (*(float *)(lVar8 + 0x54) <= *(float *)(lVar8 + 0x50)) {
      fVar15 = *(float *)(lVar8 + 0x50);
    }
    *(float *)(param_1 + 0x118) = fVar15;
  }
  if (((param_2[0x4f] != -0x340d631b7bddd9bb) && (param_2[0x4f] != 0)) &&
     (lVar8 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),param_2 + 0x4f), lVar8 != 0)) {
    fVar15 = *(float *)(lVar8 + 0x54);
    if (*(float *)(lVar8 + 0x54) <= *(float *)(lVar8 + 0x50)) {
      fVar15 = *(float *)(lVar8 + 0x50);
    }
    *(float *)(param_1 + 0x11c) = fVar15;
  }
  FUN_016a84e0(*(undefined8 *)(param_1 + 0x158),param_2 + 0x3f);
  lVar8 = *(long *)(param_1 + 0x160);
  lVar12 = param_2[0x4e];
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar8 + 0x58);
  *(long *)(lVar8 + 0x58) = lVar12;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  lVar12 = param_2[0x4f];
  lVar9 = param_2[0x50];
  *(char *)(lVar8 + 0x70) = (char)param_2[0x51];
  *(long *)(lVar8 + 0x60) = lVar12;
  *(long *)(lVar8 + 0x68) = lVar9;
  if ((*(char *)(param_1 + 0x1a8) != '\0') && (sVar5 = strlen(param3_00), sVar5 != 0)) {
    local_68 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    if (*param3_00 == '\0') {
      snprintf((char *)&local_c8,100,"anime_%s","keep");
    }
    else {
      snprintf((char *)&local_c8,100,"anime_%s_%s",param3_00,"keep");
    }
    if ((byte)local_c8 != '\0') {
      local_c8 = local_c8 & 0xff;
      pbVar10 = (byte *)((ulong)&local_c8 | 1);
      do {
        uVar13 = (uVar13 ^ local_c8) * 0x100000001b3;
        bVar1 = *pbVar10;
        local_c8 = (ulong)bVar1;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 != 0);
    }
    local_c8 = uVar13;
    FUN_00ffd010(lVar14,&local_c8);
  }
  return;
}


