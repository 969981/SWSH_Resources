/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ee350; name: FUN_003ee350
 */


void FUN_003ee350(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 *__dest;
  long *plVar3;
  undefined1 *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined1 *__src_00;
  int iVar15;
  long lVar16;
  undefined1 *puVar17;
  uint uVar18;
  ulong uVar19;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 *local_90;
  uint local_84;
  undefined1 *local_80;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar8 = param_5 * 4;
  local_68 = 0x400 < uVar8;
  if (uVar8 < 0x401) {
    __dest = auStack_a0 + -((ulong)uVar8 + 0xf & 0x1fffffff0);
    local_70 = __dest;
  }
  else {
                    /* try { // try from 003ee398 to 003ee3ab has its CatchHandler @ 003ee820 */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar8,"./../../../../PxShared/src/foundation/include/PsSort.h",
                          0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    param_2 = param_2 + -1;
    uVar19 = 0;
    bVar2 = false;
    uVar8 = 0;
    local_98 = param_1 + 8;
    __src = __dest;
    puVar14 = __dest;
    __src_00 = __dest;
    puVar17 = __dest;
    if (0 < param_2) goto LAB_003ee440;
LAB_003ee798:
    iVar11 = (int)uVar19;
    if (iVar11 != 0) {
      uVar19 = (ulong)(iVar11 - 2);
      param_2 = *(int *)(puVar14 + (ulong)(iVar11 - 1) * 4);
      uVar8 = *(uint *)(puVar14 + uVar19 * 4);
      if ((int)uVar8 < param_2) {
LAB_003ee440:
        if (4 < param_2 - uVar8) {
          uVar18 = param_2 + uVar8;
          if ((int)uVar18 < 0) {
            uVar18 = uVar18 + 1;
          }
          lVar16 = (long)((ulong)uVar18 << 0x20) >> 0x21;
          uVar4 = *(ulong *)(param_1 + (long)((int)uVar18 >> 1) * 8);
          uVar5 = *(ulong *)(param_1 + (long)(int)uVar8 * 8);
          uVar6 = uVar5;
          if (uVar4 < uVar5) {
            lVar9 = (long)(int)uVar8 * 8;
            *(ulong *)(param_1 + lVar9) = uVar4;
            *(ulong *)(param_1 + lVar16 * 8) = uVar5;
            uVar6 = *(ulong *)(param_1 + lVar9);
            uVar4 = uVar5;
          }
          uVar5 = *(ulong *)(param_1 + (long)param_2 * 8);
          lVar9 = (long)param_2;
          if (uVar5 < uVar6) {
            *(ulong *)(param_1 + (long)(int)uVar8 * 8) = uVar5;
            *(ulong *)(param_1 + lVar9 * 8) = uVar6;
            uVar4 = *(ulong *)(param_1 + lVar16 * 8);
            uVar5 = uVar6;
            if (uVar6 < uVar4) {
LAB_003ee4c0:
              *(ulong *)(param_1 + lVar16 * 8) = uVar5;
              *(ulong *)(param_1 + lVar9 * 8) = uVar4;
              uVar4 = *(ulong *)(param_1 + lVar16 * 8);
            }
          }
          else if (uVar5 < uVar4) goto LAB_003ee4c0;
          uVar7 = lVar9 - 1;
          *(undefined8 *)(param_1 + lVar16 * 8) = *(undefined8 *)(param_1 + uVar7 * 8);
          uVar6 = (ulong)uVar8;
          uVar5 = uVar7 & 0xffffffff;
          *(ulong *)(param_1 + uVar7 * 8) = uVar4;
          while( true ) {
            iVar11 = (int)uVar6;
            lVar16 = 0;
            do {
              lVar9 = lVar16 * 8;
              lVar16 = lVar16 + 1;
              uVar10 = *(ulong *)(param_1 + (long)iVar11 * 8 + lVar9 + 8);
            } while (uVar10 < uVar4);
            puVar12 = (ulong *)(param_1 + (long)(int)uVar5 * 8);
            do {
              puVar12 = puVar12 + -1;
              uVar18 = (int)uVar5 - 1;
              uVar5 = (ulong)uVar18;
            } while (uVar4 < *puVar12);
            uVar6 = lVar16 + (uVar6 & 0xffffffff);
            if ((int)uVar18 <= (int)uVar6) break;
            *(ulong *)(param_1 + (long)iVar11 * 8 + lVar16 * 8) = *puVar12;
            *puVar12 = uVar10;
            uVar4 = *(ulong *)(param_1 + uVar7 * 8);
          }
          *(ulong *)(param_1 + (long)iVar11 * 8 + lVar16 * 8) = uVar4;
          iVar15 = (int)lVar16;
          *(ulong *)(param_1 + uVar7 * 8) = uVar10;
          uVar18 = (uint)uVar19;
          if ((int)((iVar11 - uVar8) + iVar15) < (param_2 - iVar11) - iVar15) {
            if (param_5 - 1 <= uVar18) {
              local_80 = puVar14;
                    /* try { // try from 003ee570 to 003ee63f has its CatchHandler @ 003ee840 */
              plVar3 = (long *)FUN_00400d30();
              local_84 = param_5 << 1;
              lVar16 = (**(code **)(*plVar3 + 0x10))
                                 (plVar3,(ulong)local_84 * 4 + 0x47,"NonTrackedAlloc",
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
              if (lVar16 == 0) {
                __dest = (undefined1 *)0x0;
              }
              else {
                __dest = (undefined1 *)(lVar16 + 0x47U & 0xffffffffffffffc0);
                *(long *)(__dest + -8) = (long)__dest - lVar16;
              }
              memcpy(__dest,__src_00,(ulong)(uVar18 << 2));
              local_90 = puVar17;
              if ((local_80 != (undefined1 *)0x0) && (bVar2)) {
                lVar16 = *(long *)(local_80 + -8);
                    /* try { // try from 003ee65c to 003ee66f has its CatchHandler @ 003ee830 */
                plVar3 = (long *)FUN_00400d30();
                (**(code **)(*plVar3 + 0x18))(plVar3,(long)__src_00 - lVar16);
              }
              bVar2 = true;
              __src = __dest;
              puVar14 = __dest;
              __src_00 = __dest;
              puVar17 = __dest;
              param_5 = local_84;
            }
            *(uint *)(puVar14 + uVar19 * 4) = uVar8;
            uVar19 = (ulong)(uVar18 + 2);
            *(int *)(puVar14 + (ulong)(uVar18 + 1) * 4) = iVar11 + -1 + iVar15;
            uVar8 = iVar11 + iVar15 + 1;
            if (param_2 <= (int)uVar8) goto LAB_003ee798;
            goto LAB_003ee440;
          }
          if (param_5 - 1 <= uVar18) {
            local_80 = puVar14;
            plVar3 = (long *)FUN_00400d30();
            local_84 = param_5 << 1;
            lVar16 = (**(code **)(*plVar3 + 0x10))
                               (plVar3,(ulong)local_84 * 4 + 0x47,"NonTrackedAlloc",
                                "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                0x9b);
            if (lVar16 == 0) {
              __dest = (undefined1 *)0x0;
            }
            else {
              __dest = (undefined1 *)(lVar16 + 0x47U & 0xffffffffffffffc0);
              *(long *)(__dest + -8) = (long)__dest - lVar16;
            }
                    /* try { // try from 003ee698 to 003ee6a7 has its CatchHandler @ 003ee840 */
            memcpy(__dest,__src,(ulong)(uVar18 << 2));
            local_90 = puVar17;
            if ((local_80 != (undefined1 *)0x0) && (bVar2)) {
              lVar16 = *(long *)(local_80 + -8);
                    /* try { // try from 003ee6c4 to 003ee6d7 has its CatchHandler @ 003ee830 */
              plVar3 = (long *)FUN_00400d30();
              (**(code **)(*plVar3 + 0x18))(plVar3,(long)__src - lVar16);
            }
            bVar2 = true;
            __src = __dest;
            puVar14 = __dest;
            __src_00 = __dest;
            puVar17 = __dest;
            param_5 = local_84;
          }
          *(int *)(puVar14 + uVar19 * 4) = iVar15 + iVar11 + 1;
          uVar19 = (ulong)(uVar18 + 2);
          *(int *)(puVar14 + (ulong)(uVar18 + 1) * 4) = param_2;
          param_2 = iVar11 + iVar15 + -1;
          if (param_2 <= (int)uVar8) goto LAB_003ee798;
          goto LAB_003ee440;
        }
        lVar16 = local_98 + (long)(int)uVar8 * 8;
        uVar4 = (long)(int)uVar8;
        do {
          uVar8 = uVar8 + 1;
          lVar9 = 0;
          uVar6 = uVar4 + 1;
          uVar5 = uVar4 & 0xffffffff;
          do {
            lVar1 = lVar9 * 8;
            iVar11 = (int)lVar9;
            lVar9 = lVar9 + 1;
            uVar18 = uVar8 + iVar11;
            if (*(ulong *)(param_1 + (long)(int)(uint)uVar5 * 8) <= *(ulong *)(lVar16 + lVar1)) {
              uVar18 = (uint)uVar5;
            }
            uVar5 = (ulong)uVar18;
          } while ((long)(uVar4 + lVar9) < (long)param_2);
          if (uVar18 != (uint)uVar4) {
            uVar5 = -(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
            uVar13 = *(undefined8 *)(param_1 + uVar5);
            *(undefined8 *)(param_1 + uVar5) = *(undefined8 *)(param_1 + uVar4 * 8);
            *(undefined8 *)(param_1 + uVar4 * 8) = uVar13;
          }
          lVar16 = lVar16 + 8;
          uVar4 = uVar6;
        } while (uVar6 != (long)param_2);
      }
      goto LAB_003ee798;
    }
    if ((__dest != (undefined1 *)0x0) && (bVar2)) {
      lVar16 = *(long *)(__dest + -8);
                    /* try { // try from 003ee7c8 to 003ee7e3 has its CatchHandler @ 003ee818 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,(long)__dest - lVar16);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 003ee7f0 to 003ee7f7 has its CatchHandler @ 003ee81c */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


