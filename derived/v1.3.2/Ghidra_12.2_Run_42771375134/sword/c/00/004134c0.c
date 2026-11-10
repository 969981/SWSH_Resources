/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004134c0; name: FUN_004134c0
 */


/* WARNING: Removing unreachable block (ram,0x004139a0) */

undefined8
FUN_004134c0(long *param_1,uint *param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  uint *__src;
  long lVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  void *__dest;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  long *plVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_7c;
  uint *local_78;
  
  local_7c = param_3;
  local_78 = param_2;
  iVar8 = (**(code **)(*param_1 + 0x88))();
  if (iVar8 != 6) {
    uVar10 = *(undefined8 *)PTR_DAT_02712ae0;
    lVar11 = param_1[2];
    uVar9 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00449c90(uVar10,(int)lVar11,6,uVar9);
    return 0x5a;
  }
  bVar4 = (byte)param_2[1];
  *(byte *)(param_1 + 0x21) =
       bVar4 & 2 | bVar4 >> 2 & 1 | bVar4 >> 1 & 4 | *(byte *)(param_1 + 0x21) & 0xf8;
  uVar22 = *(uint *)((long)param_2 + 5);
  param_2 = (uint *)((long)param_2 + 9);
  if (uVar22 != 0) {
    uVar20 = 0;
    local_78 = param_2;
    do {
      uVar10 = FUN_00449a40(&local_78,&local_7c,auStack_a8);
      if ((int)uVar10 != 1) {
        return uVar10;
      }
      if (local_90 == 0) {
        iVar8 = FUN_00413d10(param_1,local_a0,local_a4,CONCAT44(uStack_9c,local_a0),uStack_98);
        param_2 = local_78;
      }
      else {
        iVar8 = FUN_00413f40(param_1);
        param_2 = local_78;
      }
      if (iVar8 != 1) {
        return 2;
      }
      uVar20 = uVar20 + 1;
      local_78 = param_2;
    } while (uVar20 < uVar22);
  }
  puVar6 = PTR_DAT_02712a90;
  local_78 = param_2 + 1;
  uVar22 = *param_2;
  uVar18 = (ulong)uVar22;
  if (uVar22 != 0) {
    lVar11 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,uVar18 * 0x28,8);
    if (lVar11 == 0) {
      return 0x34;
    }
    uVar20 = *local_78;
    puVar16 = (undefined8 *)(lVar11 + 0x10);
    uVar15 = uVar18;
    local_78 = local_78 + 1;
    do {
      *(uint *)(puVar16 + -2) = uVar20;
      uVar15 = uVar15 - 1;
      *(uint *)((long)puVar16 + -0xc) = *local_78;
      puVar16[-1] = *(undefined8 *)(local_78 + 1);
      *puVar16 = *(undefined8 *)(local_78 + 3);
      puVar16[1] = *(undefined8 *)(local_78 + 5);
      puVar16[2] = *(undefined8 *)(local_78 + 7);
      uVar20 = local_78[9];
      local_78 = local_78 + 10;
      puVar16 = puVar16 + 5;
    } while (uVar15 != 0);
    if (param_1[0x1c] != 0) {
      *(undefined4 *)(param_1 + 0x1d) = 0;
      FUN_00404870(*(undefined4 *)puVar6);
      param_1[0x1c] = 0;
      *(undefined4 *)((long)param_1 + 0xec) = 0;
    }
    *(uint *)(param_1 + 0x1b) = uVar20;
    lVar12 = FUN_00404690(*(undefined4 *)puVar6,uVar18 * 0x18);
    param_1[0x1c] = lVar12;
    if (lVar12 == 0) {
      FUN_004047f0(*(undefined4 *)puVar6,lVar11);
      return 2;
    }
    *(uint *)((long)param_1 + 0xec) = uVar22;
    lVar12 = lVar11;
    do {
      FUN_00414380(param_1,lVar12);
      uVar18 = uVar18 - 1;
      lVar12 = lVar12 + 0x28;
    } while (uVar18 != 0);
    FUN_004047f0(*(undefined4 *)puVar6,lVar11);
  }
  puVar6 = PTR_DAT_02712a90;
  plVar23 = param_1 + 0x19;
  lVar11 = *plVar23;
  if (lVar11 != 0) {
    if (*(uint *)(param_1 + 0x1a) != 0) {
      lVar12 = (ulong)*(uint *)(param_1 + 0x1a) * 0x18;
      puVar16 = (undefined8 *)(lVar11 + 0x10);
      do {
        if (puVar16[-1] != 0) {
          FUN_00404870(*(undefined4 *)puVar6);
          puVar16[-1] = 0;
        }
        lVar12 = lVar12 + -0x18;
        *puVar16 = 0;
        puVar16 = puVar16 + 3;
      } while (lVar12 != 0);
      lVar11 = *plVar23;
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar11);
    *plVar23 = 0;
    param_1[0x1a] = 0;
  }
  puVar19 = local_78 + 1;
  uVar22 = *local_78;
  uVar18 = (ulong)uVar22;
  local_78 = puVar19;
  if (uVar22 == 0) {
LAB_00413a80:
    uVar10 = FUN_004854e0(param_1,&local_78,&local_7c,param_5 & 1);
    if ((int)uVar10 != 1) {
      return uVar10;
    }
    if ((param_5 & 1) != 0) {
      return uVar10;
    }
    puVar19 = (uint *)((long)local_78 + 1);
    bVar4 = (byte)*local_78;
    uVar22 = (uint)bVar4;
    local_78 = puVar19;
    if (*(uint *)((long)param_1 + 0xf4) != (uint)bVar4) {
      lVar11 = param_1[0x20];
      if (lVar11 != 0) {
        uVar9 = *(undefined4 *)PTR_DAT_02712a90;
        if (*(long *)(lVar11 + 0x10) != 0) {
          *(undefined4 *)(lVar11 + 0x18) = 0;
          FUN_00404870(uVar9);
          *(undefined8 *)(lVar11 + 0x10) = 0;
          *(undefined4 *)(lVar11 + 0x1c) = 0;
        }
        FUN_00404870(uVar9,lVar11);
        param_1[0x20] = 0;
      }
      if (bVar4 == 3) {
        puVar16 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x40);
        if (puVar16 == (undefined8 *)0x0) {
          param_1[0x20] = 0;
          *(uint *)((long)param_1 + 0xf4) = uVar22;
          return 0x34;
        }
        *puVar16 = 0;
        *(undefined4 *)(puVar16 + 1) = 0;
        *(byte *)(puVar16 + 4) = *(byte *)(puVar16 + 4) & 0xe0 | 8;
        puVar16[2] = 0;
        puVar16[3] = 0;
        param_1[0x20] = (long)puVar16;
      }
      *(uint *)((long)param_1 + 0xf4) = uVar22;
    }
    if (uVar22 == 3) {
      uVar10 = FUN_004140f0(param_1[0x20],&local_78);
      if ((int)uVar10 != 1) {
        return uVar10;
      }
      lVar11 = param_1[0x20];
      *(uint *)(lVar11 + 0x28) = *local_78;
      *(uint *)(lVar11 + 0x2c) = local_78[1];
      uVar18 = (ulong)*(uint *)PTR_DAT_02712b38;
      auVar5 = SEXT816((long)(uVar18 * (long)(int)local_78[2])) * SEXT816(0x20c49ba5e353f7cf);
      *(int *)(lVar11 + 0x30) = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
      *(byte *)(lVar11 + 0x20) = *(byte *)(lVar11 + 0x20) & 0xe0 | (byte)local_78[3] & 0x1f;
      *(uint *)(lVar11 + 0x24) = local_78[4];
      *(uint *)(lVar11 + 0x34) = local_78[5];
      *(uint *)(lVar11 + 0x38) = local_78[6];
      auVar5 = SEXT816((long)((long)(int)local_78[7] * uVar18)) * SEXT816(0x20c49ba5e353f7cf);
      *(int *)(lVar11 + 0x3c) = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
      local_78 = local_78 + 8;
    }
    else {
      uVar18 = (ulong)*(uint *)PTR_DAT_02712b38;
    }
    dVar24 = (double)(*(float *)PTR_DAT_02712a98 * (float)(int)*local_78) *
             DAT_01cd5288 * (double)uVar18;
    dVar25 = 0.5;
    if (dVar24 <= 0.0) {
      dVar25 = -0.5;
    }
    *(int *)(param_1 + 0x1e) = (int)(dVar25 + dVar24);
    uVar22 = *(uint *)(param_1 + 0x18);
    if (uVar22 == 0) {
      return 1;
    }
    lVar11 = param_1[0x17];
    lVar12 = lVar11;
    do {
      if ((*(uint *)(*(long *)(lVar11 + 8) + 0x18) & 0xffff0000) != 0x100000) {
        *(int *)(*(long *)(lVar11 + 8) + 0x20) = (int)param_1[0x1e];
        lVar12 = param_1[0x17];
        uVar22 = *(uint *)(param_1 + 0x18);
      }
      lVar11 = lVar11 + 0x10;
    } while (lVar11 != lVar12 + (ulong)uVar22 * 0x10);
    return 1;
  }
  lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar18 * 0x18);
  *plVar23 = lVar11;
  if (lVar11 == 0) {
    return 2;
  }
  *(uint *)((long)param_1 + 0xd4) = uVar22;
  puVar6 = PTR_DAT_02712b38;
  uVar20 = 0;
  uVar17 = *(uint *)(param_1 + 0x1a);
  uVar21 = uVar22;
  if (uVar17 < uVar22) goto LAB_004138dc;
LAB_004137a4:
  uVar21 = (int)uVar18 + 1;
  lVar11 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar21 * 0x18);
  if (lVar11 == 0) goto LAB_00413908;
  lVar12 = param_1[0x19];
  if ((lVar12 == 0) || (lVar12 == lVar11)) goto LAB_004138b4;
  uVar3 = *(uint *)(param_1 + 0x1a);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      lVar13 = 0;
LAB_004137f0:
      puVar16 = (undefined8 *)(lVar11 + lVar13 * 0x18);
      if (puVar16 != (undefined8 *)0x0) {
        lVar12 = lVar11 + lVar13 * 0x18;
        *(undefined8 *)(lVar12 + 8) = 0;
        *(undefined8 *)(lVar12 + 0x10) = 0;
      }
      puVar14 = (undefined8 *)(*plVar23 + lVar13 * 0x18);
      puVar16[2] = puVar14[2];
      puVar16[1] = puVar14[1];
      *puVar16 = *puVar14;
    }
    else {
      lVar12 = 0;
      lVar13 = 0;
      do {
        puVar16 = (undefined8 *)(lVar11 + lVar12);
        if (puVar16 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar11 + lVar12 + 8) = 0;
          *(undefined8 *)(lVar11 + lVar12 + 0x10) = 0;
        }
        puVar14 = (undefined8 *)(*plVar23 + lVar12);
        puVar16[2] = puVar14[2];
        puVar16[1] = puVar14[1];
        lVar1 = lVar11 + lVar12;
        *puVar16 = *puVar14;
        *(undefined8 *)(lVar1 + 0x20) = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        lVar2 = *plVar23 + lVar12;
        lVar12 = lVar12 + 0x30;
        *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar2 + 0x28);
        *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
        lVar13 = lVar13 + 2;
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar13);
      if ((uVar3 & 1) != 0) goto LAB_004137f0;
    }
    lVar12 = *plVar23;
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar12);
LAB_004138b4:
  param_1[0x19] = lVar11;
  *(uint *)((long)param_1 + 0xd4) = uVar21;
  if (uVar21 <= uVar17) goto LAB_00413908;
LAB_004138e4:
  uVar17 = *(uint *)(param_1 + 0x1a);
  puVar19 = (uint *)(param_1[0x19] + (ulong)uVar17 * 0x18);
  *(uint *)(param_1 + 0x1a) = uVar17 + 1;
  if (puVar19 != (uint *)0x0) {
    lVar11 = param_1[0x19] + (ulong)uVar17 * 0x18;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0x10) = 0;
  }
  do {
    puVar7 = PTR_DAT_02712a90;
    uVar3 = *local_78;
    uVar17 = local_78[1];
    uVar21 = local_78[2];
    uVar18 = (ulong)uVar21;
    __src = local_78 + 3;
    local_78 = __src;
    if (uVar21 != 0) {
      if (*(long *)(puVar19 + 2) != 0) {
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
        puVar19[2] = 0;
        puVar19[3] = 0;
      }
      *puVar19 = uVar3;
      puVar19[1] = uVar17;
      puVar19[4] = 0;
      puVar19[5] = 0;
      __dest = (void *)FUN_00404690(*(undefined4 *)puVar7,uVar18 * 0xc);
      *(void **)(puVar19 + 2) = __dest;
      if (__dest == (void *)0x0) {
        puVar19[4] = 0;
        return 2;
      }
      memcpy(__dest,__src,(ulong)(uVar21 * 0xc));
      puVar19[4] = uVar21;
      puVar19[5] = 0;
      if (uVar21 == 1) {
        lVar11 = 0;
LAB_00413a30:
        dVar24 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
        dVar24 = dVar24 * (double)*(float *)(*(long *)(puVar19 + 2) + lVar11 * 0xc);
        dVar25 = 0.5;
        if (dVar24 <= 0.0) {
          dVar25 = -0.5;
        }
        *(float *)(*(long *)(puVar19 + 2) + lVar11 * 0xc) = (float)(int)(dVar25 + dVar24);
      }
      else {
        lVar12 = 0;
        lVar11 = 0;
        do {
          lVar11 = lVar11 + 2;
          dVar24 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
          dVar24 = dVar24 * (double)*(float *)(*(long *)(puVar19 + 2) + lVar12);
          dVar25 = 0.5;
          if (dVar24 <= 0.0) {
            dVar25 = -0.5;
          }
          *(float *)(*(long *)(puVar19 + 2) + lVar12) = (float)(int)(dVar25 + dVar24);
          lVar13 = *(long *)(puVar19 + 2) + lVar12;
          dVar24 = (double)NEON_ucvtf((ulong)*(uint *)puVar6);
          dVar24 = dVar24 * (double)*(float *)(lVar13 + 0xc);
          dVar25 = 0.5;
          if (dVar24 <= 0.0) {
            dVar25 = -0.5;
          }
          lVar12 = lVar12 + 0x18;
          *(float *)(lVar13 + 0xc) = (float)(int)(dVar25 + dVar24);
        } while (uVar18 - (uVar18 & 1) != lVar11);
        if ((uVar21 & 1) != 0) goto LAB_00413a30;
      }
      local_78 = local_78 + uVar18 * 3;
    }
    uVar20 = uVar20 + 1;
    if (uVar22 <= uVar20) goto LAB_00413a80;
    uVar21 = *(uint *)((long)param_1 + 0xd4);
    uVar18 = (ulong)uVar21;
    uVar17 = *(uint *)(param_1 + 0x1a);
    if (uVar21 <= uVar17) goto LAB_004137a4;
LAB_004138dc:
    if (uVar17 < uVar21) goto LAB_004138e4;
LAB_00413908:
    puVar19 = (uint *)0x0;
  } while( true );
}


