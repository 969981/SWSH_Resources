/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001284b0; name: FUN_001284b0
 */


void FUN_001284b0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  undefined1 *__dest;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  code *pcVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  long lVar23;
  long local_90;
  undefined1 *local_88;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar10 = param_5 * 4;
  local_68 = 0x400 < uVar10;
  if (uVar10 < 0x401) {
    __dest = auStack_78 + (-0x18 - ((ulong)uVar10 + 0xf & 0x1fffffff0));
    local_70 = __dest;
  }
  else {
                    /* try { // try from 001284f8 to 0012850f has its CatchHandler @ 001289bc */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar10,"./../../../../PxShared/src/foundation/include/PsSort.h"
                          ,0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    param_2 = param_2 + -1;
    uVar21 = 0;
    uVar16 = 0;
    uVar10 = 0;
    local_90 = param_1 + 8;
    puVar4 = __dest;
    puVar5 = __dest;
    puVar17 = __dest;
    puVar18 = __dest;
    if (0 < param_2) goto LAB_001285a4;
LAB_00128940:
    iVar13 = (int)uVar21;
    if (iVar13 != 0) {
      uVar21 = (ulong)(iVar13 - 2);
      param_2 = *(int *)(puVar17 + (ulong)(iVar13 - 1) * 4);
      uVar10 = *(uint *)(puVar17 + uVar21 * 4);
      if ((int)uVar10 < param_2) {
LAB_001285a4:
        if (4 < param_2 - uVar10) {
          uVar20 = param_2 + uVar10;
          if ((int)uVar20 < 0) {
            uVar20 = uVar20 + 1;
          }
          lVar23 = (long)((ulong)uVar20 << 0x20) >> 0x21;
          lVar6 = *(long *)(param_1 + (long)((int)uVar20 >> 1) * 8);
          lVar8 = *(long *)(param_1 + (long)(int)uVar10 * 8);
          uVar20 = *(uint *)(lVar8 + 0x50);
          lVar11 = lVar8;
          if (*(uint *)(lVar6 + 0x50) < uVar20) {
            lVar11 = (long)(int)uVar10 * 8;
            *(long *)(param_1 + lVar11) = lVar6;
            *(long *)(param_1 + lVar23 * 8) = lVar8;
            lVar11 = *(long *)(param_1 + lVar11);
            uVar20 = *(uint *)(lVar11 + 0x50);
            lVar6 = lVar8;
          }
          lVar8 = *(long *)(param_1 + (long)param_2 * 8);
          lVar12 = (long)param_2;
          if (*(uint *)(lVar8 + 0x50) < uVar20) {
            *(long *)(param_1 + (long)(int)uVar10 * 8) = lVar8;
            *(long *)(param_1 + lVar12 * 8) = lVar11;
            lVar6 = *(long *)(param_1 + lVar23 * 8);
            lVar8 = lVar11;
            if (*(uint *)(lVar11 + 0x50) < *(uint *)(lVar6 + 0x50)) {
LAB_00128640:
              *(long *)(param_1 + lVar23 * 8) = lVar8;
              *(long *)(param_1 + lVar12 * 8) = lVar6;
              lVar6 = *(long *)(param_1 + lVar23 * 8);
            }
          }
          else if (*(uint *)(lVar8 + 0x50) < *(uint *)(lVar6 + 0x50)) goto LAB_00128640;
          uVar9 = lVar12 - 1;
          uVar14 = (ulong)uVar10;
          *(undefined8 *)(param_1 + lVar23 * 8) = *(undefined8 *)(param_1 + uVar9 * 8);
          uVar7 = uVar9 & 0xffffffff;
          *(long *)(param_1 + uVar9 * 8) = lVar6;
          while( true ) {
            iVar13 = (int)uVar14;
            lVar23 = 0;
            do {
              lVar11 = lVar23 * 8;
              lVar23 = lVar23 + 1;
              lVar11 = *(long *)(param_1 + (long)iVar13 * 8 + lVar11 + 8);
            } while (*(uint *)(lVar11 + 0x50) < *(uint *)(lVar6 + 0x50));
            plVar2 = (long *)(param_1 + (long)(int)uVar7 * 8);
            do {
              plVar2 = plVar2 + -1;
              uVar20 = (int)uVar7 - 1;
              uVar7 = (ulong)uVar20;
            } while (*(uint *)(lVar6 + 0x50) < *(uint *)(*plVar2 + 0x50));
            uVar14 = lVar23 + (uVar14 & 0xffffffff);
            if ((int)uVar20 <= (int)uVar14) break;
            *(long *)(param_1 + (long)iVar13 * 8 + lVar23 * 8) = *plVar2;
            *plVar2 = lVar11;
            lVar6 = *(long *)(param_1 + uVar9 * 8);
          }
          *(long *)(param_1 + (long)iVar13 * 8 + lVar23 * 8) = lVar6;
          iVar22 = (int)lVar23;
          *(long *)(param_1 + uVar9 * 8) = lVar11;
          uVar20 = (uint)uVar21;
          if ((int)((iVar13 - uVar10) + iVar22) < (param_2 - iVar13) - iVar22) {
            if (param_5 - 1 <= uVar20) {
              local_7c = param_5 << 1;
              if (local_7c == 0) {
                puVar4 = (undefined1 *)0x0;
                local_88 = __dest;
                local_80 = uVar16;
              }
              else {
                local_88 = __dest;
                local_80 = uVar16;
                    /* try { // try from 0012870c to 00128803 has its CatchHandler @ 001289d4 */
                plVar2 = (long *)FUN_00400d30();
                pcVar19 = *(code **)(*plVar2 + 0x10);
                plVar3 = (long *)FUN_00400d60();
                uVar14 = (**(code **)(*plVar3 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDPair *>::getName() [T = physx::PxsCCDPair *]"
                ;
                if ((uVar14 & 1) == 0) {
                  pcVar1 = "<allocation names disabled>";
                }
                puVar4 = (undefined1 *)
                         (*pcVar19)(plVar2,(ulong)local_7c << 2,pcVar1,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar4;
              memcpy(__dest,puVar5,(ulong)(uVar20 << 2));
              if ((puVar17 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 00128814 to 00128827 has its CatchHandler @ 001289cc */
                plVar2 = (long *)FUN_00400d30();
                (**(code **)(*plVar2 + 0x18))(plVar2,puVar5);
              }
              uVar16 = 1;
              puVar4 = __dest;
              puVar5 = __dest;
              puVar17 = __dest;
              puVar18 = __dest;
              param_5 = local_7c;
            }
            *(uint *)(puVar17 + uVar21 * 4) = uVar10;
            uVar21 = (ulong)(uVar20 + 2);
            *(int *)(puVar17 + (ulong)(uVar20 + 1) * 4) = iVar13 + -1 + iVar22;
            uVar10 = iVar13 + iVar22 + 1;
            if (param_2 <= (int)uVar10) goto LAB_00128940;
            goto LAB_001285a4;
          }
          if (param_5 - 1 <= uVar20) {
            local_7c = param_5 << 1;
            if (local_7c == 0) {
              puVar5 = (undefined1 *)0x0;
              local_88 = __dest;
              local_80 = uVar16;
            }
            else {
              local_88 = __dest;
              local_80 = uVar16;
              plVar2 = (long *)FUN_00400d30();
              pcVar19 = *(code **)(*plVar2 + 0x10);
              plVar3 = (long *)FUN_00400d60();
              uVar14 = (**(code **)(*plVar3 + 0x28))();
              pcVar1 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDPair *>::getName() [T = physx::PxsCCDPair *]"
              ;
              if ((uVar14 & 1) == 0) {
                pcVar1 = "<allocation names disabled>";
              }
              puVar5 = (undefined1 *)
                       (*pcVar19)(plVar2,(ulong)local_7c << 2,pcVar1,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar5;
                    /* try { // try from 0012884c to 00128857 has its CatchHandler @ 001289d4 */
            memcpy(__dest,puVar4,(ulong)(uVar20 << 2));
            if ((puVar17 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 00128868 to 0012887b has its CatchHandler @ 001289cc */
              plVar2 = (long *)FUN_00400d30();
              (**(code **)(*plVar2 + 0x18))(plVar2,puVar4);
            }
            uVar16 = 1;
            puVar4 = __dest;
            puVar5 = __dest;
            puVar17 = __dest;
            puVar18 = __dest;
            param_5 = local_7c;
          }
          *(int *)(puVar17 + uVar21 * 4) = iVar22 + iVar13 + 1;
          uVar21 = (ulong)(uVar20 + 2);
          *(int *)(puVar17 + (ulong)(uVar20 + 1) * 4) = param_2;
          param_2 = iVar13 + iVar22 + -1;
          if (param_2 <= (int)uVar10) goto LAB_00128940;
          goto LAB_001285a4;
        }
        lVar23 = local_90 + (long)(int)uVar10 * 8;
        uVar14 = (long)(int)uVar10;
        do {
          uVar10 = uVar10 + 1;
          lVar6 = 0;
          uVar7 = uVar14 + 1;
          uVar9 = uVar14 & 0xffffffff;
          do {
            lVar11 = lVar6 * 8;
            iVar13 = (int)lVar6;
            lVar6 = lVar6 + 1;
            uVar20 = uVar10 + iVar13;
            if (*(uint *)(*(long *)(param_1 + (long)(int)(uint)uVar9 * 8) + 0x50) <=
                *(uint *)(*(long *)(lVar23 + lVar11) + 0x50)) {
              uVar20 = (uint)uVar9;
            }
            uVar9 = (ulong)uVar20;
          } while ((long)(uVar14 + lVar6) < (long)param_2);
          if (uVar20 != (uint)uVar14) {
            uVar9 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar9 << 3;
            uVar15 = *(undefined8 *)(param_1 + uVar9);
            *(undefined8 *)(param_1 + uVar9) = *(undefined8 *)(param_1 + uVar14 * 8);
            *(undefined8 *)(param_1 + uVar14 * 8) = uVar15;
          }
          lVar23 = lVar23 + 8;
          uVar14 = uVar7;
        } while (uVar7 != (long)param_2);
      }
      goto LAB_00128940;
    }
    if ((puVar18 != (undefined1 *)0x0) && (uVar16 != 0)) {
                    /* try { // try from 0012896c to 0012897f has its CatchHandler @ 001289b4 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar18);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 0012898c to 00128993 has its CatchHandler @ 001289b8 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


