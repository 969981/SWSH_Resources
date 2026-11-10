/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010779a0; name: FUN_010779a0
 */


void FUN_010779a0(long *param_1)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  long *plVar4;
  undefined1 *puVar5;
  long **pplVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  char cVar10;
  byte bVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  long *plVar16;
  long *plVar17;
  undefined1 *local_110;
  code *local_108;
  long *local_100;
  undefined1 *local_f8;
  long *local_f0;
  long **local_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  long local_c8;
  undefined4 local_c0;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_5c [4];
  long local_58;
  
  cVar1 = *(char *)(*(long *)(*param_1 + 0x1f8) + 0x58);
  local_78 = (long *)param_1[1];
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_90 = (long *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_5c[0] = cVar1 == '\x01';
  cVar10 = FUN_0106f4c0(**(undefined4 **)(*param_1 + 0x60),cVar1);
  puVar7 = PTR_DAT_02710860;
  cVar3 = cVar1 == '\x01';
  if (cVar10 != '\0') {
    bVar15 = 0;
    plVar16 = (long *)0x0;
    plVar17 = (long *)0x0;
    while( true ) {
      plVar9 = local_78;
      local_100 = (long *)param_1[1];
      local_f0 = (long *)((ulong)local_f0 & 0xffffffff00000000);
      local_110 = (undefined1 *)0x0;
      local_108 = (code *)0x0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0x3f800000;
      local_f8 = (undefined1 *)0x0;
      local_e8 = (long **)0x0;
      local_e0 = local_100;
      if (plVar17 < plVar16) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        puVar5 = local_110;
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar9;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        local_110 = (undefined1 *)0x0;
        *plVar17 = (long)puVar5;
        plVar17[1] = (long)local_108;
        *(undefined4 *)(plVar17 + 4) = 0;
        plVar17[2] = (long)local_100;
        plVar17[3] = 0;
        local_108 = (code *)0x0;
        plVar17[5] = (long)local_e8;
        plVar17[6] = (long)local_e0;
        plVar17[7] = 0;
        *(undefined4 *)(plVar17 + 8) = 0;
        plVar17[9] = local_c8;
        *(undefined4 *)(plVar17 + 10) = local_c0;
        if (local_c8 != 0) {
          uVar14 = plVar17[1];
          uVar13 = *(ulong *)((long)local_e8 + 8);
          if ((uVar14 - 1 & uVar14) == 0) {
            uVar13 = uVar14 - 1 & uVar13;
          }
          else if (uVar14 <= uVar13) {
            uVar2 = 0;
            if (uVar14 != 0) {
              uVar2 = uVar13 / uVar14;
            }
            uVar13 = uVar13 - uVar2 * uVar14;
          }
          *(long **)(*plVar17 + uVar13 * 8) = plVar17 + 5;
          local_e8 = (long **)0x0;
          local_c8 = 0;
        }
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        local_88 = local_88 + 0xb;
        puVar5 = local_110;
        pplVar6 = local_e8;
      }
      else {
        FUN_01078310(&local_90,&local_110);
        puVar5 = local_110;
        pplVar6 = local_e8;
      }
      while (pplVar6 != (long **)0x0) {
        lVar12 = (long)*pplVar6;
        local_110 = puVar5;
        (**(code **)(*local_e0 + 0x18))(local_e0,pplVar6,0x18,8);
        puVar5 = local_110;
        pplVar6 = (long **)lVar12;
      }
      local_110 = (undefined1 *)0x0;
      if (puVar5 != (undefined1 *)0x0) {
        (**(code **)(*local_100 + 0x18))(local_100,puVar5,(long)local_108 << 3,8);
      }
      bVar15 = bVar15 + 1;
      bVar11 = FUN_0106f4c0(**(undefined4 **)(*param_1 + 0x60),cVar1);
      if (bVar11 <= bVar15) break;
      plVar16 = local_80;
      plVar17 = local_88;
    }
    cVar3 = local_5c[0];
  }
  if (**(int **)(*param_1 + 0x60) == 1 && cVar3 != '\0') {
    uVar13 = FUN_0106f510(7,*(undefined1 *)(*(long *)(*param_1 + 0x1f8) + 0x58));
    FUN_01077ed0(param_1,7,0x67c6affac77e74ab,0,local_90 + (uVar13 & 0xff) * 0xb);
  }
  local_e8 = &local_90;
  local_e0 = (long *)local_5c;
  local_110 = &LAB_01078d30;
  local_108 = FUN_01078f40;
  local_100 = (long *)&LAB_01078f50;
  local_f8 = &LAB_01078f70;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x78);
  local_f0 = param_1;
  if (lVar12 == 0) {
    FUN_00c58c10(&local_58,0);
  }
  else {
    plVar16 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar16 + 0x10))(plVar16);
    FUN_00c58c10(&local_58,lVar12);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  FUN_00cc4500(local_58,cVar1,&local_110);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  pcVar8 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = (long *)0x0;
    local_f8 = (undefined1 *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar8)(&local_f0);
  }
  plVar16 = local_90;
  plVar17 = local_88;
  if (local_90 != (long *)0x0) {
    while (plVar9 = plVar17, plVar9 != plVar16) {
      plVar17 = plVar9 + -0xb;
      plVar4 = (long *)plVar9[-6];
      while (plVar4 != (long *)0x0) {
        lVar12 = *plVar4;
        (**(code **)(*(long *)plVar9[-5] + 0x18))((long *)plVar9[-5],plVar4,0x18,8);
        plVar4 = (long *)lVar12;
      }
      lVar12 = *plVar17;
      *plVar17 = 0;
      if (lVar12 != 0) {
        (**(code **)(*(long *)plVar9[-9] + 0x18))((long *)plVar9[-9],lVar12,plVar9[-10] << 3,8);
      }
    }
    local_88 = plVar16;
    (**(code **)(*local_78 + 0x18))(local_78,local_90,(long)local_80 - (long)local_90,8);
  }
  return;
}


