/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802e60; name: FUN_00802e60
 */


void FUN_00802e60(long param_1,undefined8 *param_2,long param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  byte bVar3;
  void *pvVar4;
  bool bVar5;
  undefined2 *puVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  void *local_c0;
  ulong local_b8;
  undefined2 *local_b0;
  ulong local_90;
  ulong local_88;
  undefined2 *local_80;
  byte local_78 [8];
  ulong local_70;
  void *local_68;
  
  pvVar17 = (void *)((ulong)local_78 | 1);
  puVar11 = (undefined2 *)((ulong)&local_c0 | 1);
  puVar12 = (undefined2 *)((ulong)&local_90 | 1);
  lVar18 = 0;
  plVar13 = (long *)*param_2;
  if (plVar13 != (long *)0x0) goto LAB_0080377c;
LAB_00802ec4:
  if (-1 < lVar18) {
    return;
  }
  do {
    puVar1 = (undefined4 *)(*plVar13 + lVar18 * 0x10);
    FUN_007ffba0(local_78,*puVar1);
    puVar8 = puVar12;
    switch(puVar1[1]) {
    case 0:
      uVar7 = (ulong)(local_78[0] >> 1);
      pvVar4 = pvVar17;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_70;
        pvVar4 = local_68;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        do {
          while (*(char *)((long)pvVar4 + uVar20) == '\n') {
            uVar19 = uVar20 + 1;
            FUN_00809680(param_3,(long)pvVar4 + uVar14,uVar19 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar19;
            uVar20 = uVar19;
            if (uVar19 == uVar7) goto LAB_00803434;
          }
          uVar20 = uVar20 + 1;
          uVar19 = uVar14;
        } while (uVar20 != uVar7);
      }
LAB_00803434:
      FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar7 - uVar19);
      FUN_00809680(param_3,&DAT_01d17acd,2);
      FUN_007fff50(&local_c0,*(undefined8 *)(puVar1 + 2));
      puVar8 = puVar11;
      uVar7 = (ulong)local_c0 >> 1 & 0x7f;
      if (((ulong)local_c0 & 1) != 0) {
        puVar8 = local_b0;
        uVar7 = local_b8;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        do {
          while (*(char *)((long)puVar8 + uVar20) == '\n') {
            uVar19 = uVar20 + 1;
            FUN_00809680(param_3,(long)puVar8 + uVar14,uVar19 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar19;
            uVar20 = uVar19;
            if (uVar19 == uVar7) goto LAB_00803600;
          }
          uVar20 = uVar20 + 1;
          uVar19 = uVar14;
        } while (uVar20 != uVar7);
      }
LAB_00803600:
      FUN_00809680(param_3,(long)puVar8 + uVar19,uVar7 - uVar19);
      if (((ulong)local_c0 & 1) != 0) {
        puVar8 = local_b0;
        goto LAB_0080361c;
      }
      goto LAB_00803620;
    case 1:
      uVar7 = (ulong)(local_78[0] >> 1);
      pvVar4 = pvVar17;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_70;
        pvVar4 = local_68;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        do {
          while (*(char *)((long)pvVar4 + uVar20) == '\n') {
            uVar19 = uVar20 + 1;
            FUN_00809680(param_3,(long)pvVar4 + uVar14,uVar19 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar19;
            uVar20 = uVar19;
            if (uVar19 == uVar7) goto LAB_008034d4;
          }
          uVar20 = uVar20 + 1;
          uVar19 = uVar14;
        } while (uVar20 != uVar7);
      }
LAB_008034d4:
      FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar7 - uVar19);
      FUN_00809680(param_3,&DAT_01d25145,4);
      FUN_00800790(&local_c0,puVar1[2],8);
      uVar7 = local_b8;
      pvVar4 = local_c0;
      local_88 = 0;
      local_80 = (undefined2 *)0x0;
      local_90 = 0;
      if (0xffffffffffffffef < local_b8) {
LAB_008037b0:
        local_80 = (undefined2 *)0x0;
        local_88 = 0;
        local_90 = 0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (local_b8 < 0x17) {
        local_90 = (ulong)(byte)((int)local_b8 << 1);
        puVar6 = puVar12;
        if (local_b8 != 0) goto LAB_00803558;
      }
      else {
        uVar19 = local_b8 + 0x10 & 0xfffffffffffffff0;
        puVar6 = operator_new(uVar19);
        local_90 = uVar19 | 1;
        local_88 = uVar7;
        local_80 = puVar6;
LAB_00803558:
        memcpy(puVar6,pvVar4,uVar7);
      }
      *(undefined1 *)((long)puVar6 + uVar7) = 0;
      uVar7 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        puVar8 = local_80;
        uVar7 = local_88;
      }
      if (uVar7 == 0) {
LAB_008035d8:
        uVar20 = 0;
      }
      else {
        uVar14 = 0;
        uVar19 = 0;
        do {
          while (*(char *)((long)puVar8 + uVar19) == '\n') {
            uVar20 = uVar19 + 1;
            FUN_00809680(param_3,(long)puVar8 + uVar14,uVar20 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar20;
            uVar19 = uVar20;
            if (uVar20 == uVar7) goto LAB_008035dc;
          }
          uVar19 = uVar19 + 1;
          uVar20 = uVar14;
        } while (uVar19 != uVar7);
      }
      break;
    case 2:
      uVar7 = (ulong)(local_78[0] >> 1);
      pvVar4 = pvVar17;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_70;
        pvVar4 = local_68;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        do {
          while (*(char *)((long)pvVar4 + uVar20) == '\n') {
            uVar19 = uVar20 + 1;
            FUN_00809680(param_3,(long)pvVar4 + uVar14,uVar19 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar19;
            uVar20 = uVar19;
            if (uVar19 == uVar7) goto LAB_008031d8;
          }
          uVar20 = uVar20 + 1;
          uVar19 = uVar14;
        } while (uVar20 != uVar7);
      }
LAB_008031d8:
      FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar7 - uVar19);
      FUN_00809680(param_3,&DAT_01d25145,4);
      FUN_00800790(&local_c0,*(undefined8 *)(puVar1 + 2),0x10);
      uVar7 = local_b8;
      pvVar4 = local_c0;
      local_88 = 0;
      local_80 = (undefined2 *)0x0;
      local_90 = 0;
      if (0xffffffffffffffef < local_b8) goto LAB_008037b0;
      if (local_b8 < 0x17) {
        local_90 = (ulong)(byte)((int)local_b8 << 1);
        puVar6 = puVar12;
        if (local_b8 != 0) goto LAB_0080325c;
      }
      else {
        uVar19 = local_b8 + 0x10 & 0xfffffffffffffff0;
        puVar6 = operator_new(uVar19);
        local_90 = uVar19 | 1;
        local_88 = uVar7;
        local_80 = puVar6;
LAB_0080325c:
        memcpy(puVar6,pvVar4,uVar7);
      }
      *(undefined1 *)((long)puVar6 + uVar7) = 0;
      uVar7 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        puVar8 = local_80;
        uVar7 = local_88;
      }
      if (uVar7 == 0) goto LAB_008035d8;
      uVar19 = 0;
      uVar20 = 0;
      do {
        while (*(char *)((long)puVar8 + uVar19) == '\n') {
          uVar19 = uVar19 + 1;
          FUN_00809680(param_3,(long)puVar8 + uVar20,uVar19 - uVar20);
          *(undefined1 *)(param_3 + 0x14) = 1;
          uVar20 = uVar19;
          if (uVar19 == uVar7) goto LAB_008035dc;
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar7);
      break;
    case 3:
      uVar7 = (ulong)(local_78[0] >> 1);
      pvVar4 = pvVar17;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_70;
        pvVar4 = local_68;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar14 = 0;
        uVar20 = 0;
        do {
          while (*(char *)((long)pvVar4 + uVar20) == '\n') {
            uVar19 = uVar20 + 1;
            FUN_00809680(param_3,(long)pvVar4 + uVar14,uVar19 - uVar14);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar14 = uVar19;
            uVar20 = uVar19;
            if (uVar19 == uVar7) goto LAB_008032e0;
          }
          uVar20 = uVar20 + 1;
          uVar19 = uVar14;
        } while (uVar20 != uVar7);
      }
LAB_008032e0:
      FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar7 - uVar19);
      pbVar16 = *(byte **)(puVar1 + 2);
      local_90 = 0;
      bVar3 = *pbVar16;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 != 0) goto LAB_00803314;
LAB_00803358:
        local_b0 = (undefined2 *)0x0;
        local_b8 = 0;
        *(undefined1 *)(puVar11 + 1) = 0x22;
        *puVar11 = 0x203a;
        local_c0 = (void *)0x6;
        bVar5 = (*pbVar16 & 1) != 0;
        pbVar15 = pbVar16 + 1;
        if (bVar5) {
          pbVar15 = *(byte **)(pbVar16 + 0x10);
        }
        uVar7 = (ulong)(*pbVar16 >> 1);
        if (bVar5) {
          uVar7 = *(ulong *)(pbVar16 + 8);
        }
        FUN_007ff490(pbVar15,uVar7,&local_c0);
        std::string::append((char *)&local_c0);
        uVar7 = (ulong)local_c0 >> 1 & 0x7f;
        puVar8 = puVar11;
        if (((ulong)local_c0 & 1) != 0) {
          uVar7 = local_b8;
          puVar8 = local_b0;
        }
        if (uVar7 == 0) {
          uVar19 = 0;
        }
        else {
          uVar14 = 0;
          uVar20 = 0;
          do {
            while (*(char *)((long)puVar8 + uVar20) == '\n') {
              uVar19 = uVar20 + 1;
              FUN_00809680(param_3,(long)puVar8 + uVar14,uVar19 - uVar14);
              *(undefined1 *)(param_3 + 0x14) = 1;
              uVar14 = uVar19;
              uVar20 = uVar19;
              if (uVar19 == uVar7) goto LAB_0080368c;
            }
            uVar20 = uVar20 + 1;
            uVar19 = uVar14;
          } while (uVar20 != uVar7);
        }
LAB_0080368c:
        FUN_00809680(param_3,(long)puVar8 + uVar19,uVar7 - uVar19);
        if (((ulong)local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
      }
      else {
        if (*(long *)(pbVar16 + 8) == 0) goto LAB_00803358;
LAB_00803314:
        pbVar15 = *(byte **)(pbVar16 + 0x10);
        uVar2 = *(uint *)(pbVar16 + 8);
        if ((bVar3 & 1) == 0) {
          pbVar15 = pbVar16 + 1;
          uVar2 = (uint)(bVar3 >> 1);
        }
        uVar7 = FUN_008103b0(&local_90,pbVar15,uVar2);
        if ((uVar7 & 1) == 0) goto LAB_00803358;
        if (*(char *)(param_1 + 4) == '\0') {
          FUN_00809680(param_3,&DAT_01d17ac3,3);
          *(undefined1 *)(param_3 + 0x14) = 1;
          FUN_00809680(param_3,&DAT_01d17ac6,0);
          std::string::append((char *)(param_3 + 0x18));
        }
        else {
          FUN_00809680(param_3,&DAT_01d1e5af,3);
        }
        FUN_00802e60(param_1,&local_90,param_3);
        if (*(char *)(param_1 + 4) == '\0') {
          FUN_00803ce0(param_3);
          FUN_00809680(param_3,&DAT_01d0a392,2);
          *(undefined1 *)(param_3 + 0x14) = 1;
          FUN_00809680(param_3,&DAT_01d0a394,0);
        }
        else {
          FUN_00809680(param_3,&DAT_01cf9846,2);
        }
      }
      if (local_90 == 0) goto switchD_00802f00_default;
      FUN_0080f500(&local_90);
      goto joined_r0x008036c0;
    case 4:
      uVar7 = (ulong)(local_78[0] >> 1);
      pvVar4 = pvVar17;
      if ((local_78[0] & 1) != 0) {
        uVar7 = local_70;
        pvVar4 = local_68;
      }
      if (uVar7 == 0) {
        uVar19 = 0;
      }
      else {
        uVar20 = 0;
        uVar19 = 0;
        do {
          while (*(char *)((long)pvVar4 + uVar20) == '\n') {
            uVar20 = uVar20 + 1;
            FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar20 - uVar19);
            *(undefined1 *)(param_3 + 0x14) = 1;
            uVar19 = uVar20;
            if (uVar20 == uVar7) goto LAB_00803110;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar7);
      }
LAB_00803110:
      FUN_00809680(param_3,(long)pvVar4 + uVar19,uVar7 - uVar19);
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00809680(param_3,&DAT_01d17ac3,3);
        *(undefined1 *)(param_3 + 0x14) = 1;
        FUN_00809680(param_3,&DAT_01d17ac6,0);
        std::string::append((char *)(param_3 + 0x18));
      }
      else {
        FUN_00809680(param_3,&DAT_01d1e5af,3);
      }
      FUN_00802e60(param_1,*(undefined8 *)(puVar1 + 2),param_3);
      if (*(char *)(param_1 + 4) == '\0') {
        FUN_00803ce0(param_3);
        FUN_00809680(param_3,&DAT_01d0a392,2);
        puVar9 = &DAT_01d0a394;
        *(undefined1 *)(param_3 + 0x14) = 1;
        goto LAB_0080365c;
      }
      uVar10 = 2;
      puVar9 = &DAT_01cf9846;
      goto LAB_00803664;
    default:
      goto switchD_00802f00_default;
    }
LAB_008035dc:
    FUN_00809680(param_3,(long)puVar8 + uVar20,uVar7 - uVar20);
    if ((local_90 & 1) != 0) {
      puVar8 = local_80;
LAB_0080361c:
      operator_delete(puVar8);
    }
LAB_00803620:
    if (*(char *)(param_1 + 4) == '\0') {
      FUN_00809680(param_3,&DAT_01d245b7,1);
      *(undefined1 *)(param_3 + 0x14) = 1;
      puVar9 = &DAT_01d245b8;
LAB_0080365c:
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
      puVar9 = &DAT_01ce77a5;
    }
LAB_00803664:
    FUN_00809680(param_3,puVar9,uVar10);
switchD_00802f00_default:
joined_r0x008036c0:
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    lVar18 = lVar18 + 1;
    plVar13 = (long *)*param_2;
    if (plVar13 == (long *)0x0) goto LAB_00802ec4;
LAB_0080377c:
    if ((int)((ulong)(plVar13[1] - *plVar13) >> 4) <= lVar18) {
      return;
    }
  } while( true );
}


