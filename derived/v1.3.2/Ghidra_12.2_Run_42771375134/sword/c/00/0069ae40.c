/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069ae40; name: FUN_0069ae40
 */


void FUN_0069ae40(long param_1,long *param_2,long param_3,uint param_4)

{
  bool bVar1;
  long *plVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  void *__s;
  code *pcVar14;
  ulong uVar15;
  ushort *puVar16;
  int *piVar17;
  byte *pbVar18;
  ulong uVar19;
  long lVar20;
  long *plVar21;
  long *plVar23;
  long *plVar22;
  undefined8 uVar24;
  uint *puVar25;
  ulong uVar26;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_0069bae0(param_1);
  }
  lVar20 = *(long *)(param_3 + 8);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar20;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
  }
  pcVar14 = *(code **)(param_1 + 0x98);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar14)(param_1 + 0xb0);
  }
  if (*(code **)(param_3 + 0x20) != (code *)0x0) {
    (**(code **)(param_3 + 0x20))(param_3 + 0x30,param_1 + 0xb0);
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    uVar24 = *(undefined8 *)(param_3 + 0x18);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0xa8) = uVar5;
    *(undefined8 *)(param_1 + 0x90) = uVar11;
    *(undefined8 *)(param_1 + 0x98) = uVar24;
  }
  pcVar14 = *(code **)(param_1 + 0x118);
  if (pcVar14 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    (*pcVar14)(param_1 + 0x130);
  }
  if (*(code **)(param_3 + 0xa0) != (code *)0x0) {
    (**(code **)(param_3 + 0xa0))(param_3 + 0xb0,param_1 + 0x130);
    uVar11 = *(undefined8 *)(param_3 + 0x90);
    uVar24 = *(undefined8 *)(param_3 + 0x98);
    uVar5 = *(undefined8 *)(param_3 + 0xa8);
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_3 + 0xa0);
    *(undefined8 *)(param_1 + 0x128) = uVar5;
    *(undefined8 *)(param_1 + 0x110) = uVar11;
    *(undefined8 *)(param_1 + 0x118) = uVar24;
  }
  if ((*(long *)(param_3 + 8) == 0) || (*(char *)(*(long *)(param_3 + 8) + 0x170) == '\0')) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_006bef30();
  }
  if (*(ushort *)((long)piVar10 - (long)*piVar10) < 5) {
    piVar17 = (int *)0x0;
  }
  else {
    uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2];
    piVar17 = (int *)0x0;
    if (uVar15 != 0) {
      puVar25 = (uint *)((long)piVar10 + uVar15);
      piVar17 = (int *)((long)puVar25 + (ulong)*puVar25);
    }
  }
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar15 == 0)) {
    puVar25 = (uint *)0x0;
  }
  else {
    puVar25 = (uint *)((long)piVar17 + uVar15);
    puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25);
  }
  uVar24 = *(undefined8 *)(param_1 + 0x78);
  uVar11 = (**(code **)(*param_2 + 0x10))(param_2,0xb8,8);
  lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_0069bad8;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = param_2;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  FUN_0069ee10(uVar11,param_2,uVar24);
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  lVar20 = *(long *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = uVar11;
  if (lVar20 != 0) {
    FUN_0069e2b0(lVar20 + 0x10);
    (**(code **)(**(long **)(param_1 + 0x1b8) + 0x18))
              (*(long **)(param_1 + 0x1b8),lVar20,*(undefined8 *)(param_1 + 0x1c0),
               *(undefined8 *)(param_1 + 0x1c8));
  }
  *(long **)(param_1 + 0x1b8) = param_2;
  *(undefined8 *)(param_1 + 0x1c0) = 0xb8;
  *(undefined8 *)(param_1 + 0x1c8) = 8;
  if (((*(long *)(param_3 + 8) == 0) || (*(char *)(*(long *)(param_3 + 8) + 0x170) == '\0')) ||
     (iVar8 = FUN_006bef60(), iVar8 == 0)) {
    iVar8 = 0xb;
  }
  else {
    iVar8 = iVar8 + 1;
  }
  uVar24 = *(undefined8 *)(param_1 + 0x78);
  uVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x90,8);
  lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_0069bad8;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = param_2;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  FUN_006bc3a0(uVar11,param_2,uVar24,iVar8);
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  lVar20 = *(long *)(param_1 + 400);
  *(undefined8 *)(param_1 + 400) = uVar11;
  if (lVar20 != 0) {
    lVar9 = *(long *)(lVar20 + 0x60);
    if (lVar9 != 0) {
      *(long *)(lVar20 + 0x68) = lVar9;
      (**(code **)(**(long **)(lVar20 + 0x78) + 0x18))
                (*(long **)(lVar20 + 0x78),lVar9,*(long *)(lVar20 + 0x70) - lVar9,8);
    }
    lVar9 = *(long *)(lVar20 + 0x30);
    if (lVar9 != 0) {
      *(long *)(lVar20 + 0x38) = lVar9;
      (**(code **)(**(long **)(lVar20 + 0x48) + 0x18))
                (*(long **)(lVar20 + 0x48),lVar9,*(long *)(lVar20 + 0x40) - lVar9,8);
    }
    FUN_0069e020(lVar20);
    (**(code **)(**(long **)(param_1 + 0x198) + 0x18))
              (*(long **)(param_1 + 0x198),lVar20,*(undefined8 *)(param_1 + 0x1a0),
               *(undefined8 *)(param_1 + 0x1a8));
    uVar11 = *(undefined8 *)(param_1 + 400);
  }
  *(long **)(param_1 + 0x198) = param_2;
  *(undefined8 *)(param_1 + 0x1a0) = 0x90;
  *(undefined8 *)(param_1 + 0x1a8) = 8;
  FUN_006bc7d0(uVar11,param_1 + 0x200);
  plVar22 = *(long **)(param_1 + 0x1d8);
  uVar15 = (ulong)*puVar25;
  uVar19 = (long)plVar22 - *(long *)(param_1 + 0x1d0) >> 3;
  plVar2 = (long *)(param_1 + 0x1d0);
  if (uVar19 < uVar15) {
    FUN_0069dc40(plVar2,uVar15 - uVar19);
    if (*(long *)(param_1 + 0x1d8) != *plVar2) {
LAB_0069b240:
      uVar15 = 0;
      uVar19 = 1;
      do {
        uVar6 = puVar25[uVar15 + 1];
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_0069bad8;
        *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = param_2;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
        lVar9 = (**(code **)(*param_2 + 0x10))(param_2,0x1d0,8);
        if (lVar9 == 0) {
          (**(code **)(*param_2 + 0xb8))(param_2);
        }
        FUN_006b4ce0(lVar9,(long)(puVar25 + uVar15 + 1) + (ulong)uVar6,uVar15 << 0x20 | 1);
        *(long **)(lVar9 + 8) = param_2;
        *(long *)(lVar9 + 0x10) = lVar9;
        *(undefined8 *)(lVar9 + 0x18) = 0x1d0;
        *(undefined8 *)(lVar9 + 0x20) = 8;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        lVar20 = *(long *)(param_1 + 0x1d0);
        if ((ulong)(*(long *)(param_1 + 0x1d8) - lVar20 >> 3) <= uVar15) goto LAB_0069bad0;
        lVar12 = *(long *)(lVar20 + uVar15 * 8);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
          *(undefined8 *)(lVar20 + uVar15 * 8) = 0;
        }
        *(long *)(lVar20 + uVar15 * 8) = lVar9;
        bVar1 = uVar19 < (ulong)(*(long *)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1d0) >> 3);
        uVar15 = uVar19;
        uVar19 = (ulong)((int)uVar19 + 1);
      } while (bVar1);
    }
  }
  else {
    plVar21 = plVar22;
    if (uVar19 != uVar15) {
      plVar21 = (long *)(*(long *)(param_1 + 0x1d0) + uVar15 * 8);
      if (plVar21 != plVar22) {
        do {
          plVar23 = plVar22 + -1;
          if (*plVar23 != 0) {
            (**(code **)(*(long *)(*plVar23 + 0x48) + 0x18))();
            plVar22[-1] = 0;
          }
          plVar22 = plVar23;
        } while (plVar21 != plVar23);
      }
      *(long **)(param_1 + 0x1d8) = plVar21;
    }
    if (plVar21 != (long *)*plVar2) goto LAB_0069b240;
  }
  puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
  if (*puVar16 < 7) {
LAB_0069b5a0:
    lVar20 = 0;
  }
  else {
    if (((ulong)puVar16[3] != 0) &&
       (puVar25 = (uint *)((long)piVar10 + (ulong)puVar16[3]),
       lVar20 = (long)puVar25 + (ulong)*puVar25, lVar20 != 0)) {
      uVar24 = *(undefined8 *)(param_1 + 0x78);
      uVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x80,0x10);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0069bad8;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      FUN_006ac7a0(uVar11,uVar24,lVar20);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      lVar20 = *(long *)(param_1 + 0x230);
      *(undefined8 *)(param_1 + 0x230) = uVar11;
      if (lVar20 != 0) {
        lVar9 = *(long *)(lVar20 + 0x10);
        if (lVar9 != 0) {
          *(long *)(lVar20 + 0x18) = lVar9;
          (**(code **)(**(long **)(lVar20 + 0x28) + 0x18))
                    (*(long **)(lVar20 + 0x28),lVar9,*(long *)(lVar20 + 0x20) - lVar9,0x10);
        }
        (**(code **)(**(long **)(param_1 + 0x238) + 0x18))
                  (*(long **)(param_1 + 0x238),lVar20,*(undefined8 *)(param_1 + 0x240),
                   *(undefined8 *)(param_1 + 0x248));
      }
      *(long **)(param_1 + 0x238) = param_2;
      *(undefined8 *)(param_1 + 0x240) = 0x80;
      *(undefined8 *)(param_1 + 0x248) = 0x10;
      puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
    }
    if (*puVar16 < 0xb) goto LAB_0069b5a0;
    if (((ulong)puVar16[5] != 0) &&
       (puVar25 = (uint *)((long)piVar10 + (ulong)puVar16[5]),
       lVar20 = (long)puVar25 + (ulong)*puVar25, lVar20 != 0)) {
      uVar24 = *(undefined8 *)(param_1 + 0x78);
      uVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x58,8);
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0069bad8;
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      FUN_006c1d80(uVar11,uVar24,lVar20);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      lVar20 = *(long *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x250) = uVar11;
      if (lVar20 != 0) {
        lVar9 = *(long *)(lVar20 + 0x10);
        if (lVar9 != 0) {
          *(long *)(lVar20 + 0x18) = lVar9;
          (**(code **)(**(long **)(lVar20 + 0x28) + 0x18))
                    (*(long **)(lVar20 + 0x28),lVar9,*(long *)(lVar20 + 0x20) - lVar9,0x10);
        }
        (**(code **)(**(long **)(param_1 + 600) + 0x18))
                  (*(long **)(param_1 + 600),lVar20,*(undefined8 *)(param_1 + 0x260),
                   *(undefined8 *)(param_1 + 0x268));
      }
      *(long **)(param_1 + 600) = param_2;
      *(undefined8 *)(param_1 + 0x260) = 0x58;
      *(undefined8 *)(param_1 + 0x268) = 8;
      puVar16 = (ushort *)((long)piVar10 - (long)*piVar10);
    }
    if ((*puVar16 < 0xf) || ((ulong)puVar16[7] == 0)) goto LAB_0069b5a0;
    puVar25 = (uint *)((long)piVar10 + (ulong)puVar16[7]);
    lVar20 = (long)puVar25 + (ulong)*puVar25;
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_0069bad8;
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  lVar12 = (**(code **)(*param_2 + 0x10))(param_2,0x330,0x10);
  if (lVar12 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_006b0060(lVar12,lVar20);
  *(long **)(lVar12 + 8) = param_2;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0x330;
  *(undefined8 *)(lVar12 + 0x20) = 0x10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x270) + 0x18))();
    *(undefined8 *)(param_1 + 0x270) = 0;
  }
  lVar20 = 0;
  if (lVar12 != 0) {
    lVar20 = lVar12 + 0x48;
  }
  *(long *)(param_1 + 0x270) = lVar20;
  if (*(long *)(param_1 + 0x88) == 0) {
LAB_0069b6cc:
    lVar20 = 0;
  }
  else {
    if (*(ushort *)((long)piVar10 - (long)*piVar10) < 5) {
      piVar17 = (int *)0x0;
    }
    else {
      uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2];
      piVar17 = (int *)0x0;
      if (uVar15 != 0) {
        puVar25 = (uint *)((long)piVar10 + uVar15);
        piVar17 = (int *)((long)puVar25 + (ulong)*puVar25);
      }
    }
    if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 7) ||
       (uVar15 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[3], uVar15 == 0))
    goto LAB_0069b6cc;
    puVar25 = (uint *)((long)piVar17 + uVar15);
    lVar20 = (long)puVar25 + (ulong)*puVar25;
  }
  uVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = param_2;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_00696df0(uVar11,lVar20);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    lVar20 = *(long *)(param_1 + 0x440);
    *(undefined8 *)(param_1 + 0x440) = uVar11;
    if (lVar20 != 0) {
      FUN_006e0110(lVar20);
      (**(code **)(**(long **)(param_1 + 0x448) + 0x18))
                (*(long **)(param_1 + 0x448),lVar20,*(undefined8 *)(param_1 + 0x450),
                 *(undefined8 *)(param_1 + 0x458));
    }
    *(long **)(param_1 + 0x448) = param_2;
    *(undefined8 *)(param_1 + 0x450) = 0x128;
    *(undefined8 *)(param_1 + 0x458) = 8;
    if (((0xc < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[6], uVar15 != 0)) &&
       (puVar25 = (uint *)((long)piVar10 + uVar15),
       piVar10 = (int *)((long)puVar25 + (ulong)*puVar25), piVar10 != (int *)0x0)) {
      puVar3 = (uint *)((long)piVar10 + (ulong)*(ushort *)((long)piVar10 + (4 - (long)*piVar10)));
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
      puVar25 = puVar3 + 1;
      uVar15 = (ulong)*puVar3;
      if (uVar15 != 0) {
        puVar3 = puVar25 + uVar15;
        do {
          piVar10 = (int *)((long)puVar25 + (ulong)*puVar25);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 5) ||
             (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[2], uVar15 == 0)) {
            lVar20 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar10 + uVar15);
            lVar20 = (long)puVar4 + (ulong)*puVar4;
          }
          bVar7 = *(byte *)(lVar20 + 4);
          uVar15 = 0xcbf29ce484222645;
          if (bVar7 != 0) {
            uVar15 = 0xcbf29ce484222645;
            pbVar18 = (byte *)(lVar20 + 5);
            do {
              uVar15 = (uVar15 ^ bVar7) * 0x100000001b3;
              bVar7 = *pbVar18;
              pbVar18 = pbVar18 + 1;
            } while (bVar7 != 0);
          }
          lVar20 = *(long *)(param_1 + 0x1d0);
          if (*(long *)(param_1 + 0x1d8) == lVar20) {
LAB_0069bad0:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar19 = 0;
          do {
            uVar26 = uVar19;
            lVar20 = *(long *)(lVar20 + uVar26 * 8);
            if (lVar20 != 0) {
              (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
            }
            puVar13 = (ulong *)FUN_006b4e80(lVar20);
            uVar19 = *puVar13;
            if (lVar20 != 0) {
              (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
            }
            if (uVar19 == uVar15) {
              lVar20 = *(long *)(param_1 + 0x1d0);
              lVar9 = *(long *)(param_1 + 0x1d8);
              break;
            }
            uVar19 = (ulong)((int)uVar26 + 1);
            lVar20 = *(long *)(param_1 + 0x1d0);
            lVar9 = *(long *)(param_1 + 0x1d8);
          } while (uVar19 < (ulong)(lVar9 - lVar20 >> 3));
          if ((ulong)(lVar9 - lVar20 >> 3) <= uVar26) goto LAB_0069bad0;
          uVar24 = *(undefined8 *)(param_1 + 400);
          uVar11 = 0;
          if (*(long *)(param_1 + 0x88) != 0) {
            if (*(char *)(*(long *)(param_1 + 0x88) + 0x170) == '\0') {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_006bef50();
            }
          }
          uStack_78 = *(undefined8 *)(param_1 + 0x270);
          if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 7) ||
             (uVar15 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[3], uVar15 == 0)) {
            local_70 = 0;
          }
          else {
            puVar4 = (uint *)((long)piVar10 + uVar15);
            local_70 = (long)puVar4 + (ulong)*puVar4;
          }
          uStack_68 = 0;
          local_90 = param_2;
          uStack_88 = uVar24;
          local_80 = uVar11;
          FUN_006b4e90(*(undefined8 *)(lVar20 + uVar26 * 8),param_2,&local_90,param_1 + 0x300,
                       *(undefined8 *)(param_1 + 0x440));
          puVar25 = puVar25 + 1;
        } while (puVar25 != puVar3);
      }
    }
    FUN_0069be70(param_1);
    if (((((param_4 & 1) == 0) || (*(long *)(param_1 + 0x88) == 0)) ||
        (*(char *)(*(long *)(param_1 + 0x88) + 0x170) == '\0')) ||
       (lVar20 = FUN_006bef70(), lVar20 == 0)) {
      return;
    }
    __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x250,0x10);
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (*(ulong *)(lVar20 + 0x80) < 0x10) {
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = param_2;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x250);
    }
  }
LAB_0069bad8:
                    /* WARNING: Subroutine does not return */
  abort();
}


