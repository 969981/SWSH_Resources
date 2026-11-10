/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00135530; name: FUN_00135530
 */


void FUN_00135530(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 *__dest;
  long *plVar5;
  long *plVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  uint *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  int iVar20;
  code *pcVar21;
  undefined1 *__src;
  undefined1 *__src_00;
  uint uVar22;
  ulong uVar23;
  int iVar24;
  long local_90;
  undefined1 *local_88;
  uint local_7c;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar22 = param_5 * 4;
  local_68 = 0x400 < uVar22;
  if (uVar22 < 0x401) {
    __dest = auStack_78 + (-0x18 - ((ulong)uVar22 + 0xf & 0x1fffffff0));
    local_70 = __dest;
  }
  else {
                    /* try { // try from 00135578 to 0013558f has its CatchHandler @ 001359d4 */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar22,
                          "./../../../../PxShared/src/foundation/include\\PsSort.h",0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    uVar23 = 0;
    bVar4 = false;
    iVar13 = 0;
    local_90 = param_1 + 4;
    puVar19 = __dest;
    puVar7 = __dest;
    __src = __dest;
    __src_00 = __dest;
    iVar20 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_00135620;
LAB_00135958:
    iVar16 = (int)uVar23;
    if (iVar16 != 0) {
      uVar23 = (ulong)(iVar16 - 2);
      iVar13 = *(int *)(puVar19 + uVar23 * 4);
      iVar20 = *(int *)(puVar19 + (ulong)(iVar16 - 1) * 4);
      if (iVar13 < *(int *)(puVar19 + (ulong)(iVar16 - 1) * 4)) {
LAB_00135620:
        if (4 < (uint)(iVar20 - iVar13)) {
          uVar22 = iVar20 + iVar13;
          if ((int)uVar22 < 0) {
            uVar22 = uVar22 + 1;
          }
          lVar12 = (long)((ulong)uVar22 << 0x20) >> 0x21;
          uVar8 = *(uint *)(param_1 + (long)((int)uVar22 >> 1) * 4);
          uVar22 = *(uint *)(param_1 + (long)iVar13 * 4);
          uVar10 = uVar22;
          if (uVar8 < uVar22) {
            lVar14 = (long)iVar13 * 4;
            *(uint *)(param_1 + lVar14) = uVar8;
            *(uint *)(param_1 + lVar12 * 4) = uVar22;
            uVar10 = *(uint *)(param_1 + lVar14);
            uVar8 = uVar22;
          }
          uVar22 = *(uint *)(param_1 + (long)iVar20 * 4);
          lVar14 = (long)iVar20;
          if (uVar22 < uVar10) {
            *(uint *)(param_1 + (long)iVar13 * 4) = uVar22;
            *(uint *)(param_1 + lVar14 * 4) = uVar10;
            uVar8 = *(uint *)(param_1 + lVar12 * 4);
            uVar22 = uVar10;
            if (uVar10 < uVar8) {
LAB_0013569c:
              *(uint *)(param_1 + lVar12 * 4) = uVar22;
              *(uint *)(param_1 + lVar14 * 4) = uVar8;
              uVar8 = *(uint *)(param_1 + lVar12 * 4);
            }
          }
          else if (uVar22 < uVar8) goto LAB_0013569c;
          uVar11 = lVar14 - 1;
          *(undefined4 *)(param_1 + lVar12 * 4) = *(undefined4 *)(param_1 + uVar11 * 4);
          uVar9 = uVar11 & 0xffffffff;
          *(uint *)(param_1 + uVar11 * 4) = uVar8;
          iVar16 = iVar13;
          while( true ) {
            puVar15 = (uint *)(param_1 + (long)iVar16 * 4);
            do {
              iVar24 = iVar16;
              puVar15 = puVar15 + 1;
              uVar22 = *puVar15;
              iVar16 = iVar24 + 1;
            } while (uVar22 < uVar8);
            puVar17 = (uint *)(param_1 + (long)(int)uVar9 * 4);
            do {
              puVar17 = puVar17 + -1;
              uVar10 = (int)uVar9 - 1;
              uVar9 = (ulong)uVar10;
            } while (uVar8 < *puVar17);
            if ((int)uVar10 <= iVar16) break;
            *puVar15 = *puVar17;
            *puVar17 = uVar22;
            uVar8 = *(uint *)(param_1 + uVar11 * 4);
          }
          *puVar15 = uVar8;
          *(uint *)(param_1 + uVar11 * 4) = uVar22;
          uVar22 = (uint)uVar23;
          if (iVar16 - iVar13 < iVar20 - iVar16) {
            if (param_5 - 1 <= uVar22) {
              local_7c = param_5 << 1;
              if (local_7c == 0) {
                puVar7 = (undefined1 *)0x0;
                local_88 = __dest;
              }
              else {
                local_88 = __dest;
                    /* try { // try from 0013573c to 0013582f has its CatchHandler @ 001359ec */
                plVar5 = (long *)FUN_00400d30();
                pcVar21 = *(code **)(*plVar5 + 0x10);
                plVar6 = (long *)FUN_00400d60();
                uVar9 = (**(code **)(*plVar6 + 0x28))();
                pcVar2 = 
                "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
                ;
                if ((uVar9 & 1) == 0) {
                  pcVar2 = "<allocation names disabled>";
                }
                puVar7 = (undefined1 *)
                         (*pcVar21)(plVar5,(ulong)local_7c << 2,pcVar2,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar7;
              memcpy(__dest,__src_00,(ulong)(uVar22 << 2));
              if ((puVar19 != (undefined1 *)0x0) && (bVar4)) {
                    /* try { // try from 0013583c to 0013584f has its CatchHandler @ 001359e4 */
                plVar5 = (long *)FUN_00400d30();
                (**(code **)(*plVar5 + 0x18))(plVar5,__src_00);
              }
              bVar4 = true;
              puVar19 = __dest;
              puVar7 = __dest;
              __src = __dest;
              __src_00 = __dest;
              param_5 = local_7c;
            }
            *(int *)(puVar19 + uVar23 * 4) = iVar13;
            iVar13 = iVar24 + 2;
            *(int *)(puVar19 + (ulong)(uVar22 + 1) * 4) = iVar24;
            uVar23 = (ulong)(uVar22 + 2);
            if (iVar20 <= iVar13) goto LAB_00135958;
            goto LAB_00135620;
          }
          if (param_5 - 1 <= uVar22) {
            local_7c = param_5 << 1;
            if (local_7c == 0) {
              puVar7 = (undefined1 *)0x0;
              local_88 = __dest;
            }
            else {
              local_88 = __dest;
              plVar5 = (long *)FUN_00400d30();
              pcVar21 = *(code **)(*plVar5 + 0x10);
              plVar6 = (long *)FUN_00400d60();
              uVar9 = (**(code **)(*plVar6 + 0x28))();
              pcVar2 = 
              "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
              ;
              if ((uVar9 & 1) == 0) {
                pcVar2 = "<allocation names disabled>";
              }
              puVar7 = (undefined1 *)
                       (*pcVar21)(plVar5,(ulong)local_7c << 2,pcVar2,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar7;
                    /* try { // try from 00135874 to 00135883 has its CatchHandler @ 001359ec */
            memcpy(__dest,__src,(ulong)(uVar22 << 2));
            if ((puVar19 != (undefined1 *)0x0) && (bVar4)) {
                    /* try { // try from 00135890 to 001358a3 has its CatchHandler @ 001359e4 */
              plVar5 = (long *)FUN_00400d30();
              (**(code **)(*plVar5 + 0x18))(plVar5,__src);
            }
            bVar4 = true;
            puVar19 = __dest;
            puVar7 = __dest;
            __src = __dest;
            __src_00 = __dest;
            param_5 = local_7c;
          }
          *(int *)(puVar19 + uVar23 * 4) = iVar24 + 2;
          uVar23 = (ulong)(uVar22 + 2);
          *(int *)(puVar19 + (ulong)(uVar22 + 1) * 4) = iVar20;
          iVar20 = iVar24;
          if (iVar24 <= iVar13) goto LAB_00135958;
          goto LAB_00135620;
        }
        lVar12 = local_90 + (long)iVar13 * 4;
        uVar9 = (long)iVar13;
        do {
          iVar13 = iVar13 + 1;
          lVar14 = 0;
          uVar11 = uVar9 + 1;
          uVar18 = uVar9 & 0xffffffff;
          do {
            lVar1 = lVar14 * 4;
            iVar16 = (int)lVar14;
            lVar14 = lVar14 + 1;
            uVar22 = iVar13 + iVar16;
            if (*(uint *)(param_1 + (long)(int)(uint)uVar18 * 4) <= *(uint *)(lVar12 + lVar1)) {
              uVar22 = (uint)uVar18;
            }
            uVar18 = (ulong)uVar22;
          } while ((long)(uVar9 + lVar14) < (long)iVar20);
          if (uVar22 != (uint)uVar9) {
            uVar18 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | uVar18 << 2;
            uVar3 = *(undefined4 *)(param_1 + uVar18);
            *(undefined4 *)(param_1 + uVar18) = *(undefined4 *)(param_1 + uVar9 * 4);
            *(undefined4 *)(param_1 + uVar9 * 4) = uVar3;
          }
          lVar12 = lVar12 + 4;
          uVar9 = uVar11;
        } while (uVar11 != (long)iVar20);
      }
      goto LAB_00135958;
    }
    if ((puVar7 != (undefined1 *)0x0) && (bVar4)) {
                    /* try { // try from 00135984 to 00135997 has its CatchHandler @ 001359cc */
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar7);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 001359a4 to 001359ab has its CatchHandler @ 001359d0 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


