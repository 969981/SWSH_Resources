/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea9160; name: FUN_00ea9160
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00ea9160(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  long lVar14;
  long lVar15;
  undefined8 local_260;
  long local_258;
  uint local_250;
  uint uStack_24c;
  uint local_248;
  undefined2 uStack_244;
  undefined2 uStack_242;
  undefined4 uStack_240;
  uint local_23c;
  undefined8 local_238;
  undefined4 local_230 [2];
  long local_228;
  long local_220;
  ulong local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 auStack_70 [16];
  
  local_78 = *param_3;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  local_80 = *param_4;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
  }
  local_88 = *param_5;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x10))();
  }
  uVar3 = FUN_00e43300(param_1,param_2,&local_78,&local_80,&local_88,param_6,param_7);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  puVar1 = PTR_DAT_02710848;
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 == 0) {
    lVar7 = _DAT_00000060;
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar7 = *(long *)(lVar7 + 0x60);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if (((lVar7 != 0) && (*(char *)(lVar7 + 0x618) == '\0')) &&
     (local_260 = param_1[0xbd], local_260 != -0x340d631b7bddd9bb)) {
    local_90 = *(long *)(*(long *)puVar1 + 0xb8);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x10))();
    }
    local_98 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    local_a0 = local_a0 & 0xffffffff00000000;
    lVar7 = FUN_01563020(auStack_70,local_98,&local_98,&local_90,&local_a0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar11 = *(long *)(local_90 + 0x1c8);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    plVar8 = (long *)FUN_01564580(lVar11,&local_260);
    lVar14 = *plVar8;
    lVar15 = plVar8[1];
    lVar9 = plVar8[3];
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    lVar12 = *(long *)(local_90 + 0x1c8);
    lVar11 = _DAT_000000f8;
    if (lVar12 != 0) {
      plVar8 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      lVar11 = *(long *)(lVar12 + 0xf8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    if (lVar14 != lVar11) {
      FUN_0010d170(&local_a0,lVar15);
      FUN_015633c0(lVar7,&local_a0);
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      FUN_01563500(lVar7,local_260);
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
  }
  if ((param_1[0x52] != 0) && (lVar7 = *(long *)(param_1[0x52] + 0x80), lVar7 != 0)) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar10 = *(undefined8 **)(lVar7 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar10)(puVar10);
      lVar7 = FUN_006cb2c0();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar7) {
          puVar10 = puVar10 + -10;
          goto LAB_00ea94a8;
        }
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_00ea94a8:
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar10 + 0x36) = 0x100;
    }
  }
  if ((param_1[0x6c] != 0) && (lVar7 = *(long *)(param_1[0x6c] + 0x80), lVar7 != 0)) {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    puVar10 = *(undefined8 **)(lVar7 + 0x60);
    if (puVar10 != (undefined8 *)0x0) {
      plVar4 = (long *)(**(code **)*puVar10)(puVar10);
      lVar7 = FUN_006cb2c0();
      for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
        if (plVar4 == (long *)lVar7) {
          puVar10 = puVar10 + -10;
          goto LAB_00ea9524;
        }
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_00ea9524:
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (puVar10 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar10 + 0x36) = 0x100;
    }
  }
  lVar7 = FUN_00c89da0(param_1,&local_260);
  if (lVar7 != 0) {
    FUN_007733c0(lVar7,2);
    if (((char)param_1[0xb9] == '\0') || (fVar13 = *(float *)((long)param_1 + 0x5c4), 1.0 <= fVar13)
       ) {
      lVar11 = param_1[0x36];
    }
    else {
      lVar11 = CONCAT44((float)((ulong)param_1[0x36] >> 0x20) * fVar13,(float)param_1[0x36] * fVar13
                       );
    }
    FUN_00773730(lVar11,lVar7);
  }
  if ((((long *)param_1[0x83] != (long *)param_1[0x84]) &&
      (lVar7 = *(long *)param_1[0x83], lVar7 != 0)) &&
     (puVar10 = *(undefined8 **)(lVar7 + 0x60), puVar10 != (undefined8 *)0x0)) {
    plVar8 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar2 != 0)) {
      uVar6 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar6;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_027150b0) {
        puVar10 = puVar10 + -10;
        goto LAB_00ea95f4;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00ea95f4:
  FUN_0131e290(param_1 + 0x102,puVar10);
  lVar7 = param_1[0xfe];
  uVar3 = FUN_0131acf0(lVar7);
  if ((uVar3 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar7 + 0x130);
  }
  FUN_0131e390(param_1 + 0x102,uVar6);
  if (param_1[0xc4] == -0x340d631b7bddd9bb) {
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271fcb8,(char)param_1[0xfc]);
    lVar7 = local_260;
    uStack_244 = 1;
    uStack_242 = 0;
    uStack_240 = 1;
    local_23c = (uint)*(byte *)((long)param_1 + 0x7e9);
    uStack_24c = (uint)*(byte *)((long)param_1 + 0x7e1);
    local_260 = CONCAT53(1,(int3)param_1[0xf8]);
    local_260._6_2_ = SUB82(lVar7,6);
    local_260._0_6_ =
         CONCAT15(*(undefined1 *)((long)param_1 + 0x7ea),
                  CONCAT14((char)param_1[0xfa],(undefined4)local_260));
    local_250 = (uint)*(byte *)(param_1 + 0xfd);
    local_248 = (uint)*(byte *)((long)param_1 + 0x7c3);
    local_228 = param_1[0xfb];
    local_220 = param_1[0xf9];
    local_258 = (ulong)*(byte *)(param_1 + 0xfc) << 0x20;
    local_238 = 0;
    local_230[0] = 0;
    if (param_1[0x3b] == 0) {
      FUN_00df0aa0(0);
      iVar2 = *(int *)((long)param_1 + 0x5cc);
      goto joined_r0x00ea97c4;
    }
    FUN_00e70350(param_1 + 0x3c,param_1[0x3b],param_1,&local_260);
    FUN_00df0aa0();
    iVar2 = *(int *)((long)param_1 + 0x5cc);
    if (iVar2 == 0x5f) goto LAB_00ea97c8;
LAB_00ea96e8:
    if (0x1d0 < iVar2) goto LAB_00ea980c;
LAB_00ea96f0:
    if (iVar2 < 0x15e) {
      if (iVar2 == 0xd0) {
        lVar14 = _DAT_01d4aed0;
        lVar15 = _UNK_01d4aed8;
        lVar7 = _DAT_01d4aee0;
        lVar11 = _UNK_01d4aee8;
        goto LAB_00ea99fc;
      }
      if (iVar2 == 0x116) {
        lVar14 = _DAT_01d4a410;
        lVar15 = _UNK_01d4a418;
        lVar7 = _DAT_01d4ad60;
        lVar11 = _UNK_01d4ad68;
        goto LAB_00ea99fc;
      }
      goto LAB_00ea9a0c;
    }
    if (iVar2 == 0x15e) {
      lVar14 = _DAT_01d4ac80;
      lVar15 = _UNK_01d4ac88;
      lVar7 = _DAT_01d4aab0;
      lVar11 = _UNK_01d4aab8;
    }
    else if (iVar2 == 0x17e) {
      lVar14 = _DAT_01d49e40;
      lVar15 = _UNK_01d49e48;
      lVar7 = _DAT_01d4a5f0;
      lVar11 = _UNK_01d4a5f8;
    }
    else {
      if (iVar2 != 0x1b5) goto LAB_00ea9a0c;
      lVar14 = _DAT_01d4b950;
      lVar15 = _UNK_01d4b958;
      lVar7 = _DAT_01d4ba70;
      lVar11 = _UNK_01d4ba78;
    }
LAB_00ea99fc:
    *(undefined1 *)(param_1 + 0xbf) = 1;
    param_1[0xc1] = lVar15;
    param_1[0xc0] = lVar14;
    param_1[0xc3] = lVar11;
    param_1[0xc2] = lVar7;
  }
  else {
    (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271fcb8,3);
    local_250 = local_250 & 0xffffff00;
    uStack_24c = 0;
    uStack_244 = 0;
    uStack_240 = 0x3e4ccccd;
    local_260 = param_1[0xc4];
    local_258 = (ulong)*(uint *)(param_1 + 0xf7) << 0x20;
    local_248 = 0x40a00000;
    local_23c = CONCAT31((int3)(local_23c >> 8),1);
    memcpy(local_230,param_1 + 0xc5,400);
    local_238 = 1;
    if (param_1[0x3b] != 0) {
      FUN_00e70200(param_1 + 0x3c,param_1[0x3b],param_1,&local_260);
    }
    *(undefined1 *)(param_1 + 0x43) = 0;
    iVar2 = *(int *)((long)param_1 + 0x5cc);
joined_r0x00ea97c4:
    if (iVar2 != 0x5f) goto LAB_00ea96e8;
LAB_00ea97c8:
    lVar7 = FUN_00d78f10(param_1,&local_260);
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0x362) = 1;
    }
    lVar15 = _UNK_01d4b818;
    lVar14 = _DAT_01d4b810;
    lVar11 = _UNK_01d4b258;
    lVar7 = _DAT_01d4b250;
    *(undefined1 *)(param_1 + 0xbf) = 1;
    iVar2 = *(int *)((long)param_1 + 0x5cc);
    param_1[0xc1] = lVar15;
    param_1[0xc0] = lVar14;
    param_1[0xc3] = lVar11;
    param_1[0xc2] = lVar7;
    if (iVar2 < 0x1d1) goto LAB_00ea96f0;
LAB_00ea980c:
    if (iVar2 < 0x325) {
      if (iVar2 == 0x1d1) {
        uVar3 = FUN_00dbe4e0(param_1,param_1 + 0xc0);
        if ((uVar3 & 1) != 0) {
          lVar15 = param_1[0xc1];
          lVar11 = param_1[0xc3];
          lVar14 = CONCAT44((int)((ulong)param_1[0xc0] >> 0x20),DAT_01d4c3f0);
          lVar7 = CONCAT44((int)((ulong)param_1[0xc2] >> 0x20),DAT_01d4c6b8);
          goto LAB_00ea99fc;
        }
      }
      else if (iVar2 == 799) {
        lVar14 = _DAT_01d4a3f0;
        lVar15 = _UNK_01d4a3f8;
        lVar7 = _DAT_01d4b450;
        lVar11 = _UNK_01d4b458;
        goto LAB_00ea99fc;
      }
    }
    else {
      if (iVar2 == 0x325) {
        lVar14 = _DAT_01d49fe0;
        lVar15 = _UNK_01d49fe8;
        lVar7 = _DAT_01d4a8a0;
        lVar11 = _UNK_01d4a8a8;
        goto LAB_00ea99fc;
      }
      if (iVar2 != 0x353) {
        if (iVar2 == 0x382) {
          if ((short)param_1[0xba] == 0) {
            lVar14 = _DAT_01d4ba60;
            lVar15 = _UNK_01d4ba68;
            lVar7 = _DAT_01d4b740;
            lVar11 = _UNK_01d4b748;
            goto LAB_00ea99fc;
          }
        }
        goto LAB_00ea9a0c;
      }
      lVar11 = *(long *)PTR_DAT_02717c48;
      local_260 = *(long *)(lVar11 + 0xf0);
      local_258 = *(long *)(lVar11 + 0xf8);
      lVar7 = *(long *)(lVar11 + 0x108);
      local_250 = (uint)*(undefined8 *)(lVar11 + 0x100);
      uStack_24c = (uint)((ulong)*(undefined8 *)(lVar11 + 0x100) >> 0x20);
      local_248 = (uint)lVar7;
      uStack_244 = (undefined2)((ulong)lVar7 >> 0x20);
      uStack_242 = (undefined2)((ulong)lVar7 >> 0x30);
      if (lVar7 == 0) {
LAB_00ea99a4:
        lVar7 = *(long *)(*(long *)puVar1 + 0x90);
        if (lVar7 == 0) goto LAB_00ea9940;
LAB_00ea99b4:
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        iVar2 = FUN_0100d1b0(lVar7,&local_260);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        lVar7 = _DAT_01d4a400;
        lVar11 = _UNK_01d4a408;
        lVar14 = _DAT_01d4b140;
        lVar15 = _UNK_01d4b148;
      }
      else {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
        lVar7 = CONCAT26(uStack_242,CONCAT24(uStack_244,local_248));
        if (lVar7 == 0) goto LAB_00ea99a4;
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        local_248 = 0;
        uStack_244 = 0;
        uStack_242 = 0;
        lVar7 = *(long *)(*(long *)puVar1 + 0x90);
        if (lVar7 != 0) goto LAB_00ea99b4;
LAB_00ea9940:
        iVar2 = FUN_0100d1b0(0,&local_260);
        lVar7 = _DAT_01d4a400;
        lVar11 = _UNK_01d4a408;
        lVar14 = _DAT_01d4b140;
        lVar15 = _UNK_01d4b148;
      }
      _DAT_01d4a400 = lVar7;
      _UNK_01d4a408 = lVar11;
      _DAT_01d4b140 = lVar14;
      _UNK_01d4b148 = lVar15;
      if (iVar2 != 0) goto LAB_00ea99fc;
    }
  }
LAB_00ea9a0c:
  iVar2 = *(int *)((long)param_1 + 0x5cc);
  if (iVar2 < 0x82) {
    if ((0x35 < iVar2 - 0x3bU) || ((1L << ((ulong)(iVar2 - 0x3bU) & 0x3f) & 0x20001000080001U) == 0)
       ) goto LAB_00ea9b0c;
  }
  else if (((0xd < iVar2 - 0x82U) || ((1 << (ulong)(iVar2 - 0x82U & 0x1f) & 0x2003U) == 0)) &&
          ((iVar2 != 0xd0 && (iVar2 != 0xf8)))) {
LAB_00ea9b0c:
    if (iVar2 < 0x239) {
      if (iVar2 < 0x1c2) {
        if ((iVar2 != 0x15e) && (iVar2 != 0x164)) goto LAB_00ea9a88;
      }
      else if (((0x1b < iVar2 - 0x1c2U) || ((1 << (ulong)(iVar2 - 0x1c2U & 0x1f) & 0x8804401U) == 0)
               ) && (iVar2 != 0x216)) goto LAB_00ea9a88;
    }
    else if (iVar2 < 0x310) {
      if (((0x3e < iVar2 - 0x2c2U) ||
          ((1L << ((ulong)(iVar2 - 0x2c2U) & 0x3f) & 0x4040100000000081U) == 0)) &&
         ((0x36 < iVar2 - 0x239U ||
          ((1L << ((ulong)(iVar2 - 0x239U) & 0x3f) & 0x40200000000001U) == 0)))) goto LAB_00ea9a88;
    }
    else if (((iVar2 != 0x310) && (iVar2 != 0x36f)) && (iVar2 != 0x337)) goto LAB_00ea9a88;
  }
  *(undefined8 *)((long)param_1 + 0x374) = 0x142000000;
LAB_00ea9a88:
  if (((param_1[0x31] == 0x5c5f40bd69c70a0b) && ((long *)param_1[0x83] != (long *)param_1[0x84])) &&
     ((lVar7 = *(long *)param_1[0x83], lVar7 != 0 &&
      (puVar10 = *(undefined8 **)(lVar7 + 0x60), puVar10 != (undefined8 *)0x0)))) {
    puVar5 = (undefined8 *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_027150a8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar2 != 0)) {
      uVar6 = FUN_00706e40();
      *(undefined8 *)PTR_DAT_027150b0 = uVar6;
      __cxa_guard_release(PTR_DAT_027150a8);
    }
    if (puVar5 != (undefined8 *)0x0) {
      while (puVar5 != (undefined8 *)PTR_DAT_027150b0) {
        puVar5 = (undefined8 *)*puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          return 1;
        }
      }
      FUN_0069c550(0,puVar10 + -10);
    }
  }
  return 1;
}


