/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e405c0; name: FUN_00e405c0
 */


void FUN_00e405c0(long *param_1,byte param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  undefined8 local_28;
  
  *(byte *)(param_1 + 0x9d) = param_2 & 1;
  *(byte *)(param_1 + 0x43) = param_2 & 1;
  puVar5 = PTR_DAT_0271ed88;
  lVar12 = param_1[0x9c];
  if ((param_2 & 1) == 0) {
    if (lVar12 == 0) {
      return;
    }
    if (*(int *)(lVar12 + 0x54) == 0) {
      return;
    }
    lVar12 = param_1[0x9c];
    if ((lVar12 == 0) || (*(int *)(lVar12 + 0x54) == 0)) {
LAB_00e40748:
      lVar15 = 0;
    }
    else {
      piVar1 = (int *)(lVar12 + 0x54);
      puVar13 = PTR_DAT_0271ed90;
      iVar7 = *(int *)(lVar12 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar12 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar13 = PTR_DAT_0271ed90;
            if (iVar6 != 0) {
              uVar11 = FUN_0156b190();
              *(undefined8 *)PTR_DAT_0271ed90 = uVar11;
              __cxa_guard_release(puVar5);
              puVar13 = PTR_DAT_0271ed90;
            }
          }
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00e40748;
            if (plVar9 == (long *)puVar13) break;
            plVar9 = (long *)*plVar9;
          }
          iVar6 = *piVar1;
          if (iVar6 != iVar7) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = 0;
            if (*(long *)(lVar12 + 0x60) != 0) {
              lVar15 = *(long *)(lVar12 + 0x60) + -0x50;
            }
            goto LAB_00e4074c;
          }
          lVar15 = 0;
          iVar7 = iVar6;
          if (iVar6 == 0) goto LAB_00e4074c;
        }
        ClearExclusiveLocal();
        lVar15 = 0;
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00e4074c:
    FUN_007101c0(lVar15 + 0xa0);
    FUN_00a92cd0(extraout_var,0,0);
    *(undefined1 *)(lVar15 + 0xc0) = 1;
    *(undefined8 *)(lVar15 + 0xa8) = extraout_var_01;
    *(ulong *)(lVar15 + 0xa0) = CONCAT44(extraout_var_00,extraout_s0);
    uVar10 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((uVar10 & 1) != 0) {
      local_140 = (undefined *)0xebfe8d6c9f1d10ec;
      FUN_00dc0720(param_1,&local_140);
      local_140 = (undefined *)0x802707f1102138b4;
      FUN_00dc0720(param_1,&local_140);
      FUN_00794700(param_1[0xca]);
    }
    if (lVar15 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    return;
  }
  if (lVar12 == 0) {
    return;
  }
  if (*(int *)(lVar12 + 0x54) == 0) {
    return;
  }
  if ((param_1[0x9c] == 0) ||
     (puVar14 = *(undefined8 **)(param_1[0x9c] + 0x60), puVar14 == (undefined8 *)0x0)) {
    plVar9 = (long *)0x0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)*puVar14)(puVar14);
    if (((*PTR_DAT_0271ed88 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0271ed88), iVar7 != 0)) {
      uVar11 = FUN_0156b190();
      *(undefined8 *)PTR_DAT_0271ed90 = uVar11;
      __cxa_guard_release(PTR_DAT_0271ed88);
    }
    plVar9 = (long *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      do {
        if (puVar8 == (undefined8 *)PTR_DAT_0271ed90) {
          plVar9 = puVar14 + -10;
          goto LAB_00e407e8;
        }
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      plVar9 = (long *)0x0;
    }
  }
LAB_00e407e8:
  param_1[0x17] = plVar9[0x17];
  param_1[0x16] = plVar9[0x16];
  *(undefined1 *)(param_1 + 0x18) = 1;
  lVar12 = plVar9[0x14];
  lVar15 = plVar9[0x15];
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x14] = lVar12;
  param_1[0x15] = lVar15;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  (**(code **)(*plVar9 + 0x180))(0,plVar9,PTR_DAT_0271e8b0);
  uVar10 = (**(code **)(*param_1 + 0x70))(param_1);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x4dc) == '\x02') {
    local_140 = (undefined *)0x802707f1102138b4;
    FUN_00dc04c0(param_1,&local_140,1,0,0);
    lVar12 = param_1[0xca];
    local_28 = 0x93ee06b823d4022b;
    FUN_00dc0200(&local_140,param_1,&local_28);
    FUN_00794370(lVar12,&local_140);
    local_140 = PTR_DAT_027164e0 + 0x10;
    if (local_138 != 0) goto LAB_00e40950;
  }
  else {
    if (*(char *)((long)param_1 + 0x4dc) != '\x01') {
      return;
    }
    local_140 = (undefined *)0xebfe8d6c9f1d10ec;
    FUN_00dc04c0(param_1,&local_140,1,0,0);
    lVar12 = param_1[0xca];
    local_28 = 0x9124b5f56af36f93;
    FUN_00dc0200(&local_140,param_1,&local_28);
    FUN_00794370(lVar12,&local_140);
    local_140 = PTR_DAT_027164e0 + 0x10;
    if (local_138 == 0) {
      local_138 = 0;
      pcVar4 = local_a8;
      goto joined_r0x00e4098c;
    }
LAB_00e40950:
    FUN_006e2100(local_138,&local_140);
    lVar12 = local_138;
    local_138 = 0;
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
      pcVar4 = local_a8;
      goto joined_r0x00e4098c;
    }
  }
  local_138 = 0;
  pcVar4 = local_a8;
joined_r0x00e4098c:
  local_a8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar4)(auStack_90);
  }
  pcVar4 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar4)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    local_138 = 0;
  }
  FUN_007946a0(param_1[0xca],1);
  return;
}


