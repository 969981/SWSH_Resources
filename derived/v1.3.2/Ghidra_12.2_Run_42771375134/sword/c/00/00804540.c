/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00804540; name: FUN_00804540
 */


void FUN_00804540(long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined4 param_5,
                 long param_6)

{
  string sVar1;
  undefined7 uVar2;
  uint uVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  void *pvVar16;
  ulong uVar17;
  string local_98 [8];
  ulong local_90;
  void *local_88;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  string local_70;
  undefined1 uStack_6f;
  undefined6 uStack_6e;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 *local_60;
  ulong local_58;
  ulong local_50;
  undefined1 *local_48;
  
  plVar13 = (long *)(param_1 + 0x28);
  plVar14 = (long *)*plVar13;
  plVar15 = *(long **)(param_1 + 0x18);
  if (plVar14 != (long *)0x0) {
    plVar12 = plVar13;
    do {
      if ((ulong)plVar14[4] >= param_4) {
        plVar12 = plVar14;
      }
      plVar14 = (long *)plVar14[(ulong)plVar14[4] < param_4];
    } while (plVar14 != (long *)0x0);
    if ((plVar12 != plVar13) && ((ulong)plVar12[4] <= param_4)) {
      plVar15 = (long *)plVar12[5];
    }
  }
  switch(*(undefined4 *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_4 + 0x3c) * 4)) {
  case 1:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar4 = (**(code **)(*param_3 + 0x150))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0x88))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x18))(&local_58,plVar15,uVar4);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) {
LAB_00804c88:
      uVar10 = 0;
    }
    else {
      uVar11 = 0;
      uVar17 = 0;
      do {
        while (puVar8[uVar17] == '\n') {
          uVar10 = uVar17 + 1;
          FUN_00809680(param_6,puVar8 + uVar11,uVar10 - uVar11);
          *(undefined1 *)(param_6 + 0x14) = 1;
          uVar11 = uVar10;
          uVar17 = uVar10;
          if (uVar10 == uVar9) goto LAB_00804c8c;
        }
        uVar17 = uVar17 + 1;
        uVar10 = uVar11;
      } while (uVar17 != uVar9);
    }
    break;
  case 2:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x158))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0x90))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x28))(&local_58,plVar15,uVar6);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 3:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar4 = (**(code **)(*param_3 + 0x160))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0x98))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x20))(&local_58,plVar15,uVar4);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 4:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x168))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0xa0))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x30))(&local_58,plVar15,uVar6);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 5:
    if (*(int *)(param_4 + 0x40) == 3) {
      (**(code **)(*param_3 + 0x178))(param_3,param_2,param_4,param_5);
    }
    else {
      (**(code **)(*param_3 + 0xb0))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x40))(&local_58,plVar15);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 6:
    if (*(int *)(param_4 + 0x40) == 3) {
      (**(code **)(*param_3 + 0x170))(param_3,param_2,param_4,param_5);
    }
    else {
      (**(code **)(*param_3 + 0xa8))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x38))(&local_58,plVar15);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 7:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar3 = (**(code **)(*param_3 + 0x180))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0xb8))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar15 + 0x10))(&local_58,plVar15,uVar3 & 1);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) goto LAB_00804c88;
    uVar17 = 0;
    uVar10 = 0;
    do {
      while (puVar8[uVar17] == '\n') {
        uVar17 = uVar17 + 1;
        FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
        *(undefined1 *)(param_6 + 0x14) = 1;
        uVar10 = uVar17;
        if (uVar17 == uVar9) goto LAB_00804c8c;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar9);
    break;
  case 8:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar4 = (**(code **)(*param_3 + 0x198))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0xd0))(param_3,param_2,param_4);
    }
    puVar7 = (undefined8 *)FUN_007e3f10(*(undefined8 *)(param_4 + 0x70),uVar4);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)(*plVar15 + 0x58))(&local_58,plVar15,uVar4,*puVar7);
      uVar9 = local_58 >> 1 & 0x7f;
      puVar8 = (undefined1 *)((ulong)&local_58 | 1);
      if ((local_58 & 1) != 0) {
        uVar9 = local_50;
        puVar8 = local_48;
      }
      if (uVar9 == 0) goto LAB_00804c88;
      uVar17 = 0;
      uVar10 = 0;
      do {
        while (puVar8[uVar17] == '\n') {
          uVar17 = uVar17 + 1;
          FUN_00809680(param_6,puVar8 + uVar10,uVar17 - uVar10);
          *(undefined1 *)(param_6 + 0x14) = 1;
          uVar10 = uVar17;
          if (uVar17 == uVar9) goto LAB_00804c8c;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
      break;
    }
    FUN_0080f330(&local_70,&DAT_01cd6336,uVar4);
    (**(code **)(*plVar15 + 0x58))(&local_58,plVar15,uVar4,&local_70);
    uVar9 = local_58 >> 1 & 0x7f;
    puVar8 = (undefined1 *)((ulong)&local_58 | 1);
    if ((local_58 & 1) != 0) {
      uVar9 = local_50;
      puVar8 = local_48;
    }
    if (uVar9 == 0) {
      uVar10 = 0;
    }
    else {
      uVar11 = 0;
      uVar17 = 0;
      do {
        while (puVar8[uVar17] == '\n') {
          uVar10 = uVar17 + 1;
          FUN_00809680(param_6,puVar8 + uVar11,uVar10 - uVar11);
          *(undefined1 *)(param_6 + 0x14) = 1;
          uVar11 = uVar10;
          uVar17 = uVar10;
          if (uVar10 == uVar9) goto LAB_00805014;
        }
        uVar17 = uVar17 + 1;
        uVar10 = uVar11;
      } while (uVar17 != uVar9);
    }
LAB_00805014:
    FUN_00809680(param_6,puVar8 + uVar10,uVar9 - uVar10);
    if ((local_58 & 1) != 0) {
      operator_delete(local_48);
    }
    if (((byte)local_70 & 1) == 0) {
      return;
    }
    puVar8 = local_60;
    goto LAB_00804ca8;
  case 9:
    local_50 = 0;
    local_48 = (undefined1 *)0x0;
    local_58 = 0;
    if (*(int *)(param_4 + 0x40) == 3) {
      psVar5 = (string *)(**(code **)(*param_3 + 0x1a8))(param_3,param_2,param_4,param_5,&local_58);
    }
    else {
      psVar5 = (string *)(**(code **)(*param_3 + 0xe0))(param_3,param_2,param_4,&local_58);
    }
    local_68 = 0;
    uStack_67 = 0;
    local_60 = (undefined1 *)0x0;
    local_70 = (string)0x0;
    uStack_6f = 0;
    uStack_6e = 0;
    uVar9 = *(ulong *)(param_1 + 0x10);
    if (0 < (long)uVar9) {
      if (((byte)*psVar5 & 1) == 0) {
        uVar10 = (ulong)((byte)*psVar5 >> 1);
      }
      else {
        uVar10 = *(ulong *)(psVar5 + 8);
      }
      if (uVar9 < uVar10) {
        std::string::string(local_98,psVar5,0,uVar9,(allocator *)psVar5);
        psVar5 = (string *)std::string::append((char *)local_98);
        puVar8 = *(undefined1 **)(psVar5 + 0x10);
        sVar1 = *psVar5;
        uStack_78 = (undefined7)((ulong)*(undefined8 *)(psVar5 + 8) >> 8);
        uStack_80 = (undefined7)*(undefined8 *)(psVar5 + 1);
        local_79 = (undefined1)((ulong)*(undefined8 *)(psVar5 + 1) >> 0x38);
        *(undefined8 *)psVar5 = 0;
        *(undefined8 *)(psVar5 + 8) = 0;
        *(undefined8 *)(psVar5 + 0x10) = 0;
        if (((byte)local_70 & 1) != 0) {
          *local_60 = 0;
          local_68 = 0;
          uStack_67 = 0;
          if (((byte)local_70 & 1) != 0) {
            operator_delete(local_60);
          }
        }
        uStack_67 = uStack_78;
        local_68 = local_79;
        uVar2 = uStack_80;
        uStack_80 = 0;
        local_79 = 0;
        uStack_78 = 0;
        uStack_6f = (undefined1)uVar2;
        uStack_6e = (undefined6)((uint7)uVar2 >> 8);
        local_70 = sVar1;
        local_60 = puVar8;
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        psVar5 = &local_70;
      }
    }
    if (*(int *)(param_4 + 0x3c) == 9) {
      (**(code **)(*plVar15 + 0x48))(local_98,plVar15);
      uVar9 = (ulong)((byte)local_98[0] >> 1);
      pvVar16 = (void *)((ulong)local_98 | 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar9 = local_90;
        pvVar16 = local_88;
      }
      if (uVar9 == 0) {
LAB_00804fc4:
        uVar10 = 0;
      }
      else {
        uVar11 = 0;
        uVar17 = 0;
        do {
          while (*(char *)((long)pvVar16 + uVar17) == '\n') {
            uVar10 = uVar17 + 1;
            FUN_00809680(param_6,(long)pvVar16 + uVar11,uVar10 - uVar11);
            *(undefined1 *)(param_6 + 0x14) = 1;
            uVar11 = uVar10;
            uVar17 = uVar10;
            if (uVar10 == uVar9) goto LAB_00804fc8;
          }
          uVar17 = uVar17 + 1;
          uVar10 = uVar11;
        } while (uVar17 != uVar9);
      }
    }
    else {
      (**(code **)(*plVar15 + 0x50))(local_98,plVar15,psVar5);
      uVar9 = (ulong)((byte)local_98[0] >> 1);
      pvVar16 = (void *)((ulong)local_98 | 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar9 = local_90;
        pvVar16 = local_88;
      }
      if (uVar9 == 0) goto LAB_00804fc4;
      uVar17 = 0;
      uVar10 = 0;
      do {
        while (*(char *)((long)pvVar16 + uVar17) == '\n') {
          uVar17 = uVar17 + 1;
          FUN_00809680(param_6,(long)pvVar16 + uVar10,uVar17 - uVar10);
          *(undefined1 *)(param_6 + 0x14) = 1;
          uVar10 = uVar17;
          if (uVar17 == uVar9) goto LAB_00804fc8;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar9);
    }
LAB_00804fc8:
    FUN_00809680(param_6,(long)pvVar16 + uVar10,uVar9 - uVar10);
    if (((byte)local_98[0] & 1) != 0) {
      operator_delete(local_88);
      if (((byte)local_70 & 1) != 0) goto LAB_00804ffc;
      goto LAB_00804c9c;
    }
    if (((byte)local_70 & 1) == 0) goto LAB_00804c9c;
LAB_00804ffc:
    operator_delete(local_60);
    if ((local_58 & 1) == 0) {
      return;
    }
    goto LAB_00804ca4;
  case 10:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x1a0))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0xd8))(param_3,param_2,param_4,0);
    }
    FUN_00802cb0(param_1,uVar6,param_6);
    return;
  default:
    goto switchD_008045d8_default;
  }
LAB_00804c8c:
  FUN_00809680(param_6,puVar8 + uVar10,uVar9 - uVar10);
LAB_00804c9c:
  if ((local_58 & 1) != 0) {
LAB_00804ca4:
    puVar8 = local_48;
LAB_00804ca8:
    operator_delete(puVar8);
  }
switchD_008045d8_default:
  return;
}


