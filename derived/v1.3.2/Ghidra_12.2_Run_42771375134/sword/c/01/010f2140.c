/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f2140; name: FUN_010f2140
 */


undefined8 FUN_010f2140(long param_1,int param_2,long param_3,ulong param_4)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  void *__src;
  long lVar16;
  long local_618;
  long local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined1 auStack_5a8 [724];
  int local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  
  plVar10 = *(long **)(param_1 + 8);
  local_2d4 = param_2;
  puVar5 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x30,8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010f272c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  puVar5[4] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  puVar5[2] = 0;
  puVar5[3] = plVar10;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  puVar12 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 **)(param_1 + 0x80) = puVar5;
  if (puVar12 != (undefined8 *)0x0) {
    plVar13 = (long *)*puVar12;
    if (plVar13 != (long *)0x0) {
      if ((long *)puVar12[1] == plVar13) {
        plVar9 = plVar13;
      }
      else {
        plVar9 = (long *)puVar12[1];
        do {
          plVar15 = plVar9 + -1;
          if (*plVar15 != 0) {
            (**(code **)(*(long *)(*plVar15 + 0x48) + 0x18))();
            plVar9[-1] = 0;
          }
          plVar9 = plVar15;
        } while (plVar13 != plVar15);
        plVar9 = (long *)*puVar12;
      }
      puVar12[1] = plVar13;
      (**(code **)(*(long *)puVar12[3] + 0x18))
                ((long *)puVar12[3],plVar9,puVar12[2] - (long)plVar9,8);
    }
    (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
              (*(long **)(param_1 + 0x88),puVar12,*(undefined8 *)(param_1 + 0x90),
               *(undefined8 *)(param_1 + 0x98));
  }
  *(long **)(param_1 + 0x88) = plVar10;
  *(undefined8 *)(param_1 + 0x90) = 0x30;
  uVar11 = 3;
  *(undefined8 *)(param_1 + 0x98) = 8;
  if (((param_3 != 0) && (0x2cf < param_4)) && (param_4 % 0x2d0 == 0)) {
    lVar6 = *(long *)(*(long *)PTR_DAT_02710798 + 0x210);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_008d4270();
    cVar3 = FUN_008d4270();
    uVar7 = 0;
    uVar14 = 1;
    do {
      while( true ) {
        __src = (void *)(param_3 + uVar7 * 0x2d0);
        if (((1 << (cVar3 == '-') & (uint)*(ushort *)((long)__src + 0xe)) != 0) &&
           ((*(char *)(param_3 + uVar7 * 0x2d0 + 0x13) == '\0' ||
            (uVar7 = FUN_015497f0(lVar6,__src), (uVar7 & 1) == 0)))) break;
LAB_010f23ac:
        bVar1 = param_4 / 0x2d0 <= uVar14;
        uVar7 = uVar14;
        uVar14 = (ulong)((int)uVar14 + 1);
        if (bVar1) goto LAB_010f26e4;
      }
      local_5b8 = 0;
      uStack_5b0 = 0;
      local_610 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_5d8 = 0;
      uStack_5d0 = 0;
      local_5e8 = 0;
      uStack_5e0 = 0;
      local_5f8 = 0;
      uStack_5f0 = 0;
      local_608 = 0;
      uStack_600 = 0;
      memcpy(auStack_5a8,__src,0x2d0);
      iVar4 = FUN_011b5db0(local_2d4 != 0,*(undefined8 *)(param_1 + 8),&local_610,auStack_5a8,0x2d0)
      ;
      if (iVar4 != 0) {
        if (iVar4 != -0x7fffffff) goto LAB_010f23ac;
        uVar11 = 1;
        goto joined_r0x010f2724;
      }
      local_618 = FUN_010f3e90(&local_2d0,*(undefined8 *)(param_1 + 8),&local_2d4,&local_610);
      if (local_618 != 0) {
        (**(code **)(*(long *)(local_618 + 0x48) + 0x10))();
      }
      lVar16 = *(long *)(param_1 + 0x80);
      plVar10 = *(long **)(lVar16 + 8);
      if (plVar10 == *(long **)(lVar16 + 0x10)) {
        FUN_010f3fa0(lVar16,&local_618);
        lVar16 = local_618;
      }
      else {
        uVar11 = *(undefined8 *)(lVar16 + 0x18);
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_010f272c;
        *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        *plVar10 = local_618;
        if (local_618 != 0) {
          (**(code **)(*(long *)(local_618 + 0x48) + 0x10))();
        }
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        *(long *)(lVar16 + 8) = *(long *)(lVar16 + 8) + 8;
        lVar16 = local_618;
      }
      local_618 = lVar16;
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      if ((*(char *)(lVar16 + 0x60) != '\0') && (*(char *)(lVar16 + 0x68) != '\0')) {
        uVar2 = *(undefined1 *)(lVar16 + 0xe9);
        if ((*(int *)(lVar16 + 100) == 3) && (*(byte *)(lVar16 + 0xf4) < 0x30)) {
                    /* WARNING: Subroutine does not return */
          memset(&local_2d0,0,0x268);
        }
        if (*(int *)(lVar16 + 100) == 4) {
          local_2b8 = 0;
          local_2c0 = 0;
          local_2c8 = 0;
          local_2d0 = 0;
          FUN_01544f50(&local_2d0);
          if ((int)local_2d0 == *(int *)(lVar16 + 0xf0)) {
            switch(uVar2) {
            case 1:
              if (local_2d0._4_1_ == '\x02') {
                local_2d0._0_5_ = CONCAT14(4,(int)local_2d0);
              }
              break;
            case 2:
              if (local_2d0._5_1_ == '\x02') {
                local_2d0._0_6_ = CONCAT15(4,(undefined5)local_2d0);
              }
              break;
            case 3:
              if (local_2d0._6_1_ == '\x02') {
                local_2d0._0_7_ = CONCAT16(4,(undefined6)local_2d0);
              }
              break;
            case 4:
              if (local_2d0._7_1_ == '\x02') {
                local_2d0 = CONCAT17(4,(undefined7)local_2d0);
              }
              break;
            case 5:
              if ((char)local_2c8 == '\x02') {
                local_2c8 = CONCAT71(local_2c8._1_7_,4);
              }
            }
            FUN_01544fd0(&local_2d0);
          }
        }
      }
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
      if (local_618 != 0) {
        (**(code **)(*(long *)(local_618 + 0x48) + 0x18))();
        local_618 = 0;
      }
      bVar1 = uVar14 < param_4 / 0x2d0;
      uVar7 = uVar14;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar1);
LAB_010f26e4:
    uVar11 = 0;
joined_r0x010f2724:
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  return uVar11;
}


