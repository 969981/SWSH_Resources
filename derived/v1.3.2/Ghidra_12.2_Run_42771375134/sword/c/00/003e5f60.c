/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e5f60; name: FUN_003e5f60
 */


/* WARNING: Removing unreachable block (ram,0x003e6358) */

void FUN_003e5f60(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  void *__dest;
  ushort uVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  uint local_c60 [256];
  long local_860 [256];
  
  lVar5 = *(long *)(param_1 + 0x720);
  lVar9 = *(long *)(lVar5 + 0xa48);
  *(undefined1 *)(lVar9 + 0x1c) = 0;
  lVar11 = *(long *)(param_1 + 0x808);
  *(undefined1 *)(lVar11 + 0x18) = 0;
  FUN_003ff570(*(undefined8 *)(lVar5 + 0x6d8));
  (**(code **)(**(long **)(param_1 + 0x760) + 0x70))
            (*(long **)(param_1 + 0x760),lVar9,lVar11,param_2);
  lVar5 = *(long *)(param_1 + 0x748);
  uVar2 = *(uint *)(param_1 + 0x12b4);
  if (uVar2 < *(uint *)(lVar5 + 0x1f0)) {
    lVar11 = *(long *)(param_1 + 0x728);
    puVar8 = (uint *)(*(long *)(lVar5 + 0x1e8) + (ulong)uVar2 * 4);
    lVar9 = (ulong)*(uint *)(lVar5 + 0x1f0) - (ulong)uVar2;
    do {
      puVar12 = *(undefined4 **)(*(long *)(lVar5 + 200) + (ulong)(*puVar8 >> 6) * 0x20 + 0x18);
      puVar6 = *(undefined4 **)(puVar12 + 10);
      lVar17 = *(long *)(puVar12 + -4);
      *puVar6 = *puVar12;
      puVar6[1] = puVar12[1];
      puVar6[2] = puVar12[2];
      puVar6[3] = puVar12[3];
      puVar6[4] = puVar12[4];
      puVar6[5] = puVar12[5];
      puVar6[6] = puVar12[6];
      FUN_003bf520(puVar12 + -0x18,lVar11 + 0x70);
      (**(code **)(**(long **)(param_1 + 0x760) + 0x30))
                (*(long **)(param_1 + 0x760),puVar12,(uint)puVar12[0x14] >> 6);
      uVar4 = *(ushort *)(puVar12 + 7);
      if ((uVar4 >> 1 & 1) != 0) {
        FUN_003c0f60(puVar12 + -0x18,*(long *)(param_1 + 0x728) + 0x70);
        uVar4 = *(ushort *)(puVar12 + 7);
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
      *(undefined4 *)(lVar17 + 0x9c) = 0;
      *(undefined8 *)(lVar17 + 0x50) = 0;
      *(undefined4 *)(lVar17 + 0x58) = 0;
      *(undefined8 *)(lVar17 + 0x60) = 0;
      *(undefined4 *)(lVar17 + 0x68) = 0;
      *(ushort *)(puVar12 + 7) = uVar4 & 0x21;
    } while (lVar9 != 0);
  }
  if (*(int *)(param_1 + 0x840) != 0) {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x720) + 0x7b0);
    iVar14 = 0;
    uVar15 = 0;
    puVar1 = PTR_DAT_02712980 + 0x10;
    if (param_2 == (long *)0x0) {
      do {
        FUN_003ff570(*puVar10);
                    /* try { // try from 003e6188 to 003e619b has its CatchHandler @ 003e6554 */
        plVar3 = (long *)FUN_001a6400(puVar10,0x38,0x10);
                    /* try { // try from 003e61a0 to 003e61a3 has its CatchHandler @ 003e6550 */
        FUN_003ff5a0(*puVar10);
        lVar5 = *(long *)(param_1 + 0x838);
        uVar2 = iVar14 + *(int *)(param_1 + 0x840);
        plVar3[1] = *(long *)(param_1 + 0x18);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        *plVar3 = (long)puVar1;
        if (0xff < uVar2) {
          uVar2 = 0x100;
        }
        plVar3[5] = lVar5 + uVar15 * 8;
        *(uint *)(plVar3 + 6) = uVar2;
        *(undefined4 *)(plVar3 + 4) = 1;
        plVar3[3] = 0;
        FUN_00192470(plVar3);
        uVar16 = *(uint *)(param_1 + 0x840);
        uVar2 = (int)uVar15 + 0x100;
        uVar15 = (ulong)uVar2;
        iVar14 = iVar14 + -0x100;
      } while (uVar2 < uVar16);
    }
    else {
      do {
        FUN_003ff570(*puVar10);
                    /* try { // try from 003e60e8 to 003e60fb has its CatchHandler @ 003e655c */
        plVar3 = (long *)FUN_001a6400(puVar10,0x38,0x10);
                    /* try { // try from 003e6100 to 003e6103 has its CatchHandler @ 003e6558 */
        FUN_003ff5a0(*puVar10);
        lVar5 = *(long *)(param_1 + 0x838);
        uVar2 = iVar14 + *(int *)(param_1 + 0x840);
        plVar3[1] = *(long *)(param_1 + 0x18);
        plVar3[2] = 0;
        *(undefined4 *)(plVar3 + 4) = 0;
        *plVar3 = (long)puVar1;
        if (0xff < uVar2) {
          uVar2 = 0x100;
        }
        plVar3[5] = lVar5 + uVar15 * 8;
        *(uint *)(plVar3 + 6) = uVar2;
        *(undefined4 *)(plVar3 + 4) = 1;
        plVar3[3] = (long)param_2;
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar3[2] = *(long *)(plVar3[3] + 0x10);
        (**(code **)(*plVar3 + 0x28))(plVar3);
        uVar16 = *(uint *)(param_1 + 0x840);
        uVar2 = (int)uVar15 + 0x100;
        uVar15 = (ulong)uVar2;
        iVar14 = iVar14 + -0x100;
      } while (uVar2 < uVar16);
    }
    if (uVar16 != 0) {
      lVar5 = *(long *)(param_1 + 0x728);
      uVar15 = 0;
      do {
        lVar9 = *(long *)(*(long *)(param_1 + 0x838) + uVar15 * 8);
        if ((*(byte *)(lVar9 + 0x7c) & 1) == 0) {
          lVar9 = *(long *)(lVar9 + 0x38);
          while (lVar9 != 0) {
            while( true ) {
              uVar2 = *(uint *)(lVar9 + 0x18);
              lVar9 = *(long *)(lVar9 + 8);
              if ((uVar2 & 0x60000000) != 0) break;
              if ((int)uVar2 < 0) {
                uVar16 = (uVar2 & 0x1fffffff) + 0x20 >> 5;
                if ((*(uint *)(lVar5 + 0x78) & 0x7fffffff) < uVar16) {
                  __dest = (void *)(**(code **)(**(long **)(lVar5 + 0x80) + 0x10))
                                             (*(long **)(lVar5 + 0x80),uVar16 << 2,
                                              "./../../Common/src\\CmBitMap.h",0x1b7);
                  if (((*(void **)(lVar5 + 0x70) != (void *)0x0) &&
                      (memcpy(__dest,*(void **)(lVar5 + 0x70),
                              (ulong)(uint)(*(int *)(lVar5 + 0x78) << 2)),
                      -1 < *(int *)(lVar5 + 0x78))) && (*(long *)(lVar5 + 0x70) != 0)) {
                    (**(code **)(**(long **)(lVar5 + 0x80) + 0x18))();
                  }
                    /* WARNING: Subroutine does not return */
                  memset((void *)((long)__dest + ((ulong)*(uint *)(lVar5 + 0x78) & 0x7fffffff) * 4),
                         0,(ulong)((uVar16 - *(uint *)(lVar5 + 0x78)) * 4));
                }
                lVar11 = (ulong)((uVar2 & 0x1fffffff) >> 5) * 4;
                *(uint *)(*(long *)(lVar5 + 0x70) + lVar11) =
                     *(uint *)(*(long *)(lVar5 + 0x70) + lVar11) | 1 << (ulong)(uVar2 & 0x1f);
              }
              if (lVar9 == 0) goto LAB_003e6300;
            }
          }
        }
LAB_003e6300:
        uVar7 = (ulong)*(uint *)(param_1 + 0x840);
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar7);
      if (*(uint *)(param_1 + 0x840) != 0) {
        lVar5 = 0;
        iVar14 = -1;
        do {
          uVar2 = (int)uVar7 - (int)lVar5;
          if (0xff < uVar2) {
            uVar2 = 0x100;
          }
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              lVar9 = 0;
            }
            else {
              uVar16 = iVar14 - (int)uVar7;
              if (uVar16 < 0xffffff00) {
                uVar16 = 0xfffffeff;
              }
              lVar9 = 0;
              plVar3 = local_860 + 1;
              puVar8 = local_c60 + 1;
              do {
                lVar11 = *(long *)(param_1 + 0x838);
                uVar15 = lVar5 + lVar9;
                lVar9 = lVar9 + 2;
                lVar17 = (uVar15 & 0xffffffff) * 8;
                plVar3[-1] = *(long *)(lVar11 + lVar17) + 0x60;
                puVar8[-1] = *(uint *)(*(long *)(lVar11 + lVar17) + 0xb0) >> 6;
                lVar11 = *(long *)(param_1 + 0x838);
                lVar17 = (ulong)((int)uVar15 + 1) * 8;
                *plVar3 = *(long *)(lVar11 + lVar17) + 0x60;
                *puVar8 = *(uint *)(*(long *)(lVar11 + lVar17) + 0xb0) >> 6;
                plVar3 = plVar3 + 2;
                puVar8 = puVar8 + 2;
              } while ((ulong)~uVar16 - (ulong)(~uVar16 & 1) != lVar9);
              if ((uVar2 & 1) == 0) goto LAB_003e640c;
            }
            lVar11 = *(long *)(param_1 + 0x838);
            lVar17 = (ulong)(uint)((int)lVar5 + (int)lVar9) * 8;
            local_860[lVar9] = *(long *)(lVar11 + lVar17) + 0x60;
            local_c60[lVar9] = *(uint *)(*(long *)(lVar11 + lVar17) + 0xb0) >> 6;
          }
LAB_003e640c:
          (**(code **)(**(long **)(param_1 + 0x760) + 0x38))
                    (*(long **)(param_1 + 0x760),local_860,local_c60);
          uVar7 = (ulong)*(uint *)(param_1 + 0x840);
          lVar5 = lVar5 + 0x100;
          iVar14 = iVar14 + 0x100;
        } while ((uint)lVar5 < *(uint *)(param_1 + 0x840));
      }
    }
  }
  FUN_003e42e0(param_1,param_2);
  FUN_003ff5a0(*(undefined8 *)(*(long *)(param_1 + 0x720) + 0x6d8));
  if (*(int *)(param_1 + 0x89c) != 0) {
    FUN_003ff570(*(undefined8 *)(*(long *)(param_1 + 0x720) + 0x6d8));
    if (*(int *)(param_1 + 0x89c) != 0) {
      lVar5 = *(long *)(param_1 + 0x728);
      lVar9 = *(long *)(param_1 + 0x870);
      uVar15 = 0;
      do {
        uVar13 = **(undefined8 **)(lVar9 + uVar15 * 8);
        FUN_003bc320(*(undefined4 *)(param_1 + 0x7b8),uVar13);
        FUN_003bbbb0(uVar13,lVar5 + 0x70);
        uVar2 = FUN_003bc2d0(uVar13,local_860);
        if (uVar2 != 0) {
          uVar7 = (ulong)uVar2;
          plVar3 = local_860;
          do {
            while( true ) {
              uVar2 = *(uint *)(param_1 + 0x830);
              if ((*(uint *)(param_1 + 0x834) & 0x7fffffff) <= uVar2) break;
              *(long *)(*(long *)(param_1 + 0x828) + (ulong)uVar2 * 8) = *plVar3;
              *(uint *)(param_1 + 0x830) = uVar2 + 1;
              plVar3 = plVar3 + 1;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_003e6508;
            }
            FUN_003bcf10(param_1 + 0x828,plVar3);
            plVar3 = plVar3 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
LAB_003e6508:
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(param_1 + 0x89c));
    }
    FUN_003ff5a0(*(undefined8 *)(*(long *)(param_1 + 0x720) + 0x6d8));
  }
  FUN_003e5320(param_1,0);
  return;
}


