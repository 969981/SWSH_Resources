/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffc4e0; name: FUN_00ffc4e0
 */


undefined8 FUN_00ffc4e0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long local_e8;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  
  puVar4 = PTR_DAT_02710860;
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    return 1;
  }
  pcVar12 = *(code **)(param_1 + 0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00ffcacc;
  *(code **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = pcVar12;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x200,0x10);
  if (lVar6 == 0) {
    (**(code **)(*(long *)pcVar12 + 0xb8))(pcVar12);
  }
  FUN_0167e1b0(lVar6,pcVar12,param_1 + 0xa0);
  *(code **)(lVar6 + 8) = pcVar12;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x200;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar5 = param_1 + 0x1c0;
  plVar1 = (long *)(param_1 + 0x1b0);
  FUN_00784d00(lVar5,&DAT_02162724,PTR_DAT_027162c0);
  local_e0 = (undefined1 *)0x438078000000000;
  FUN_00784d30(lVar5,&local_e0);
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 0xc90) != 0)) {
    local_e0 = &LAB_00fff250;
    local_d8 = FUN_00fff390;
    local_d0 = FUN_00fff3a0;
    local_c8 = &LAB_00fff3b0;
    pcVar11 = *(code **)(lVar6 + 0x178);
    alStack_c0[0] = param_1;
    if (pcVar11 == (code *)0x0) {
LAB_00ffc690:
      (*local_d0)(alStack_c0,lVar6 + 400);
      *(undefined1 **)(lVar6 + 0x188) = local_c8;
      *(code **)(lVar6 + 0x178) = local_d8;
      *(code **)(lVar6 + 0x180) = local_d0;
      *(undefined8 *)(lVar6 + 0x170) = local_e0;
    }
    else {
      *(undefined8 *)(lVar6 + 0x180) = 0;
      *(undefined8 *)(lVar6 + 0x188) = 0;
      *(undefined8 *)(lVar6 + 0x170) = 0;
      *(undefined8 *)(lVar6 + 0x178) = 0;
      (*pcVar11)(lVar6 + 400);
      if (local_d0 != (code *)0x0) goto LAB_00ffc690;
    }
    pcVar11 = local_d8;
    if (local_d8 != (code *)0x0) {
      local_d0 = (code *)0x0;
      local_c8 = (undefined1 *)0x0;
      local_e0 = (undefined1 *)0x0;
      local_d8 = (code *)0x0;
      (*pcVar11)(alStack_c0);
    }
  }
  FUN_00d98680(&local_e0,lVar6,pcVar12);
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
    *plVar1 = 0;
  }
  puVar7 = local_e0;
  *plVar1 = (long)local_e0;
  FUN_0167c600(local_e0,0);
  lVar10 = *(long *)(puVar7 + 0x188);
  if (lVar10 != 0) {
    lVar10 = lVar10 << 4;
    plVar15 = (long *)(*(long *)(puVar7 + 0x180) + 8);
    do {
      while (lVar13 = *plVar15, lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        FUN_007868f0(lVar13,lVar5);
        (**(code **)(*plVar14 + 0x18))(plVar14);
        lVar10 = lVar10 + -0x10;
        plVar15 = plVar15 + 2;
        if (lVar10 == 0) goto LAB_00ffc784;
      }
      FUN_007868f0(0,lVar5);
      lVar10 = lVar10 + -0x10;
      plVar15 = plVar15 + 2;
    } while (lVar10 != 0);
  }
LAB_00ffc784:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (*(char *)(param_1 + 0x491) != '\0') {
    lVar5 = FUN_00fff3c0(&local_e0,pcVar12,plVar1);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x2a0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2a0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x2a0) = 0;
    }
    *(long *)(param_1 + 0x2a0) = lVar5;
    local_e8 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
    }
    FUN_016ca630(&local_e0,pcVar12,pcVar12,&local_e8,param_1 + 0x2b0);
    if (*(long *)(param_1 + 0x3c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x3c0) = 0;
    }
    puVar7 = local_e0;
    local_e0 = (undefined1 *)0x0;
    *(undefined1 **)(param_1 + 0x3c0) = puVar7;
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))((long *)(local_e8 + 0x48));
      local_e8 = 0;
      puVar7 = *(undefined1 **)(param_1 + 0x3c0);
    }
    FUN_016d2150(puVar7);
    if (*(long *)(param_1 + 0x3c0) != 0) {
      FUN_016d20d0();
    }
  }
  puVar8 = (undefined8 *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0xa0,0x10);
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (*(ulong *)(lVar5 + 0x80) < 0x10) {
    *(code **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = pcVar12;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar8[6] = 0;
    *puVar8 = pcVar12;
    puVar8[1] = 0xf0f0f0f0f0f0f0;
    puVar8[8] = pcVar12;
    puVar8[9] = 0xf0f0f0f0f0f0f0;
    puVar8[0xe] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x10] = 0;
    uVar9 = (**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x1100,0x10);
    FUN_00fff4b0(puVar8 + 8,uVar9,0x10,puVar8[0x10] + puVar8[0x11] * 0x110,0,0);
    local_d0 = (code *)&DAT_000000a0;
    local_c8 = (undefined1 *)0x10;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    local_e0 = (undefined1 *)0x0;
    lVar5 = *(long *)(param_1 + 0x450);
    *(undefined8 **)(param_1 + 0x450) = puVar8;
    puVar8 = (undefined8 *)(param_1 + 0x458);
    local_d8 = pcVar12;
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x460) = 0xa0;
      *(undefined8 *)(param_1 + 0x468) = 0x10;
      *puVar8 = pcVar12;
      local_e0 = (undefined1 *)0x0;
    }
    else {
      FUN_00ffaed0(puVar8);
      puVar7 = local_e0;
      *puVar8 = local_d8;
      *(code **)(param_1 + 0x460) = local_d0;
      *(undefined1 **)(param_1 + 0x468) = local_c8;
      local_e0 = (undefined1 *)0x0;
      if (puVar7 != (undefined1 *)0x0) {
        FUN_00ffaed0(&local_d8);
      }
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0xa0,0x10);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar5 + 0x80) < 0x10) {
      *(code **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = pcVar12;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar8 = pcVar12;
      puVar8[1] = 0xf0f0f0f0f0f0f0;
      puVar8[6] = 0;
      puVar8[8] = pcVar12;
      puVar8[9] = 0xf0f0f0f0f0f0f0;
      puVar8[0xe] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      uVar9 = (**(code **)(*(long *)pcVar12 + 0x10))(pcVar12,0x1100,0x10);
      FUN_00fff4b0(puVar8 + 8,uVar9,0x10,puVar8[0x10] + puVar8[0x11] * 0x110,0,0);
      local_d0 = (code *)0xa0;
      local_c8 = (undefined1 *)0x10;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      local_e0 = (undefined1 *)0x0;
      lVar5 = *(long *)(param_1 + 0x470);
      puVar2 = (undefined8 *)(param_1 + 0x478);
      *(undefined8 **)(param_1 + 0x470) = puVar8;
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x480) = 0xa0;
        *(undefined8 *)(param_1 + 0x488) = 0x10;
        *puVar2 = pcVar12;
        local_e0 = (undefined1 *)0x0;
        cVar3 = *(char *)(param_1 + 0x88);
        lVar5 = *(long *)(param_1 + 0x1b0);
        local_d8 = pcVar12;
      }
      else {
        local_d8 = pcVar12;
        FUN_00ffaed0(puVar2);
        puVar7 = local_e0;
        *puVar2 = local_d8;
        *(code **)(param_1 + 0x480) = local_d0;
        *(undefined1 **)(param_1 + 0x488) = local_c8;
        local_e0 = (undefined1 *)0x0;
        if (puVar7 != (undefined1 *)0x0) {
          FUN_00ffaed0(&local_d8);
        }
        cVar3 = *(char *)(param_1 + 0x88);
        lVar5 = *(long *)(param_1 + 0x1b0);
      }
      if (cVar3 == '\0') {
        if (lVar5 != 0) {
          FUN_0167cd30(lVar5,0);
        }
      }
      else if (lVar5 != 0) {
        FUN_0167cd30(lVar5,1);
        return 1;
      }
      return 1;
    }
  }
LAB_00ffcacc:
                    /* WARNING: Subroutine does not return */
  abort();
}


