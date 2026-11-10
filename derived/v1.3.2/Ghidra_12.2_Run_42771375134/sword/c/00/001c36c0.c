/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c36c0; name: FUN_001c36c0
 */


void FUN_001c36c0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  char *pcVar2;
  undefined1 *__dest;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong *puVar15;
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
                    /* try { // try from 001c3708 to 001c371f has its CatchHandler @ 001c3b9c */
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
    puVar6 = __dest;
    puVar18 = __dest;
    puVar19 = __dest;
    if (0 < param_2) goto LAB_001c37b4;
LAB_001c3b20:
    iVar14 = (int)uVar22;
    if (iVar14 != 0) {
      uVar22 = (ulong)(iVar14 - 2);
      param_2 = *(int *)(puVar18 + (ulong)(iVar14 - 1) * 4);
      uVar11 = *(uint *)(puVar18 + uVar22 * 4);
      if ((int)uVar11 < param_2) {
LAB_001c37b4:
        if (4 < param_2 - uVar11) {
          uVar21 = param_2 + uVar11;
          if ((int)uVar21 < 0) {
            uVar21 = uVar21 + 1;
          }
          lVar24 = (long)((ulong)uVar21 << 0x20) >> 0x21;
          uVar7 = *(ulong *)(param_1 + (long)((int)uVar21 >> 1) * 8);
          uVar8 = *(ulong *)(param_1 + (long)(int)uVar11 * 8);
          uVar9 = uVar8;
          if (uVar7 < uVar8) {
            lVar12 = (long)(int)uVar11 * 8;
            *(ulong *)(param_1 + lVar12) = uVar7;
            *(ulong *)(param_1 + lVar24 * 8) = uVar8;
            uVar9 = *(ulong *)(param_1 + lVar12);
            uVar7 = uVar8;
          }
          uVar8 = *(ulong *)(param_1 + (long)param_2 * 8);
          lVar12 = (long)param_2;
          if (uVar8 < uVar9) {
            *(ulong *)(param_1 + (long)(int)uVar11 * 8) = uVar8;
            *(ulong *)(param_1 + lVar12 * 8) = uVar9;
            uVar7 = *(ulong *)(param_1 + lVar24 * 8);
            uVar8 = uVar9;
            if (uVar9 < uVar7) {
LAB_001c3834:
              *(ulong *)(param_1 + lVar24 * 8) = uVar8;
              *(ulong *)(param_1 + lVar12 * 8) = uVar7;
              uVar7 = *(ulong *)(param_1 + lVar24 * 8);
            }
          }
          else if (uVar8 < uVar7) goto LAB_001c3834;
          uVar10 = lVar12 - 1;
          *(undefined8 *)(param_1 + lVar24 * 8) = *(undefined8 *)(param_1 + uVar10 * 8);
          uVar9 = (ulong)uVar11;
          uVar8 = uVar10 & 0xffffffff;
          *(ulong *)(param_1 + uVar10 * 8) = uVar7;
          while( true ) {
            iVar14 = (int)uVar9;
            lVar24 = 0;
            do {
              lVar12 = lVar24 * 8;
              lVar24 = lVar24 + 1;
              uVar13 = *(ulong *)(param_1 + (long)iVar14 * 8 + lVar12 + 8);
            } while (uVar13 < uVar7);
            puVar15 = (ulong *)(param_1 + (long)(int)uVar8 * 8);
            do {
              puVar15 = puVar15 + -1;
              uVar21 = (int)uVar8 - 1;
              uVar8 = (ulong)uVar21;
            } while (uVar7 < *puVar15);
            uVar9 = lVar24 + (uVar9 & 0xffffffff);
            if ((int)uVar21 <= (int)uVar9) break;
            *(ulong *)(param_1 + (long)iVar14 * 8 + lVar24 * 8) = *puVar15;
            *puVar15 = uVar13;
            uVar7 = *(ulong *)(param_1 + uVar10 * 8);
          }
          *(ulong *)(param_1 + (long)iVar14 * 8 + lVar24 * 8) = uVar7;
          iVar23 = (int)lVar24;
          *(ulong *)(param_1 + uVar10 * 8) = uVar13;
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
                    /* try { // try from 001c38f4 to 001c39eb has its CatchHandler @ 001c3bb4 */
                plVar3 = (long *)FUN_00400d30();
                pcVar20 = *(code **)(*plVar3 + 0x10);
                plVar4 = (long *)FUN_00400d60();
                uVar7 = (**(code **)(*plVar4 + 0x28))();
                pcVar2 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape]"
                ;
                if ((uVar7 & 1) == 0) {
                  pcVar2 = "<allocation names disabled>";
                }
                puVar5 = (undefined1 *)
                         (*pcVar20)(plVar3,(ulong)local_7c << 2,pcVar2,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar5;
              memcpy(__dest,puVar6,(ulong)(uVar21 << 2));
              if ((puVar18 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 001c39fc to 001c3a0f has its CatchHandler @ 001c3bac */
                plVar3 = (long *)FUN_00400d30();
                (**(code **)(*plVar3 + 0x18))(plVar3,puVar6);
              }
              uVar17 = 1;
              puVar5 = __dest;
              puVar6 = __dest;
              puVar18 = __dest;
              puVar19 = __dest;
              param_5 = local_7c;
            }
            *(uint *)(puVar18 + uVar22 * 4) = uVar11;
            uVar22 = (ulong)(uVar21 + 2);
            *(int *)(puVar18 + (ulong)(uVar21 + 1) * 4) = iVar14 + -1 + iVar23;
            uVar11 = iVar14 + iVar23 + 1;
            if (param_2 <= (int)uVar11) goto LAB_001c3b20;
            goto LAB_001c37b4;
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
              uVar7 = (**(code **)(*plVar4 + 0x28))();
              pcVar2 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::NpShape>::getName() [T = physx::NpShape]"
              ;
              if ((uVar7 & 1) == 0) {
                pcVar2 = "<allocation names disabled>";
              }
              puVar6 = (undefined1 *)
                       (*pcVar20)(plVar3,(ulong)local_7c << 2,pcVar2,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar6;
                    /* try { // try from 001c3a34 to 001c3a3f has its CatchHandler @ 001c3bb4 */
            memcpy(__dest,puVar5,(ulong)(uVar21 << 2));
            if ((puVar18 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 001c3a50 to 001c3a63 has its CatchHandler @ 001c3bac */
              plVar3 = (long *)FUN_00400d30();
              (**(code **)(*plVar3 + 0x18))(plVar3,puVar5);
            }
            uVar17 = 1;
            puVar5 = __dest;
            puVar6 = __dest;
            puVar18 = __dest;
            puVar19 = __dest;
            param_5 = local_7c;
          }
          *(int *)(puVar18 + uVar22 * 4) = iVar23 + iVar14 + 1;
          uVar22 = (ulong)(uVar21 + 2);
          *(int *)(puVar18 + (ulong)(uVar21 + 1) * 4) = param_2;
          param_2 = iVar14 + iVar23 + -1;
          if (param_2 <= (int)uVar11) goto LAB_001c3b20;
          goto LAB_001c37b4;
        }
        lVar24 = local_90 + (long)(int)uVar11 * 8;
        uVar7 = (long)(int)uVar11;
        do {
          uVar11 = uVar11 + 1;
          lVar12 = 0;
          uVar9 = uVar7 + 1;
          uVar8 = uVar7 & 0xffffffff;
          do {
            lVar1 = lVar12 * 8;
            iVar14 = (int)lVar12;
            lVar12 = lVar12 + 1;
            uVar21 = uVar11 + iVar14;
            if (*(ulong *)(param_1 + (long)(int)(uint)uVar8 * 8) <= *(ulong *)(lVar24 + lVar1)) {
              uVar21 = (uint)uVar8;
            }
            uVar8 = (ulong)uVar21;
          } while ((long)(uVar7 + lVar12) < (long)param_2);
          if (uVar21 != (uint)uVar7) {
            uVar8 = -(ulong)(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
            uVar16 = *(undefined8 *)(param_1 + uVar8);
            *(undefined8 *)(param_1 + uVar8) = *(undefined8 *)(param_1 + uVar7 * 8);
            *(undefined8 *)(param_1 + uVar7 * 8) = uVar16;
          }
          lVar24 = lVar24 + 8;
          uVar7 = uVar9;
        } while (uVar9 != (long)param_2);
      }
      goto LAB_001c3b20;
    }
    if ((puVar19 != (undefined1 *)0x0) && (uVar17 != 0)) {
                    /* try { // try from 001c3b4c to 001c3b5f has its CatchHandler @ 001c3b94 */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,puVar19);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 001c3b6c to 001c3b73 has its CatchHandler @ 001c3b98 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


