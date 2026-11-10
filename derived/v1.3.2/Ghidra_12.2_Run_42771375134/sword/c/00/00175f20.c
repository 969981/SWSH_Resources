/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00175f20; name: FUN_00175f20
 */


void FUN_00175f20(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *__dest;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  code *pcVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long local_90;
  undefined1 *local_88;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar11 = param_5 * 4;
  local_68 = 0x400 < uVar11;
  if (uVar11 < 0x401) {
    __dest = auStack_78 + (-0x18 - ((ulong)uVar11 + 0xf & 0x1fffffff0));
    local_70 = __dest;
  }
  else {
                    /* try { // try from 00175f68 to 00175f7f has its CatchHandler @ 00176458 */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar11,"./../../../../PxShared/src/foundation/include/PsSort.h"
                          ,0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    param_2 = param_2 + -1;
    uVar22 = 0;
    uVar17 = 0;
    uVar11 = 0;
    local_90 = param_1 + 8;
    puVar5 = __dest;
    puVar18 = __dest;
    puVar6 = __dest;
    puVar19 = __dest;
    if (0 < param_2) goto LAB_00176014;
LAB_001763dc:
    iVar14 = (int)uVar22;
    if (iVar14 != 0) {
      uVar22 = (ulong)(iVar14 - 2);
      param_2 = *(int *)(puVar18 + (ulong)(iVar14 - 1) * 4);
      uVar11 = *(uint *)(puVar18 + uVar22 * 4);
      if ((int)uVar11 < param_2) {
LAB_00176014:
        if (4 < param_2 - uVar11) {
          uVar21 = param_2 + uVar11;
          if ((int)uVar21 < 0) {
            uVar21 = uVar21 + 1;
          }
          lVar24 = (long)((ulong)uVar21 << 0x20) >> 0x21;
          lVar7 = *(long *)(param_1 + (long)((int)uVar21 >> 1) * 8);
          lVar9 = *(long *)(param_1 + (long)(int)uVar11 * 8);
          uVar21 = *(uint *)(*(long *)(lVar9 + 0x18) + 0x58);
          lVar12 = lVar9;
          if (*(uint *)(*(long *)(lVar7 + 0x18) + 0x58) < uVar21) {
            lVar12 = (long)(int)uVar11 * 8;
            *(long *)(param_1 + lVar12) = lVar7;
            *(long *)(param_1 + lVar24 * 8) = lVar9;
            lVar12 = *(long *)(param_1 + lVar12);
            uVar21 = *(uint *)(*(long *)(lVar12 + 0x18) + 0x58);
            lVar7 = lVar9;
          }
          lVar9 = *(long *)(param_1 + (long)param_2 * 8);
          uVar2 = *(uint *)(*(long *)(lVar9 + 0x18) + 0x58);
          lVar13 = (long)param_2;
          if (uVar2 < uVar21) {
            *(long *)(param_1 + (long)(int)uVar11 * 8) = lVar9;
            *(long *)(param_1 + lVar13 * 8) = lVar12;
            lVar7 = *(long *)(param_1 + lVar24 * 8);
            lVar9 = lVar12;
            if (*(uint *)(*(long *)(lVar12 + 0x18) + 0x58) <
                *(uint *)(*(long *)(lVar7 + 0x18) + 0x58)) {
LAB_001760c8:
              *(long *)(param_1 + lVar24 * 8) = lVar9;
              *(long *)(param_1 + lVar13 * 8) = lVar7;
              lVar7 = *(long *)(param_1 + lVar24 * 8);
            }
          }
          else if (uVar2 < *(uint *)(*(long *)(lVar7 + 0x18) + 0x58)) goto LAB_001760c8;
          uVar10 = lVar13 - 1;
          uVar15 = (ulong)uVar11;
          *(undefined8 *)(param_1 + lVar24 * 8) = *(undefined8 *)(param_1 + uVar10 * 8);
          uVar8 = uVar10 & 0xffffffff;
          *(long *)(param_1 + uVar10 * 8) = lVar7;
          while( true ) {
            uVar21 = *(uint *)(*(long *)(lVar7 + 0x18) + 0x58);
            iVar14 = (int)uVar15;
            lVar24 = 0;
            do {
              lVar12 = lVar24 * 8;
              lVar24 = lVar24 + 1;
              lVar12 = *(long *)(param_1 + (long)iVar14 * 8 + lVar12 + 8);
            } while (*(uint *)(*(long *)(lVar12 + 0x18) + 0x58) < uVar21);
            plVar3 = (long *)(param_1 + (long)(int)uVar8 * 8);
            do {
              plVar3 = plVar3 + -1;
              uVar2 = (int)uVar8 - 1;
              uVar8 = (ulong)uVar2;
            } while (uVar21 < *(uint *)(*(long *)(*plVar3 + 0x18) + 0x58));
            uVar15 = lVar24 + (uVar15 & 0xffffffff);
            if ((int)uVar2 <= (int)uVar15) break;
            *(long *)(param_1 + (long)iVar14 * 8 + lVar24 * 8) = *plVar3;
            *plVar3 = lVar12;
            lVar7 = *(long *)(param_1 + uVar10 * 8);
          }
          *(long *)(param_1 + (long)iVar14 * 8 + lVar24 * 8) = lVar7;
          iVar23 = (int)lVar24;
          *(long *)(param_1 + uVar10 * 8) = lVar12;
          uVar21 = (uint)uVar22;
          if ((int)((iVar14 - uVar11) + iVar23) < (param_2 - iVar14) - iVar23) {
            if (param_5 - 1 <= uVar21) {
              local_7c = param_5 << 1;
              if (local_7c == 0) {
                puVar5 = (undefined1 *)0x0;
                local_88 = __dest;
                local_80 = uVar17;
              }
              else {
                local_88 = __dest;
                local_80 = uVar17;
                    /* try { // try from 001761a0 to 00176297 has its CatchHandler @ 00176470 */
                plVar3 = (long *)FUN_00400d30();
                pcVar20 = *(code **)(*plVar3 + 0x10);
                plVar4 = (long *)FUN_00400d60();
                uVar15 = (**(code **)(*plVar4 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<const physx::PxsIndexedContactManager *>::getName() [T = const physx::PxsIndexedContactManager *]"
                ;
                if ((uVar15 & 1) == 0) {
                  pcVar1 = "<allocation names disabled>";
                }
                puVar5 = (undefined1 *)
                         (*pcVar20)(plVar3,(ulong)local_7c << 2,pcVar1,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar5;
              memcpy(__dest,puVar6,(ulong)(uVar21 << 2));
              if ((puVar18 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 001762a8 to 001762bb has its CatchHandler @ 00176468 */
                plVar3 = (long *)FUN_00400d30();
                (**(code **)(*plVar3 + 0x18))(plVar3,puVar6);
              }
              uVar17 = 1;
              puVar5 = __dest;
              puVar18 = __dest;
              puVar6 = __dest;
              puVar19 = __dest;
              param_5 = local_7c;
            }
            *(uint *)(puVar18 + uVar22 * 4) = uVar11;
            uVar22 = (ulong)(uVar21 + 2);
            *(int *)(puVar18 + (ulong)(uVar21 + 1) * 4) = iVar14 + -1 + iVar23;
            uVar11 = iVar14 + iVar23 + 1;
            if (param_2 <= (int)uVar11) goto LAB_001763dc;
            goto LAB_00176014;
          }
          if (param_5 - 1 <= uVar21) {
            local_7c = param_5 << 1;
            if (local_7c == 0) {
              puVar6 = (undefined1 *)0x0;
              local_88 = __dest;
              local_80 = uVar17;
            }
            else {
              local_88 = __dest;
              local_80 = uVar17;
              plVar3 = (long *)FUN_00400d30();
              pcVar20 = *(code **)(*plVar3 + 0x10);
              plVar4 = (long *)FUN_00400d60();
              uVar15 = (**(code **)(*plVar4 + 0x28))();
              pcVar1 = 
              "static const char *physx::shdfnd::ReflectionAllocator<const physx::PxsIndexedContactManager *>::getName() [T = const physx::PxsIndexedContactManager *]"
              ;
              if ((uVar15 & 1) == 0) {
                pcVar1 = "<allocation names disabled>";
              }
              puVar6 = (undefined1 *)
                       (*pcVar20)(plVar3,(ulong)local_7c << 2,pcVar1,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar6;
                    /* try { // try from 001762e0 to 001762eb has its CatchHandler @ 00176470 */
            memcpy(__dest,puVar5,(ulong)(uVar21 << 2));
            if ((puVar18 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 001762fc to 0017630f has its CatchHandler @ 00176468 */
              plVar3 = (long *)FUN_00400d30();
              (**(code **)(*plVar3 + 0x18))(plVar3,puVar5);
            }
            uVar17 = 1;
            puVar5 = __dest;
            puVar18 = __dest;
            puVar6 = __dest;
            puVar19 = __dest;
            param_5 = local_7c;
          }
          *(int *)(puVar18 + uVar22 * 4) = iVar23 + iVar14 + 1;
          uVar22 = (ulong)(uVar21 + 2);
          *(int *)(puVar18 + (ulong)(uVar21 + 1) * 4) = param_2;
          param_2 = iVar14 + iVar23 + -1;
          if (param_2 <= (int)uVar11) goto LAB_001763dc;
          goto LAB_00176014;
        }
        lVar24 = local_90 + (long)(int)uVar11 * 8;
        uVar15 = (long)(int)uVar11;
        do {
          uVar11 = uVar11 + 1;
          lVar7 = 0;
          uVar8 = uVar15 + 1;
          uVar10 = uVar15 & 0xffffffff;
          do {
            lVar12 = lVar7 * 8;
            iVar14 = (int)lVar7;
            lVar7 = lVar7 + 1;
            uVar21 = uVar11 + iVar14;
            if (*(uint *)(*(long *)(*(long *)(param_1 + (long)(int)(uint)uVar10 * 8) + 0x18) + 0x58)
                <= *(uint *)(*(long *)(*(long *)(lVar24 + lVar12) + 0x18) + 0x58)) {
              uVar21 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar21;
          } while ((long)(uVar15 + lVar7) < (long)param_2);
          if (uVar21 != (uint)uVar15) {
            uVar10 = -(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3;
            uVar16 = *(undefined8 *)(param_1 + uVar10);
            *(undefined8 *)(param_1 + uVar10) = *(undefined8 *)(param_1 + uVar15 * 8);
            *(undefined8 *)(param_1 + uVar15 * 8) = uVar16;
          }
          lVar24 = lVar24 + 8;
          uVar15 = uVar8;
        } while (uVar8 != (long)param_2);
      }
      goto LAB_001763dc;
    }
    if ((puVar19 != (undefined1 *)0x0) && (uVar17 != 0)) {
                    /* try { // try from 00176408 to 0017641b has its CatchHandler @ 00176450 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar19);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 00176428 to 0017642f has its CatchHandler @ 00176454 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


