/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00271480; name: FUN_00271480
 */


void FUN_00271480(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 *__dest;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar14;
  undefined8 *puVar13;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  code *pcVar21;
  undefined1 *__src;
  undefined1 *__src_00;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 *local_90;
  uint local_84;
  undefined1 *local_80;
  bool local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar22 = param_5 * 4;
  local_78 = 0x400 < uVar22;
  if (uVar22 < 0x401) {
    __dest = auStack_a0 + -((ulong)uVar22 + 0xf & 0x1fffffff0);
    local_80 = __dest;
  }
  else {
                    /* try { // try from 002714c8 to 002714df has its CatchHandler @ 00271a38 */
    __dest = (undefined1 *)
             FUN_00401b30(&local_70,uVar22,"./../../../../PxShared/src/foundation/include\\PsSort.h"
                          ,0x41);
    local_80 = __dest;
  }
  local_80 = __dest;
  if (0 < param_2 + -1) {
    uVar23 = 0;
    bVar3 = false;
    iVar12 = 0;
    local_98 = param_1 + 0x10;
    puVar19 = __dest;
    puVar6 = __dest;
    __src = __dest;
    __src_00 = __dest;
    iVar20 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_00271570;
LAB_002719bc:
    iVar15 = (int)uVar23;
    if (iVar15 != 0) {
      uVar23 = (ulong)(iVar15 - 2);
      iVar12 = *(int *)(puVar19 + uVar23 * 4);
      iVar20 = *(int *)(puVar19 + (ulong)(iVar15 - 1) * 4);
      if (iVar12 < *(int *)(puVar19 + (ulong)(iVar15 - 1) * 4)) {
LAB_00271570:
        if (4 < (uint)(iVar20 - iVar12)) {
          iVar15 = iVar20 + iVar12;
          if (iVar15 < 0) {
            iVar15 = iVar15 + 1;
          }
          puVar11 = (undefined8 *)(param_1 + (long)(iVar15 >> 1) * 0x10);
          puVar18 = (undefined8 *)(param_1 + (long)iVar12 * 0x10);
          fVar25 = (float)*puVar18;
          if ((float)*puVar11 < fVar25) {
            uVar8 = puVar18[1];
            uVar9 = *puVar18;
            puVar18[1] = puVar11[1];
            *puVar18 = *puVar11;
            puVar11[1] = uVar8;
            *puVar11 = uVar9;
            fVar25 = (float)*puVar18;
          }
          puVar7 = (undefined8 *)(param_1 + (long)iVar20 * 0x10);
          fVar26 = (float)*puVar7;
          if (fVar26 < fVar25) {
            uVar8 = puVar18[1];
            uVar9 = *puVar18;
            puVar18[1] = puVar7[1];
            *puVar18 = *puVar7;
            puVar7[1] = uVar8;
            *puVar7 = uVar9;
            fVar26 = (float)*puVar7;
          }
          if (fVar26 < (float)*puVar11) {
            uVar8 = puVar11[1];
            uVar9 = *puVar11;
            puVar11[1] = puVar7[1];
            *puVar11 = *puVar7;
            puVar7[1] = uVar8;
            *puVar7 = uVar9;
          }
          uVar8 = puVar11[1];
          uVar9 = *puVar11;
          uVar10 = (long)iVar20 - 1;
          puVar18 = (undefined8 *)(param_1 + uVar10 * 0x10);
          puVar11[1] = puVar18[1];
          *puVar11 = *puVar18;
          puVar18[1] = uVar8;
          *puVar18 = uVar9;
          iVar15 = iVar12;
          while( true ) {
            puVar11 = (undefined8 *)(param_1 + (long)iVar15 * 0x10);
            do {
              iVar24 = iVar15;
              puVar7 = puVar11;
              puVar11 = puVar7 + 2;
              iVar15 = iVar24 + 1;
            } while ((float)*puVar11 < (float)*puVar18);
            puVar13 = (undefined8 *)(param_1 + (long)(int)uVar10 * 0x10);
            do {
              puVar14 = puVar13;
              puVar13 = puVar14 + -2;
              uVar22 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar22;
            } while ((float)*puVar18 < (float)*puVar13);
            if ((int)uVar22 <= iVar15) break;
            uVar8 = puVar7[3];
            uVar9 = *puVar11;
            puVar7[3] = puVar14[-1];
            *puVar11 = *puVar13;
            puVar14[-1] = uVar8;
            *puVar13 = uVar9;
          }
          local_68 = puVar7[3];
          local_70 = *puVar11;
          puVar7[3] = puVar18[1];
          *puVar11 = *puVar18;
          puVar18[1] = local_68;
          *puVar18 = local_70;
          uVar22 = (uint)uVar23;
          if (iVar15 - iVar12 < iVar20 - iVar15) {
            if (param_5 - 1 <= uVar22) {
              local_84 = param_5 << 1;
              if (local_84 == 0) {
                puVar6 = (undefined1 *)0x0;
                local_90 = __dest;
              }
              else {
                local_90 = __dest;
                    /* try { // try from 00271770 to 00271863 has its CatchHandler @ 00271a50 */
                plVar4 = (long *)FUN_00400d30();
                pcVar21 = *(code **)(*plVar4 + 0x10);
                plVar5 = (long *)FUN_00400d60();
                uVar10 = (**(code **)(*plVar5 + 0x28))();
                pcVar2 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SortedTriangle>::getName() [T = physx::Gu::SortedTriangle]"
                ;
                if ((uVar10 & 1) == 0) {
                  pcVar2 = "<allocation names disabled>";
                }
                puVar6 = (undefined1 *)
                         (*pcVar21)(plVar4,(ulong)local_84 << 2,pcVar2,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar6;
              memcpy(__dest,__src_00,(ulong)(uVar22 << 2));
              if ((puVar19 != (undefined1 *)0x0) && (bVar3)) {
                    /* try { // try from 00271870 to 00271883 has its CatchHandler @ 00271a48 */
                plVar4 = (long *)FUN_00400d30();
                (**(code **)(*plVar4 + 0x18))(plVar4,__src_00);
              }
              bVar3 = true;
              puVar19 = __dest;
              puVar6 = __dest;
              __src = __dest;
              __src_00 = __dest;
              param_5 = local_84;
            }
            *(int *)(puVar19 + uVar23 * 4) = iVar12;
            iVar12 = iVar24 + 2;
            *(int *)(puVar19 + (ulong)(uVar22 + 1) * 4) = iVar24;
            uVar23 = (ulong)(uVar22 + 2);
            if (iVar20 <= iVar12) goto LAB_002719bc;
            goto LAB_00271570;
          }
          if (param_5 - 1 <= uVar22) {
            local_84 = param_5 << 1;
            if (local_84 == 0) {
              puVar6 = (undefined1 *)0x0;
              local_90 = __dest;
            }
            else {
              local_90 = __dest;
              plVar4 = (long *)FUN_00400d30();
              pcVar21 = *(code **)(*plVar4 + 0x10);
              plVar5 = (long *)FUN_00400d60();
              uVar10 = (**(code **)(*plVar5 + 0x28))();
              pcVar2 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::Gu::SortedTriangle>::getName() [T = physx::Gu::SortedTriangle]"
              ;
              if ((uVar10 & 1) == 0) {
                pcVar2 = "<allocation names disabled>";
              }
              puVar6 = (undefined1 *)
                       (*pcVar21)(plVar4,(ulong)local_84 << 2,pcVar2,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar6;
                    /* try { // try from 002718a8 to 002718b7 has its CatchHandler @ 00271a50 */
            memcpy(__dest,__src,(ulong)(uVar22 << 2));
            if ((puVar19 != (undefined1 *)0x0) && (bVar3)) {
                    /* try { // try from 002718c4 to 002718d7 has its CatchHandler @ 00271a48 */
              plVar4 = (long *)FUN_00400d30();
              (**(code **)(*plVar4 + 0x18))(plVar4,__src);
            }
            bVar3 = true;
            puVar19 = __dest;
            puVar6 = __dest;
            __src = __dest;
            __src_00 = __dest;
            param_5 = local_84;
          }
          *(int *)(puVar19 + uVar23 * 4) = iVar24 + 2;
          uVar23 = (ulong)(uVar22 + 2);
          *(int *)(puVar19 + (ulong)(uVar22 + 1) * 4) = iVar20;
          iVar20 = iVar24;
          if (iVar24 <= iVar12) goto LAB_002719bc;
          goto LAB_00271570;
        }
        puVar11 = (undefined8 *)(local_98 + (long)iVar12 * 0x10);
        uVar10 = (long)iVar12;
        do {
          iVar12 = iVar12 + 1;
          lVar16 = 0;
          uVar1 = uVar10 + 1;
          uVar17 = uVar10 & 0xffffffff;
          puVar18 = puVar11;
          do {
            iVar15 = (int)lVar16;
            lVar16 = lVar16 + 1;
            uVar22 = (uint)uVar17;
            if ((float)*puVar18 <
                (float)*(undefined8 *)
                        (param_1 + (-(uVar17 >> 0x1f) & 0xfffffff000000000 | uVar17 << 4))) {
              uVar22 = iVar12 + iVar15;
            }
            uVar17 = (ulong)uVar22;
            puVar18 = puVar18 + 2;
          } while ((long)(uVar10 + lVar16) < (long)iVar20);
          if (uVar22 != (uint)uVar10) {
            puVar18 = (undefined8 *)(param_1 + (long)(int)uVar22 * 0x10);
            local_68 = puVar18[1];
            local_70 = *puVar18;
            puVar7 = (undefined8 *)(param_1 + uVar10 * 0x10);
            puVar18[1] = puVar7[1];
            *puVar18 = *puVar7;
            puVar7[1] = local_68;
            *puVar7 = local_70;
          }
          puVar11 = puVar11 + 2;
          uVar10 = uVar1;
        } while (uVar1 != (long)iVar20);
      }
      goto LAB_002719bc;
    }
    if ((puVar6 != (undefined1 *)0x0) && (bVar3)) {
                    /* try { // try from 002719e8 to 002719fb has its CatchHandler @ 00271a30 */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar6);
    }
  }
  if (local_78 != false) {
                    /* try { // try from 00271a08 to 00271a0f has its CatchHandler @ 00271a34 */
    FUN_00401ce0(&local_80,local_80);
  }
  return;
}


