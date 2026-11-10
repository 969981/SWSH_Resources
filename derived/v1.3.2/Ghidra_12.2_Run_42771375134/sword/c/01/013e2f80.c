/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e2f80; name: FUN_013e2f80
 */


void FUN_013e2f80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  long *local_150 [13];
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 *local_b0 [12];
  
  local_d8 = param_2;
  uVar4 = FUN_013e1c30();
  lVar10 = *(long *)(param_1 + 0x60);
  puVar11 = (undefined8 *)(lVar10 + 0x50);
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  plVar6 = (long *)FUN_0132d9a0();
  lVar9 = 0;
  if (plVar5 != (long *)0x0) {
    do {
      if (plVar5 == plVar6) {
        lVar9 = lVar10;
        goto LAB_013e2ff0;
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    lVar9 = 0;
  }
LAB_013e2ff0:
  local_e0 = lVar9;
  iVar3 = FUN_012ceb10(uVar4);
  uVar7 = FUN_012c91f0(2,4);
  uVar8 = FUN_012c91f0(5,0xd);
  if (((iVar3 < 2) && ((uVar7 & 1) != 0)) && ((uVar8 & 1) != 0)) {
    FUN_013e2db0(&local_e8,param_1,param_3,param_4,param_5);
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
      lVar9 = local_e0;
    }
    lVar9 = *(long *)(lVar9 + 0x358);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_150[0] = &local_e0;
    local_170 = &LAB_013e5a10;
    local_168 = FUN_013e5a70;
    local_160 = &LAB_013e5a80;
    local_158 = &LAB_013e5a90;
    local_d0 = PTR_LAB_02727690;
    local_c8 = (code *)PTR_FUN_02727698;
    local_c0 = PTR_LAB_027276a0;
    local_b8 = PTR_LAB_027276a8;
    local_b0[0] = (undefined1 *)&local_170;
    FUN_01306a00(lVar9,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined *)0x0;
      local_b8 = (undefined *)0x0;
      local_d0 = (undefined *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar1)(local_b0);
    }
    pcVar1 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar1)(local_150);
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x220);
    uVar4 = *(undefined8 *)PTR_DAT_027185f8;
    uVar7 = *(ulong *)(lVar10 + 0x38);
    lVar9 = *(long *)(lVar10 + 8);
    plVar5 = (long *)(lVar9 + (uVar7 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(lVar10 + 0x10) == lVar9) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = plVar5;
      goto LAB_013e31c8;
    }
    auVar12._8_8_ = *plVar5 + (uVar7 & 0x1ff) * 8;
    auVar12._0_8_ = plVar5;
    while (uVar7 = uVar7 + *(long *)(lVar10 + 0x40),
          auVar12._8_8_ != *(long *)(lVar9 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8
          ) {
      while( true ) {
        puVar11 = auVar12._8_8_;
        plVar5 = auVar12._0_8_;
        cVar2 = FUN_0120e630(uVar4,*puVar11);
        if (cVar2 == -3) {
          auVar12 = FUN_013e3250(lVar10,plVar5,puVar11);
        }
        else {
          auVar12._8_8_ = puVar11 + 1;
          auVar12._0_8_ = plVar5;
          if ((long)(puVar11 + 1) - *plVar5 == 0x1000) {
            auVar12._8_8_ = plVar5[1];
            auVar12._0_8_ = plVar5 + 1;
          }
        }
        uVar7 = *(ulong *)(lVar10 + 0x38);
        lVar9 = *(long *)(lVar10 + 8);
        if (*(long *)(lVar10 + 0x10) != lVar9) break;
LAB_013e31c8:
        if (auVar12._8_8_ == 0) goto LAB_013e3224;
      }
    }
LAB_013e3224:
    FUN_013e35c0(lVar10,&local_d8);
  }
  return;
}


