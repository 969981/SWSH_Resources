/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e42e0; name: FUN_003e42e0
 */


void FUN_003e42e0(long param_1,long *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar16 = (ulong)uVar3;
  if (uVar3 != 0) {
    lVar13 = *(long *)(*(long *)(param_1 + 0x720) + 0xa48);
    lVar5 = *(long *)(*(long *)(param_1 + 0x728) + 0x120);
    lVar17 = *(long *)(param_1 + 0x20);
    puVar1 = (ulong *)(lVar17 + uVar16 * 8);
    puVar14 = (ulong *)(lVar17 + 0x80);
    puVar2 = (undefined8 *)(param_1 + 0x1ea8);
    uVar20 = 0;
    uVar15 = 0;
    uVar18 = 0;
    puVar7 = PTR_DAT_02712968 + 0x10;
    if (param_2 == (long *)0x0) {
      do {
        while( true ) {
          if (puVar14 < puVar1) {
            uVar6 = *puVar14;
            uVar10 = uVar6 >> 6;
            uVar11 = uVar6 + 0x3ff >> 6;
            uVar8 = (1 - uVar10) + uVar11;
            if ((uVar8 & 7) != 0) {
              lVar12 = -(uVar8 & 7);
              do {
                Hint_Prefetch(uVar6,0,0,0);
                uVar6 = uVar6 + 0x40;
                uVar8 = uVar8 - 1;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0);
            }
            if (6 < uVar11 - uVar10) {
              do {
                Hint_Prefetch(uVar6,0,0,0);
                Hint_Prefetch(uVar6 + 0x40,0,0,0);
                uVar8 = uVar8 - 8;
                Hint_Prefetch(uVar6 + 0x80,0,0,0);
                Hint_Prefetch(uVar6 + 0xc0,0,0,0);
                Hint_Prefetch(uVar6 + 0x100,0,0,0);
                Hint_Prefetch(uVar6 + 0x140,0,0,0);
                Hint_Prefetch(uVar6 + 0x180,0,0,0);
                Hint_Prefetch(uVar6 + 0x1c0,0,0,0);
                uVar6 = uVar6 + 0x200;
              } while (uVar8 != 0);
            }
            puVar14 = puVar14 + 1;
          }
          lVar12 = FUN_003bd8a0(*(undefined8 *)(lVar17 + uVar20 * 8));
          uVar15 = *(int *)(lVar12 + 0x40) + uVar15;
          if (uVar15 < 0x200) break;
          FUN_003ff570(*puVar2);
                    /* try { // try from 003e454c to 003e455f has its CatchHandler @ 003e47f8 */
          plVar4 = (long *)FUN_001a6400(puVar2,0x48,0x10);
                    /* try { // try from 003e4564 to 003e4567 has its CatchHandler @ 003e47f4 */
          FUN_003ff5a0(*puVar2);
          plVar4[1] = *(long *)(param_1 + 0x18);
          plVar4[2] = 0;
          *(undefined4 *)(plVar4 + 4) = 0;
          plVar4[5] = lVar17 + uVar18 * 8;
          uVar20 = uVar20 + 1;
          plVar4[7] = lVar13;
          plVar4[8] = lVar5;
          *plVar4 = (long)puVar7;
          *(uint *)(plVar4 + 6) = (uint)uVar20 - (uint)uVar18;
          *(undefined4 *)(plVar4 + 4) = 1;
          plVar4[3] = 0;
          FUN_00192470(plVar4);
          uVar15 = 0;
          uVar18 = uVar20 & 0xffffffff;
          uVar19 = (uint)uVar20;
          if (uVar16 <= uVar20) goto LAB_003e45d0;
        }
        uVar20 = uVar20 + 1;
        uVar19 = (uint)uVar18;
      } while (uVar20 < uVar16);
    }
    else {
      do {
        while( true ) {
          if (puVar14 < puVar1) {
            uVar6 = *puVar14;
            uVar10 = uVar6 >> 6;
            uVar11 = uVar6 + 0x3ff >> 6;
            uVar8 = (1 - uVar10) + uVar11;
            if ((uVar8 & 7) != 0) {
              lVar12 = -(uVar8 & 7);
              do {
                Hint_Prefetch(uVar6,0,0,0);
                uVar6 = uVar6 + 0x40;
                uVar8 = uVar8 - 1;
                lVar12 = lVar12 + 1;
              } while (lVar12 != 0);
            }
            if (6 < uVar11 - uVar10) {
              do {
                Hint_Prefetch(uVar6,0,0,0);
                Hint_Prefetch(uVar6 + 0x40,0,0,0);
                uVar8 = uVar8 - 8;
                Hint_Prefetch(uVar6 + 0x80,0,0,0);
                Hint_Prefetch(uVar6 + 0xc0,0,0,0);
                Hint_Prefetch(uVar6 + 0x100,0,0,0);
                Hint_Prefetch(uVar6 + 0x140,0,0,0);
                Hint_Prefetch(uVar6 + 0x180,0,0,0);
                Hint_Prefetch(uVar6 + 0x1c0,0,0,0);
                uVar6 = uVar6 + 0x200;
              } while (uVar8 != 0);
            }
            puVar14 = puVar14 + 1;
          }
          lVar12 = FUN_003bd8a0(*(undefined8 *)(lVar17 + uVar20 * 8));
          uVar15 = *(int *)(lVar12 + 0x40) + uVar15;
          if (uVar15 < 0x200) break;
          FUN_003ff570(*puVar2);
                    /* try { // try from 003e43fc to 003e440f has its CatchHandler @ 003e4800 */
          plVar4 = (long *)FUN_001a6400(puVar2,0x48,0x10);
                    /* try { // try from 003e4414 to 003e4417 has its CatchHandler @ 003e47fc */
          FUN_003ff5a0(*puVar2);
          plVar4[1] = *(long *)(param_1 + 0x18);
          plVar4[2] = 0;
          *(undefined4 *)(plVar4 + 4) = 0;
          plVar4[5] = lVar17 + uVar18 * 8;
          uVar20 = uVar20 + 1;
          uVar19 = (uint)uVar20;
          *plVar4 = (long)puVar7;
          plVar4[7] = lVar13;
          plVar4[8] = lVar5;
          *(uint *)(plVar4 + 6) = uVar19 - (uint)uVar18;
          *(undefined4 *)(plVar4 + 4) = 1;
          plVar4[3] = (long)param_2;
          (**(code **)(*param_2 + 0x20))(param_2);
          plVar4[2] = *(long *)(plVar4[3] + 0x10);
          (**(code **)(*plVar4 + 0x28))(plVar4);
          uVar15 = 0;
          uVar18 = uVar20 & 0xffffffff;
          if (uVar16 <= uVar20) goto LAB_003e45d0;
        }
        uVar20 = uVar20 + 1;
        uVar19 = (uint)uVar18;
      } while (uVar20 < uVar16);
    }
LAB_003e45d0:
    if (uVar15 != 0) {
      FUN_003ff570(*(undefined8 *)(param_1 + 0x1ea8));
                    /* try { // try from 003e45e8 to 003e45fb has its CatchHandler @ 003e47e0 */
      plVar4 = (long *)FUN_001a6400((undefined8 *)(param_1 + 0x1ea8),0x48,0x10);
                    /* try { // try from 003e4600 to 003e4603 has its CatchHandler @ 003e47dc */
      FUN_003ff5a0(*(undefined8 *)(param_1 + 0x1ea8));
      lVar12 = *(long *)(param_1 + 0x18);
      plVar4[2] = 0;
      *(undefined4 *)(plVar4 + 4) = 0;
      *(uint *)(plVar4 + 6) = uVar3 - uVar19;
      puVar7 = PTR_DAT_02712968;
      plVar4[5] = lVar17 + (ulong)uVar19 * 8;
      puVar7 = puVar7 + 0x10;
      *plVar4 = (long)puVar7;
      plVar4[1] = lVar12;
      plVar4[7] = lVar13;
      plVar4[8] = lVar5;
      *(undefined4 *)(plVar4 + 4) = 1;
      plVar4[3] = (long)param_2;
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x20))(param_2);
        plVar4[2] = *(long *)(plVar4[3] + 0x10);
        puVar7 = (undefined *)*plVar4;
      }
      (**(code **)(puVar7 + 0x28))(plVar4);
    }
    if (uVar3 != 0) {
      uVar20 = 0;
      do {
        lVar5 = FUN_003bd8a0(*(undefined8 *)(lVar17 + uVar20 * 8));
        if (((*(byte *)(lVar5 + 0xb4) & 1) == 0) && (lVar13 = *(long *)(lVar5 + 0x38), lVar13 != 0))
        {
          lVar12 = *(long *)(param_1 + 0x728);
          do {
            while( true ) {
              uVar3 = *(uint *)(lVar13 + 0x18);
              lVar13 = *(long *)(lVar13 + 8);
              if (((uVar3 & 0x60000000) == 0) && ((int)uVar3 < 0)) break;
              if (lVar13 == 0) goto LAB_003e4790;
            }
            uVar15 = (uVar3 & 0x1fffffff) + 0x20 >> 5;
            if ((*(uint *)(lVar12 + 0x78) & 0x7fffffff) < uVar15) {
              __dest = (void *)(**(code **)(**(long **)(lVar12 + 0x80) + 0x10))
                                         (*(long **)(lVar12 + 0x80),uVar15 << 2,
                                          "./../../Common/src\\CmBitMap.h",0x1b7);
              if (((*(void **)(lVar12 + 0x70) != (void *)0x0) &&
                  (memcpy(__dest,*(void **)(lVar12 + 0x70),
                          (ulong)(uint)(*(int *)(lVar12 + 0x78) << 2)), -1 < *(int *)(lVar12 + 0x78)
                  )) && (*(long *)(lVar12 + 0x70) != 0)) {
                (**(code **)(**(long **)(lVar12 + 0x80) + 0x18))();
              }
                    /* WARNING: Subroutine does not return */
              memset((void *)((long)__dest + ((ulong)*(uint *)(lVar12 + 0x78) & 0x7fffffff) * 4),0,
                     (ulong)((uVar15 - *(uint *)(lVar12 + 0x78)) * 4));
            }
            lVar9 = (ulong)((uVar3 & 0x1fffffff) >> 5) * 4;
            *(uint *)(*(long *)(lVar12 + 0x70) + lVar9) =
                 *(uint *)(*(long *)(lVar12 + 0x70) + lVar9) | 1 << (ulong)(uVar3 & 0x1f);
          } while (lVar13 != 0);
        }
LAB_003e4790:
        (**(code **)(**(long **)(param_1 + 0x760) + 0x30))
                  (*(long **)(param_1 + 0x760),lVar5 + 0x60,*(uint *)(lVar5 + 0xb0) >> 6);
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar16);
    }
  }
  return;
}


