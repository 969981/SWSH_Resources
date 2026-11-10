/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d640; name: FUN_0048d640
 */


/* WARNING: Removing unreachable block (ram,0x0048d758) */
/* WARNING: Removing unreachable block (ram,0x0048d9b4) */

void FUN_0048d640(long param_1,void *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  ushort uVar14;
  long lVar15;
  long lVar16;
  float *pfVar17;
  long *plVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_d0;
  ulong local_c8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  long local_78;
  
  lVar10 = FUN_00451590(param_1 + 0x18);
  if (((param_2 == (void *)0x0) || (lVar10 != *(long *)((long)param_2 + 0xd0))) ||
     ((*(byte *)(param_1 + 0x16d) >> 3 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Subroutine does not return */
    memset((void *)(param_1 + 0xa0),0,0x5c);
  }
  plVar18 = *(long **)((long)param_2 + 0xc0);
  memcpy((void *)(param_1 + 0x78),param_2,0x86);
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)((long)param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)((long)param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)((long)param_2 + 0x98);
  puVar9 = PTR_DAT_02712a90;
  uVar7 = *(uint *)((long)param_2 + 0x90);
  if (uVar7 == 0) goto LAB_0048da58;
  if ((*(uint *)(param_1 + 0x1a8) <= uVar7) && (*(uint *)(param_1 + 0x1ac) < uVar7)) {
    uVar2 = *(uint *)(param_1 + 0x1ac) + (uVar7 - *(uint *)(param_1 + 0x1a8));
    puVar11 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar2 * 0x18);
    if (puVar11 == (undefined8 *)0x0) goto LAB_0048da58;
    puVar13 = *(undefined8 **)(param_1 + 0x1a0);
    if ((puVar13 != (undefined8 *)0x0) && (puVar13 != puVar11)) {
      uVar8 = *(uint *)(param_1 + 0x1a8);
      if (uVar8 != 0) {
        puVar11[2] = puVar13[2];
        puVar11[1] = puVar13[1];
        *puVar11 = *puVar13;
        if (uVar8 != 1) {
          if (uVar8 == 2) {
            lVar15 = 1;
          }
          else {
            lVar15 = 1;
            lVar16 = 0;
            do {
              lVar4 = *(long *)(param_1 + 0x1a0) + lVar16;
              *(undefined8 *)((long)puVar11 + lVar16 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
              *(undefined8 *)((long)puVar11 + lVar16 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
              *(undefined8 *)((long)puVar11 + lVar16 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
              lVar4 = *(long *)(param_1 + 0x1a0) + lVar16;
              *(undefined8 *)((long)puVar11 + lVar16 + 0x40) = *(undefined8 *)(lVar4 + 0x40);
              *(undefined8 *)((long)puVar11 + lVar16 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
              lVar15 = lVar15 + 2;
              *(undefined8 *)((long)puVar11 + lVar16 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
              lVar16 = lVar16 + 0x30;
            } while ((ulong)uVar8 - (ulong)(~uVar8 & 1) != lVar15);
            if ((~uVar8 & 1) == 0) goto LAB_0048d988;
          }
          puVar13 = puVar11 + lVar15 * 3;
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar15 * 0x18);
          puVar13[2] = puVar3[2];
          puVar13[1] = puVar3[1];
          *puVar13 = *puVar3;
        }
LAB_0048d988:
        puVar13 = *(undefined8 **)(param_1 + 0x1a0);
      }
      FUN_00404870(*(undefined4 *)puVar9,puVar13);
    }
    *(undefined8 **)(param_1 + 0x1a0) = puVar11;
    *(uint *)(param_1 + 0x1ac) = uVar2;
  }
  *(uint *)(param_1 + 0x1a8) = uVar7;
  if (uVar7 == 1) {
    lVar16 = 0;
  }
  else {
    lVar15 = 0;
    lVar16 = 0;
    do {
      puVar11 = (undefined8 *)(*(long *)((long)param_2 + 0x88) + lVar15);
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar15);
      puVar13[2] = puVar11[2];
      puVar13[1] = puVar11[1];
      *puVar13 = *puVar11;
      lVar4 = *(long *)((long)param_2 + 0x88) + lVar15;
      lVar5 = *(long *)(param_1 + 0x1a0) + lVar15;
      lVar15 = lVar15 + 0x30;
      *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar4 + 0x20);
      lVar16 = lVar16 + 2;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
    } while ((ulong)uVar7 - ((ulong)uVar7 & 1) != lVar16);
    if ((uVar7 & 1) == 0) goto LAB_0048da58;
  }
  puVar11 = (undefined8 *)(*(long *)((long)param_2 + 0x88) + lVar16 * 0x18);
  puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + lVar16 * 0x18);
  puVar13[2] = puVar11[2];
  puVar13[1] = puVar11[1];
  *puVar13 = *puVar11;
LAB_0048da58:
  fVar21 = *(float *)((long)param_2 + 200);
  uVar14 = *(ushort *)(param_1 + 0x16c);
  if ((uVar14 >> 0xb & 1) == 0) {
    FUN_00488990(*(undefined8 *)(param_1 + 0x160),param_1 + 0x28,param_1 + 0x128,
                 *(undefined8 *)(param_1 + 0x158));
    if (*(long **)(param_1 + 0x200) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x200) + 0xe8))();
    }
    *(undefined4 *)(param_1 + 0x138) = 0x42ca0000;
    uVar14 = *(ushort *)(param_1 + 0x16c);
    local_d0 = 0;
    local_c8 = 0;
    plVar12 = *(long **)(param_1 + 0x160);
    plVar1 = (long *)((long)param_2 + 0xb0);
    if (param_2 == (void *)0x0) {
      plVar1 = (long *)0x0;
    }
    plVar6 = &local_d0;
    if ((uVar14 & 0x80) != 0) {
      plVar6 = plVar1;
    }
    if (plVar18 != plVar12) {
      *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) & 0xfd;
      *(undefined2 *)(param_1 + 0xf9) = 0;
      *(undefined1 *)(param_1 + 0xfb) = 0;
      lVar15 = param_1 + 0x1b0;
      if ((uVar14 & 0x40) != 0) {
        lVar15 = 0;
      }
      *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
      (**(code **)(*plVar12 + 0x150))
                (plVar12,param_1 + 0x78,uVar14 >> 7 | 0xffffffdf,param_1 + 0x1a0,param_1 + 0x28,
                 lVar15,plVar6,lVar10 == 0,plVar18);
    }
    *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x1b8);
    fVar19 = *(float *)(param_1 + 0x1bc) + *(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x104) = fVar19;
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x108) + fVar19;
    fVar19 = *(float *)(param_1 + 0x1c0) + *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x10c) = fVar19;
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x110) + fVar19;
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x78);
    if (*(uint *)(param_1 + 0x1a8) == 0) {
      fVar19 = 1.0;
    }
    else {
      fVar19 = 1.0;
      lVar10 = (ulong)*(uint *)(param_1 + 0x1a8) * 0x18;
      pfVar17 = (float *)(*(long *)(param_1 + 0x1a0) + 0x10);
      do {
        fVar19 = *pfVar17 * fVar19;
        lVar10 = lVar10 + -0x18;
        pfVar17 = pfVar17 + 6;
      } while (lVar10 != 0);
    }
    fVar19 = fVar19 * *(float *)(param_1 + 0x21c);
    fVar20 = *(float *)(param_1 + 0x218) * fVar19;
    *(ushort *)(param_1 + 0x16c) = *(ushort *)(param_1 + 0x16c) & 0xfdff;
    *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) + 0.0;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) + fVar21;
    *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x1b0) + *(float *)(param_1 + 0x78);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0xa8) + 0.0;
    *(float *)(param_1 + 0x7c) = fVar20;
    fVar21 = (float)FUN_00484700(*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x28));
    if ((fVar21 != *(float *)(param_1 + 0x27c)) || (fVar19 != *(float *)(param_1 + 0x280))) {
      *(float *)(param_1 + 0x27c) = fVar21;
      *(float *)(param_1 + 0x280) = fVar19;
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar21 = (float)NEON_fminnm(fVar21,DAT_01d4c6b8);
      if (*(float *)(param_1 + 0x270) != fVar21) {
        if (*(int *)(param_1 + 0x2b0) != 0) {
          puVar11 = *(undefined8 **)(param_1 + 0x2a8);
          do {
            puVar13 = puVar11 + 1;
            FUN_004817b0(fVar21,*puVar11,param_1);
            puVar11 = puVar13;
          } while (puVar13 !=
                   (undefined8 *)
                   (*(long *)(param_1 + 0x2a8) + (ulong)*(uint *)(param_1 + 0x2b0) * 8));
        }
        if ((~(uint)fVar21 & 0x7f800000) != 0) {
          *(float *)(param_1 + 0x270) = fVar21;
        }
      }
    }
    uVar14 = *(ushort *)(param_1 + 0x16c);
    if ((uVar14 >> 7 & 1) == 0) {
      if (*(long *)(param_1 + 0x68) != 0) {
        FUN_00479970();
      }
      if ((int)plVar6[1] != 0) {
        local_98 = *(undefined4 *)(param_1 + 0x29c);
        local_90 = *(undefined8 *)(param_1 + 0x2a0);
        local_88 = *(undefined4 *)(param_1 + 0x38);
        local_a0 = *(undefined8 *)(param_1 + 0x28);
        local_80 = *(undefined4 *)(param_1 + 0x288);
        local_84 = *(undefined4 *)(param_1 + 0x1d8);
        local_7c = *(byte *)(param_1 + 0x26f) >> 1 & 1;
        local_78 = param_1;
        FUN_004778e0(*(undefined8 *)PTR_DAT_02712dc0,plVar6,&local_a0,param_1 + 0x68);
      }
      uVar14 = *(ushort *)(param_1 + 0x16c) | 0x80;
      *(ushort *)(param_1 + 0x16c) = uVar14;
    }
    if (local_d0 != 0) {
      local_c8 = local_c8 & 0xffffffff00000000;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      uVar14 = *(ushort *)(param_1 + 0x16c);
    }
  }
  *(ushort *)(param_1 + 0x16c) = uVar14 | 0x60;
  return;
}


