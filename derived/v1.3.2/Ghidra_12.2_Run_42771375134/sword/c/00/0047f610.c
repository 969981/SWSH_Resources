/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047f610; name: FUN_0047f610
 */


undefined8
FUN_0047f610(long param_1,byte *param_2,undefined4 param_3,char *param_4,undefined8 param_5,
            undefined4 param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  ushort *puVar16;
  float *pfVar17;
  long *plVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  byte local_90;
  byte local_88;
  undefined8 local_80;
  undefined4 local_74;
  
  puVar4 = PTR_DAT_02712b40;
  local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)(PTR_DAT_02712b40 + 0xd4));
  puVar8 = *(uint **)(param_1 + 0x90);
  puVar9 = puVar8;
  if (puVar8 != (uint *)0x0) {
    uVar15 = 0;
    puVar9 = (uint *)((long)puVar8 + ((ulong)((byte)*puVar8 + 4) & 0x1fc));
    do {
      if (*(char *)((long)puVar8 + uVar15 + 1) == '5') goto LAB_0047f6a0;
      uVar15 = uVar15 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar15 < (byte)*puVar8);
    puVar9 = (uint *)0x0;
  }
LAB_0047f6a0:
  puVar8 = (uint *)&local_a8;
  if (puVar9 != (uint *)0x0) {
    puVar8 = puVar9;
  }
  local_90 = param_2[1];
  if ((1 << (ulong)(local_90 & 0x1f) & *puVar8) == 0) {
    uVar6 = 0x52;
  }
  else {
    if (*param_4 != '\0') {
      if ((*(long *)(param_1 + 0x78) != 0) &&
         (uVar6 = FUN_0047f610(*(long *)(param_1 + 0x78),param_2,param_3,param_4,param_5,param_6),
         (int)uVar6 != 1)) {
        return uVar6;
      }
      *param_4 = '\0';
      local_90 = param_2[1];
    }
    puVar5 = PTR_DAT_02712b48;
    local_88 = 0xff;
    if ((*param_2 - 0x80 < 0x21) && ((1L << ((ulong)(*param_2 - 0x80) & 0x3f) & 0x100010001U) != 0))
    {
      local_88 = param_2[2];
    }
    local_80 = 0;
    local_a8 = param_5;
    local_a0 = param_6;
    local_98 = param_3;
    local_74 = *(undefined4 *)(puVar4 + 0xbc);
    pbVar10 = *(byte **)(param_1 + 0x90);
    pbVar11 = pbVar10;
    if (pbVar10 != (byte *)0x0) {
      uVar15 = 0;
      pbVar11 = pbVar10 + ((ulong)(*pbVar10 + 4) & 0x1fc);
      do {
        if (pbVar10[uVar15 + 1] == 0x2f) goto LAB_0047f78c;
        uVar15 = uVar15 + 1;
        pbVar11 = pbVar11 + 4;
      } while (uVar15 < *pbVar10);
      pbVar11 = (byte *)0x0;
    }
LAB_0047f78c:
    pbVar10 = (byte *)&local_74;
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = pbVar11;
    }
    iVar14 = *(int *)pbVar10;
    uVar13 = *(uint *)(PTR_DAT_02712b48 + 0xbc);
    uVar19 = (ulong)uVar13;
    plVar18 = (long *)(param_1 + 0x18);
    uVar15 = (**(code **)(*plVar18 + 0x20))(plVar18,uVar19);
    fVar21 = 0.0;
    if (((((uVar15 & 1) != 0) && (uVar15 = FUN_004b3450(plVar18), (uVar15 & 1) != 0)) &&
        (uVar15 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar19), (uVar15 & 1) != 0)) &&
       ((plVar7 = (long *)(**(code **)(*plVar18 + 0x80))(plVar18), plVar7 != (long *)0x0 &&
        (lVar12 = *plVar7, lVar12 != 0)))) {
      fVar21 = 0.0;
      do {
        puVar16 = *(ushort **)(lVar12 + 0x20);
        if (puVar16 != (ushort *)0x0) {
          uVar15 = 0;
          pfVar17 = (float *)((long)puVar16 + ((ulong)((uint)*puVar16 * 2 + 5) & 0x3fffc));
          do {
            if ((uint)puVar16[uVar15 + 1] == (uVar13 & 0xffff)) {
              if (pfVar17 != (float *)0x0) {
                fVar21 = *pfVar17 + fVar21;
              }
              break;
            }
            uVar15 = uVar15 + 1;
            pfVar17 = pfVar17 + 4;
          } while (uVar15 < *puVar16);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
      } while (lVar12 != 0);
    }
    if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
       ((**(ulong **)(param_1 + 0x38) & 1L << (uVar19 & 0x3f)) != 0)) {
      fVar20 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,uVar19,&local_a8);
      fVar21 = fVar20 + fVar21;
    }
    fVar20 = 0.5;
    if (fVar21 <= 0.0) {
      fVar20 = -0.5;
    }
    uVar13 = iVar14 + (uint)param_2[2] + (int)(fVar21 + fVar20);
    if (0x7e < (int)uVar13) {
      uVar13 = 0x7f;
    }
    local_74 = *(undefined4 *)(puVar4 + 0xc4);
    pbVar11 = *(byte **)(param_1 + 0x90);
    if (pbVar11 != (byte *)0x0) {
      uVar15 = 0;
      pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
      do {
        if (pbVar11[uVar15 + 1] == 0x31) goto LAB_0047f91c;
        uVar15 = uVar15 + 1;
        pbVar10 = pbVar10 + 4;
      } while (uVar15 < *pbVar11);
    }
    pbVar10 = (byte *)0x0;
LAB_0047f91c:
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    pbVar2 = (byte *)&local_74;
    if (pbVar10 != (byte *)0x0) {
      pbVar2 = pbVar10;
    }
    local_74 = *(undefined4 *)(puVar4 + 200);
    if (pbVar11 != (byte *)0x0) {
      uVar15 = 0;
      pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
      do {
        if (pbVar11[uVar15 + 1] == 0x32) goto LAB_0047f974;
        uVar15 = uVar15 + 1;
        pbVar10 = pbVar10 + 4;
      } while (uVar15 < *pbVar11);
    }
    pbVar10 = (byte *)0x0;
LAB_0047f974:
    pbVar1 = (byte *)&local_74;
    if (pbVar10 != (byte *)0x0) {
      pbVar1 = pbVar10;
    }
    uVar6 = 0x52;
    if ((*(int *)pbVar2 <= (int)uVar13) && ((int)uVar13 <= *(int *)pbVar1)) {
      local_74 = *(undefined4 *)(puVar4 + 0xc0);
      pbVar10 = pbVar11;
      if (pbVar11 != (byte *)0x0) {
        uVar15 = 0;
        pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
        do {
          if (pbVar11[uVar15 + 1] == 0x30) goto LAB_0047f9d8;
          uVar15 = uVar15 + 1;
          pbVar10 = pbVar10 + 4;
        } while (uVar15 < *pbVar11);
        pbVar10 = (byte *)0x0;
      }
LAB_0047f9d8:
      pbVar11 = (byte *)&local_74;
      if (pbVar10 != (byte *)0x0) {
        pbVar11 = pbVar10;
      }
      iVar14 = *(int *)pbVar11;
      uVar3 = *(uint *)(puVar5 + 0xc0);
      uVar19 = (ulong)uVar3;
      uVar15 = (**(code **)(*plVar18 + 0x20))(plVar18,uVar19);
      fVar21 = 0.0;
      if (((((uVar15 & 1) != 0) && (uVar15 = FUN_004b3450(plVar18), (uVar15 & 1) != 0)) &&
          (uVar15 = (**(code **)(*plVar18 + 0x28))(plVar18,uVar19), (uVar15 & 1) != 0)) &&
         ((plVar18 = (long *)(**(code **)(*plVar18 + 0x80))(plVar18), plVar18 != (long *)0x0 &&
          (lVar12 = *plVar18, lVar12 != 0)))) {
        fVar21 = 0.0;
        do {
          puVar16 = *(ushort **)(lVar12 + 0x20);
          if (puVar16 != (ushort *)0x0) {
            uVar15 = 0;
            pfVar17 = (float *)((long)puVar16 + ((ulong)((uint)*puVar16 * 2 + 5) & 0x3fffc));
            do {
              if ((uint)puVar16[uVar15 + 1] == (uVar3 & 0xffff)) {
                if (pfVar17 != (float *)0x0) {
                  fVar21 = *pfVar17 + fVar21;
                }
                break;
              }
              uVar15 = uVar15 + 1;
              pfVar17 = pfVar17 + 4;
            } while (uVar15 < *puVar16);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
        } while (lVar12 != 0);
      }
      if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
         ((**(ulong **)(param_1 + 0x38) & 1L << (uVar19 & 0x3f)) != 0)) {
        fVar20 = (float)FUN_0049d1f0(*(undefined8 *)PTR_DAT_02712b50,param_1 + 0x30,uVar19,&local_a8
                                    );
        fVar21 = fVar20 + fVar21;
      }
      fVar20 = 0.5;
      if (fVar21 <= 0.0) {
        fVar20 = -0.5;
      }
      iVar14 = iVar14 + (uint)param_2[3] + (int)(fVar21 + fVar20);
      if (0x7e < iVar14) {
        iVar14 = 0x7f;
      }
      if (iVar14 < 2) {
        iVar14 = 1;
      }
      local_74 = *(undefined4 *)(puVar4 + 0xcc);
      pbVar11 = *(byte **)(param_1 + 0x90);
      if (pbVar11 != (byte *)0x0) {
        uVar15 = 0;
        pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
        do {
          if (pbVar11[uVar15 + 1] == 0x33) goto LAB_0047fb58;
          uVar15 = uVar15 + 1;
          pbVar10 = pbVar10 + 4;
        } while (uVar15 < *pbVar11);
      }
      pbVar10 = (byte *)0x0;
LAB_0047fb58:
      pbVar2 = (byte *)&local_74;
      if (pbVar10 != (byte *)0x0) {
        pbVar2 = pbVar10;
      }
      local_74 = *(undefined4 *)(puVar4 + 0xd0);
      pbVar10 = pbVar11;
      if (pbVar11 != (byte *)0x0) {
        uVar15 = 0;
        pbVar10 = pbVar11 + ((ulong)(*pbVar11 + 4) & 0x1fc);
        do {
          if (pbVar11[uVar15 + 1] == 0x34) goto LAB_0047fbac;
          uVar15 = uVar15 + 1;
          pbVar10 = pbVar10 + 4;
        } while (uVar15 < *pbVar11);
        pbVar10 = (byte *)0x0;
      }
LAB_0047fbac:
      pbVar11 = (byte *)&local_74;
      if (pbVar10 != (byte *)0x0) {
        pbVar11 = pbVar10;
      }
      uVar6 = 0x52;
      if ((*(int *)pbVar2 <= iVar14) && (iVar14 <= *(int *)pbVar11)) {
        uVar6 = 1;
        param_2[2] = (byte)uVar13;
        param_2[3] = (byte)iVar14;
      }
    }
  }
  return uVar6;
}


