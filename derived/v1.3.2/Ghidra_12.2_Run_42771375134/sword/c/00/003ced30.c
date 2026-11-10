/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ced30; name: FUN_003ced30
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_003ced30(long *param_1,long *param_2,ushort *param_3,uint param_4,undefined8 param_5,
                   uint param_6)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  byte bVar11;
  byte bVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  bVar12 = *(byte *)((long)param_2 + 0x24);
  if (2 < bVar12) {
    if (bVar12 != 5) {
      return (long *)0x0;
    }
    lVar8 = param_2[8];
    if (param_3 == (ushort *)0x0) {
      if (*(int *)(lVar8 + 0x14) == *(int *)(*param_1 + 0x7c0)) goto LAB_003cf144;
      *(int *)(lVar8 + 0x14) = *(int *)(*param_1 + 0x7c0);
      if ((*(byte *)((long)param_2 + 0x25) >> 5 & 1) == 0) {
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = (undefined4)param_2[7];
        plVar10 = (long *)param_2[6];
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        (**(code **)(*(long *)param_2[5] + 0x10))((long *)param_2[5],&local_90,&local_70);
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_84,&local_80);
        (**(code **)(**(long **)(*param_1 + 0x1068) + 8))
                  (*(long **)(*param_1 + 0x1068),uVar19,local_90 & 0xffffffff,local_70,uStack_68,
                   local_84,local_80,uStack_78,0);
      }
      FUN_003cce70(&local_70,param_1,param_2[5],param_2[6],uVar19,1);
      *(ushort *)(lVar8 + 0x10) = local_70._2_2_;
      *(bool *)(lVar8 + 0x1a) = local_70._4_4_ != -1;
      if (((ulong)local_70 & 1) == 0) {
        if (((ushort)local_70 >> 1 & 1) != 0) {
          *(undefined1 *)(lVar8 + 0x1b) = 1;
          cVar3 = *(char *)(lVar8 + 0x1a);
          bVar12 = *(byte *)((long)param_2 + 0x25);
          goto joined_r0x003cf324;
        }
        *(undefined1 *)(lVar8 + 0x1b) = 0;
        cVar3 = *(char *)(lVar8 + 0x1a);
        bVar12 = *(byte *)((long)param_2 + 0x25);
        goto joined_r0x003cf310;
      }
      *(undefined1 *)(lVar8 + 0x1c) = 1;
      cVar3 = *(char *)(lVar8 + 0x1a);
      bVar12 = *(byte *)((long)param_2 + 0x25);
joined_r0x003cf324:
      if (cVar3 == '\0') goto LAB_003cefe0;
LAB_003cf150:
      bVar12 = bVar12 | 0x20;
    }
    else {
      uVar20 = *(uint *)(param_3 + 2);
      if (((uVar20 != 0xffffffff) && (*(char *)(lVar8 + 0x1c) != '\0')) &&
         (uVar17 = (**(code **)(*param_2 + 0x20))(param_2), (uVar17 & 1) != 0)) {
        plVar10 = (long *)param_2[6];
        local_70 = (long *)0x0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        (**(code **)(*(long *)param_2[5] + 0x10))((long *)param_2[5],&local_90,&local_70);
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_84,&local_80);
        (**(code **)(**(long **)(*param_1 + 0x1068) + 8))
                  (*(long **)(*param_1 + 0x1068),uVar20,local_90 & 0xffffffff,local_70,uStack_68,
                   local_84,local_80,uStack_78,0);
        plVar10 = (long *)param_1[0x13];
        *(long *)(*plVar10 + (ulong)uVar20 * 8) = plVar10[2];
        plVar10[2] = (ulong)uVar20;
        cVar3 = *(char *)(lVar8 + 0x1a);
        bVar12 = *(byte *)((long)param_2 + 0x25);
        goto joined_r0x003cf324;
      }
LAB_003cf144:
      cVar3 = *(char *)(lVar8 + 0x1a);
      bVar12 = *(byte *)((long)param_2 + 0x25);
joined_r0x003cf310:
      if (cVar3 != '\0') goto LAB_003cf150;
LAB_003cefe0:
      if ((bVar12 >> 5 & 1) == 0) goto LAB_003cf158;
      bVar12 = bVar12 & 0xdf;
    }
    *(byte *)((long)param_2 + 0x25) = bVar12;
LAB_003cf158:
    plVar10 = (long *)param_2[8];
    if (*(char *)(lVar8 + 0x1c) != '\0') {
      FUN_003d9400(param_2,0,0);
      (**(code **)*param_2)(param_2);
      *(int *)((long)param_1 + 0x124c) = *(int *)((long)param_1 + 0x124c) + -1;
      *param_2 = param_1[0x24b];
      param_1[0x24b] = (long)param_2;
      sVar6 = (short)plVar10[3] + -1;
      *(short *)(plVar10 + 3) = sVar6;
      if (sVar6 == 0) {
        *(int *)((long)param_1 + 0x734) = *(int *)((long)param_1 + 0x734) + -1;
        *plVar10 = param_1[0xe8];
        param_1[0xe8] = (long)plVar10;
        return (long *)0x0;
      }
      return (long *)0x0;
    }
    if ((*(char *)((long)plVar10 + 0x1b) == '\0') &&
       ((*(byte *)(*(long *)(param_2[6] + 0x40) + 0x40) >> 2 & 1) == 0)) {
      if (*(char *)((long)param_2 + 0x4a) == '\0') {
        FUN_003d92c0(param_2,0);
        return param_2;
      }
      return param_2;
    }
    if (*(char *)((long)param_2 + 0x4a) == '\0') {
      return param_2;
    }
    FUN_003d94a0(param_2,0,0);
    return param_2;
  }
  plVar10 = (long *)param_2[5];
  plVar1 = (long *)param_2[6];
  local_90 = 0xffffffff00000000;
  if (param_3 == (ushort *)0x0) {
    if ((*(byte *)((long)param_2 + 0x25) >> 5 & 1) == 0) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = (undefined4)param_2[7];
      local_70 = (long *)0x0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_84,&local_70);
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,&local_80);
      (**(code **)(**(long **)(*param_1 + 0x1068) + 8))
                (*(long **)(*param_1 + 0x1068),uVar19,local_84,local_70,uStack_68,local_88,local_80,
                 uStack_78,0);
    }
    FUN_003cc600(&local_70,param_1,plVar10,plVar1,uVar19,&local_80,1);
    uVar17 = (ulong)local_70 & 0xffff;
    uVar20 = (uint)local_70._2_2_;
    local_90 = (ulong)local_70;
    bVar11 = *(byte *)((long)param_2 + 0x25);
    uVar18 = local_70._4_4_;
    if ((bVar11 >> 5 & 1) != 0) goto LAB_003cee70;
LAB_003cf0ac:
    uVar16 = (uint)uVar17;
    if ((uVar17 & 1) != 0) goto LAB_003ceeb0;
LAB_003cf0b0:
    if ((uVar16 >> 1 & 1) == 0) {
      if ((*(byte *)(plVar10[8] + 0x40) >> 2 & 1) == 0) {
        bVar11 = *(byte *)(plVar1[8] + 0x40) >> 2 & 1;
        if (bVar11 != *(byte *)((long)param_2 + 0x24)) goto LAB_003cf0ec;
      }
      else {
        bVar11 = 1;
        if (*(char *)((long)param_2 + 0x24) != '\x01') goto LAB_003cf0ec;
      }
    }
    else {
      bVar11 = 2;
      if (*(char *)((long)param_2 + 0x24) != '\x02') goto LAB_003cf0ec;
    }
  }
  else {
    uVar4 = *param_3;
    uVar17 = (ulong)uVar4;
    uVar5 = param_3[1];
    uVar20 = (uint)uVar5;
    uVar18 = *(uint *)(param_3 + 2);
    local_90 = *(ulong *)param_3;
    if (((uVar4 ^ 0xffff) & 0xd) == 0) {
      local_70 = (long *)0x0;
      uStack_68 = 0;
      local_80 = 0;
      uStack_78 = 0;
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_84,&local_70);
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,&local_80);
      (**(code **)(**(long **)(*param_1 + 0x1068) + 8))
                (*(long **)(*param_1 + 0x1068),uVar18,local_84,local_70,uStack_68,local_88,local_80,
                 uStack_78,0);
      plVar13 = (long *)param_1[0x13];
      *(long *)(*plVar13 + (ulong)uVar18 * 8) = plVar13[2];
      plVar13[2] = (ulong)uVar18;
      uVar18 = 0xffffffff;
      local_90 = CONCAT44(0xffffffff,(undefined4)local_90);
    }
    lVar8 = FUN_003fc7b0(plVar10);
    lVar9 = FUN_003fc7b0(plVar1);
    if ((((uVar4 & 3) == 0) && (lVar8 != 0)) &&
       ((lVar9 != 0 &&
        ((((*(byte *)(*(long *)(lVar8 + 0x50) + 0x2c) & 1) != 0 &&
          ((*(byte *)(*(long *)(lVar9 + 0x50) + 0x2c) & 1) != 0)) && ((uVar5 & 1) != 0)))))) {
      uVar20 = uVar20 & 0xfffe;
    }
    local_90._0_4_ = CONCAT22((short)uVar20,(undefined2)local_90);
    bVar11 = *(byte *)((long)param_2 + 0x25);
    if ((bVar11 >> 5 & 1) == 0) goto LAB_003cf0ac;
LAB_003cee70:
    uVar16 = (uint)uVar17;
    if (((uVar16 & 0xc) == 0xc) ||
       (*(byte *)((long)param_2 + 0x25) = bVar11 & 0xdf, uVar18 == 0xffffffff)) goto LAB_003cf0ac;
    plVar13 = (long *)param_1[0x13];
    *(long *)(*plVar13 + (ulong)uVar18 * 8) = plVar13[2];
    plVar13[2] = (ulong)uVar18;
    local_90 = CONCAT44(0xffffffff,(undefined4)local_90);
    if ((uVar17 & 1) == 0) goto LAB_003cf0b0;
LAB_003ceeb0:
    bVar11 = 7;
    if (*(char *)((long)param_2 + 0x24) != '\a') {
LAB_003cf0ec:
      plVar10 = (long *)FUN_003cf4f0(param_1,param_2,bVar11,&local_90,param_4 & 1,param_5,
                                     param_6 & 1);
      return plVar10;
    }
  }
  if (bVar12 == 1) {
    *(ushort *)((long)param_2 + 0x4c) =
         *(ushort *)((long)param_2 + 0x4c) & 0xffe0 | (ushort)uVar20 & 0x14;
    return param_2;
  }
  if (bVar12 != 0) {
    return param_2;
  }
  uVar18 = *(uint *)(param_2 + 8);
  if ((uVar18 & 0x7fff) == uVar20) goto LAB_003cf46c;
  uVar16 = uVar18;
  if ((uVar18 & 0x1dc) == 0) {
    if (((uVar20 & 0x1dc) != 0) &&
       (((byte *)param_2[9] == (byte *)0x0 || ((*(byte *)param_2[9] & 1) == 0)))) {
      FUN_003ce7a0(param_1,plVar10,plVar1,1);
      uVar16 = *(uint *)(param_2 + 8);
      goto joined_r0x003cf330;
    }
    if ((uVar20 >> 3 & 1) == 0) goto LAB_003cf340;
LAB_003cf454:
    if ((uVar20 & 0x1c0) == 0) {
LAB_003cf35c:
      uVar14 = uVar18 & 0x1c0;
      uVar18 = uVar16;
      if (uVar14 != 0) {
        uVar18 = uVar16 & 0xffe7ffff;
        *(uint *)(param_2 + 8) = uVar18;
        if ((uVar16 >> 0x17 & 1) != 0) {
          uVar18 = uVar16 & 0xff67ffff;
          uVar16 = *(uint *)(param_2 + 10);
          *(uint *)(param_2 + 8) = uVar18;
          *(undefined4 *)(param_2 + 10) = 0xffffffff;
          uVar14 = (int)param_1[7] - 1;
          *(uint *)(param_1 + 7) = uVar14;
          *(undefined8 *)(param_1[6] + (ulong)uVar16 * 8) =
               *(undefined8 *)(param_1[6] + (ulong)uVar14 * 8);
          if (uVar16 < uVar14) {
            *(uint *)(*(long *)(param_1[6] + (ulong)uVar16 * 8) + 0x50) = uVar16;
          }
        }
      }
      goto LAB_003cf46c;
    }
  }
  else {
joined_r0x003cf330:
    if ((uVar20 >> 3 & 1) != 0) goto LAB_003cf454;
LAB_003cf340:
    if ((uVar16 & 0x600000) == 0) goto LAB_003cf454;
    if ((uVar16 >> 0x15 & 1) != 0) {
      uVar14 = *(uint *)(param_2 + 10);
      uVar2 = *(uint *)(param_1 + 5);
      if (uVar14 < uVar2) {
        uVar15 = *(uint *)(param_1 + 4);
        uVar7 = uVar2 - 1;
        if ((uVar14 != uVar7) && (uVar2 < uVar15)) {
          lVar8 = *(long *)(param_1[3] + (ulong)uVar7 * 8);
          *(long *)(param_1[3] + (ulong)uVar14 * 8) = lVar8;
          *(uint *)(lVar8 + 0x50) = uVar14;
          uVar14 = uVar7;
        }
        *(uint *)(param_1 + 5) = uVar7;
      }
      else {
        uVar15 = *(uint *)(param_1 + 4);
      }
      uVar16 = uVar16 & 0xffdfffff;
      *(uint *)(param_2 + 8) = uVar16;
      *(undefined4 *)(param_2 + 10) = 0xffffffff;
      uVar15 = uVar15 - 1;
      *(uint *)(param_1 + 4) = uVar15;
      *(undefined8 *)(param_1[3] + (ulong)uVar14 * 8) =
           *(undefined8 *)(param_1[3] + (ulong)uVar15 * 8);
      if (uVar14 < uVar15) {
        *(uint *)(*(long *)(param_1[3] + (ulong)uVar14 * 8) + 0x50) = uVar14;
      }
      goto LAB_003cf454;
    }
    uVar16 = uVar16 & 0xffbfffff;
    *(uint *)(param_2 + 8) = uVar16;
    if ((uVar20 & 0x1c0) == 0) goto LAB_003cf35c;
  }
  uVar18 = uVar16;
  if ((((int)param_2[10] == -1) && ((*(byte *)((long)param_2 + 0x25) >> 6 & 1) != 0)) &&
     ((uVar16 >> 0xf & 1) != 0)) {
    uVar18 = uVar16 | 0x800000;
    *(uint *)(param_2 + 8) = uVar18;
    uVar16 = *(uint *)(param_1 + 7);
    *(uint *)(param_2 + 10) = uVar16;
    if (uVar16 < (*(uint *)((long)param_1 + 0x3c) & 0x7fffffff)) {
      *(long **)(param_1[6] + (ulong)uVar16 * 8) = param_2;
      *(uint *)(param_1 + 7) = uVar16 + 1;
    }
    else {
      local_70 = param_2;
      FUN_003d8ca0(param_1 + 6,&local_70);
      uVar18 = *(uint *)(param_2 + 8);
    }
  }
LAB_003cf46c:
  *(uint *)(param_2 + 8) = uVar18 & 0xffff8000 | uVar20 & 0x7fff;
  return param_2;
}


