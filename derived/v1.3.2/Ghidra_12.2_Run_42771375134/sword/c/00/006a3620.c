/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a3620; name: FUN_006a3620
 */


void FUN_006a3620(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_80;
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  
  FUN_006a3ce0(param_1 + 0xa0,
               (*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7);
  lVar9 = *(long *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != lVar9) {
    uVar14 = 0;
    do {
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      plVar12 = (long *)(lVar9 + uVar14 * 0xa8);
      uVar7 = *(ulong *)(*(long *)(param_2 + 800) + uVar14 * 200 + 0x28);
      plVar11 = (long *)(lVar9 + uVar14 * 0xa8 + 8);
      local_6c[0] = 0;
      uVar10 = uVar7 >> 3 & 0x1fffffff;
      uVar5 = *plVar11 - *plVar12;
      if ((uVar7 & 7) != 0) {
        uVar10 = uVar10 + 1;
      }
      if (uVar10 - uVar5 == 0) {
LAB_006a3730:
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0x30);
        *puVar4 = uVar7 & 0xffffffff;
      }
      else {
        if (uVar10 < uVar5) {
          if (uVar10 < uVar5) {
            *plVar11 = *plVar12 + uVar10;
          }
          goto LAB_006a3730;
        }
        FUN_006a7610(plVar12,uVar10 - uVar5,local_6c);
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0x30);
        *puVar4 = uVar7 & 0xffffffff;
      }
      if ((uVar7 & 7) != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << (uVar7 & 7)) ^ 0xff);
      }
      puVar6 = (undefined1 *)*plVar12;
      if (0 < *plVar11 - (long)puVar6) {
        lVar8 = (*plVar11 + 1) - (long)puVar6;
        do {
          lVar8 = lVar8 + -1;
          *puVar6 = 0xff;
          puVar6 = puVar6 + 1;
        } while (1 < lVar8);
      }
      if ((*puVar4 & 7) != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << (*puVar4 & 7)) ^ 0xff);
      }
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      lVar8 = *(long *)(param_2 + 800) + uVar14 * 200;
      lVar13 = lVar9 + uVar14 * 0xa8;
      uVar7 = *(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50);
      plVar12 = (long *)(lVar13 + 0x38);
      uVar10 = uVar7 >> 5 & 0x1fffffff;
      plVar11 = (long *)(lVar13 + 0x40);
      uVar15 = uVar7 >> 2 & 0xffffffff;
      uVar5 = *plVar11 - *plVar12;
      uVar16 = uVar7 >> 2 & 7;
      if ((uVar7 >> 2 & 7) != 0) {
        uVar10 = uVar10 + 1;
      }
      local_68[0] = 0;
      if (uVar10 - uVar5 == 0) {
LAB_006a3840:
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0x68);
        *puVar4 = uVar15;
      }
      else {
        if (uVar10 < uVar5) {
          if (uVar10 < uVar5) {
            *plVar11 = *plVar12 + uVar10;
          }
          goto LAB_006a3840;
        }
        FUN_006a7610(plVar12,uVar10 - uVar5,local_68);
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0x68);
        *puVar4 = uVar15;
      }
      if (uVar16 != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << uVar16) ^ 0xff);
      }
      puVar6 = (undefined1 *)*plVar12;
      if (0 < *plVar11 - (long)puVar6) {
        lVar8 = (*plVar11 + 1) - (long)puVar6;
        do {
          lVar8 = lVar8 + -1;
          *puVar6 = 0xff;
          puVar6 = puVar6 + 1;
        } while (1 < lVar8);
      }
      if ((*puVar4 & 7) != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << (*puVar4 & 7)) ^ 0xff);
      }
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      lVar8 = *(long *)(param_2 + 800) + uVar14 * 200;
      lVar13 = lVar9 + uVar14 * 0xa8;
      uVar7 = *(long *)(lVar8 + 0x88) - *(long *)(lVar8 + 0x80);
      plVar12 = (long *)(lVar13 + 0x70);
      uVar10 = uVar7 >> 7 & 0x1fffffff;
      plVar11 = (long *)(lVar13 + 0x78);
      uVar15 = uVar7 >> 4 & 0xffffffff;
      uVar5 = *plVar11 - *plVar12;
      uVar16 = uVar7 >> 4 & 7;
      if ((uVar7 >> 4 & 7) != 0) {
        uVar10 = uVar10 + 1;
      }
      local_64[0] = 0;
      if (uVar10 - uVar5 == 0) {
LAB_006a3950:
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0xa0);
        *puVar4 = uVar15;
      }
      else {
        if (uVar10 < uVar5) {
          if (uVar10 < uVar5) {
            *plVar11 = *plVar12 + uVar10;
          }
          goto LAB_006a3950;
        }
        FUN_006a7610(plVar12,uVar10 - uVar5,local_64);
        puVar4 = (ulong *)(lVar9 + uVar14 * 0xa8 + 0xa0);
        *puVar4 = uVar15;
      }
      if (uVar16 != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << uVar16) ^ 0xff);
      }
      puVar6 = (undefined1 *)*plVar12;
      if (0 < *plVar11 - (long)puVar6) {
        lVar9 = (*plVar11 + 1) - (long)puVar6;
        do {
          lVar9 = lVar9 + -1;
          *puVar6 = 0xff;
          puVar6 = puVar6 + 1;
        } while (1 < lVar9);
      }
      if ((*puVar4 & 7) != 0) {
        *(byte *)(*plVar11 + -1) = *(byte *)(*plVar11 + -1) & ((byte)(-1 << (*puVar4 & 7)) ^ 0xff);
      }
      lVar9 = *(long *)(param_1 + 0xa0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)((*(long *)(param_1 + 0xa8) - lVar9 >> 3) * -0x30c30c30c30c30c3));
  }
  uVar1 = FUN_00696f20(param_3);
  local_80 = *(long *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xa8) != local_80) {
    uVar14 = 0;
    do {
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) {
LAB_006a3cd8:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar2 = FUN_00697fb0(uVar1,*(long *)(param_2 + 800) + uVar14 * 200);
      uVar3 = FUN_00697c00();
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      uVar10 = (ulong)*(uint *)(*(long *)(param_2 + 800) + uVar14 * 200 + 0x28);
      if (uVar10 != 0) {
        uVar5 = 0;
        do {
          uVar7 = FUN_006972a0(uVar3,*(long *)(*(long *)(*(long *)(param_2 + 0x218) + 0x290) +
                                               uVar14 * 0x4c0 + 0x78) + uVar5 * 0x20);
          if ((uVar7 & 1) == 0) {
            lVar9 = *(long *)(local_80 + uVar14 * 0xa8);
            *(byte *)(lVar9 + (uVar5 >> 3)) =
                 *(byte *)(lVar9 + (uVar5 >> 3)) & ((byte)(1 << (ulong)((uint)uVar5 & 7)) ^ 0xff);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar10);
      }
      uVar3 = FUN_00697c10(uVar2);
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      lVar9 = *(long *)(param_2 + 800) + uVar14 * 200;
      uVar10 = (ulong)(*(long *)(lVar9 + 0x58) - *(long *)(lVar9 + 0x50)) >> 2 & 0xffffffff;
      if (uVar10 != 0) {
        uVar5 = 0;
        plVar11 = (long *)(local_80 + uVar14 * 0xa8 + 0x38);
        do {
          while( true ) {
            plVar12 = (long *)(*(long *)(*(long *)(*(long *)(param_2 + 0x218) + 0x290) +
                                         uVar14 * 0x4c0 + 0xa8) + uVar5 * 0x20);
            uVar7 = FUN_006972a0(uVar3,plVar12);
            if ((uVar7 & 1) != 0) break;
            lVar9 = *plVar11;
            *(byte *)(lVar9 + (uVar5 >> 3)) =
                 *(byte *)(lVar9 + (uVar5 >> 3)) & ((byte)(1 << (ulong)((uint)uVar5 & 7)) ^ 0xff);
            if (*plVar12 == -0x2445dcc582f1b13) goto LAB_006a3bac;
LAB_006a3b74:
            uVar5 = uVar5 + 1;
            if (uVar5 == uVar10) goto LAB_006a3bd4;
          }
          if (*plVar12 != -0x2445dcc582f1b13) goto LAB_006a3b74;
LAB_006a3bac:
          lVar9 = *plVar11;
          *(byte *)(lVar9 + (uVar5 >> 3)) =
               *(byte *)(lVar9 + (uVar5 >> 3)) & ((byte)(1 << (ulong)((uint)uVar5 & 7)) ^ 0xff);
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar10);
      }
LAB_006a3bd4:
      uVar2 = FUN_00697c20(uVar2);
      if ((ulong)((*(long *)(param_2 + 0x328) - *(long *)(param_2 + 800) >> 3) * -0x70a3d70a3d70a3d7
                 ) <= uVar14) goto LAB_006a3cd8;
      lVar9 = *(long *)(param_2 + 800) + uVar14 * 200;
      uVar10 = (ulong)(*(long *)(lVar9 + 0x88) - *(long *)(lVar9 + 0x80)) >> 4 & 0xffffffff;
      if (uVar10 != 0) {
        uVar5 = 0;
        do {
          uVar7 = FUN_006972a0(uVar2,*(long *)(*(long *)(*(long *)(param_2 + 0x218) + 0x290) +
                                               uVar14 * 0x4c0 + 0xd8) + uVar5 * 0x20);
          if ((uVar7 & 1) == 0) {
            lVar9 = *(long *)(local_80 + uVar14 * 0xa8 + 0x70);
            *(byte *)(lVar9 + (uVar5 >> 3)) =
                 *(byte *)(lVar9 + (uVar5 >> 3)) & ((byte)(1 << (ulong)((uint)uVar5 & 7)) ^ 0xff);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar10);
      }
      local_80 = *(long *)(param_1 + 0xa0);
      uVar14 = uVar14 + 1;
    } while (uVar14 < (ulong)((*(long *)(param_1 + 0xa8) - local_80 >> 3) * -0x30c30c30c30c30c3));
  }
  return;
}


