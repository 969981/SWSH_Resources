/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00177a30; name: FUN_00177a30
 */


void FUN_00177a30(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  undefined1 *__dest;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
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
  float fVar24;
  float fVar25;
  long local_90;
  undefined1 *local_88;
  uint local_80;
  uint local_7c;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar9 = param_5 * 4;
  local_68 = 0x400 < uVar9;
  if (uVar9 < 0x401) {
    __dest = auStack_78 + (-0x18 - ((ulong)uVar9 + 0xf & 0x1fffffff0));
    local_70 = __dest;
  }
  else {
                    /* try { // try from 00177a78 to 00177a8f has its CatchHandler @ 00177f2c */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar9,"./../../../../PxShared/src/foundation/include/PsSort.h",
                          0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    param_2 = param_2 + -1;
    uVar21 = 0;
    uVar16 = 0;
    uVar9 = 0;
    local_90 = param_1 + 8;
    puVar4 = __dest;
    puVar5 = __dest;
    puVar17 = __dest;
    puVar18 = __dest;
    if (0 < param_2) goto LAB_00177b24;
LAB_00177eb0:
    iVar11 = (int)uVar21;
    if (iVar11 != 0) {
      uVar21 = (ulong)(iVar11 - 2);
      param_2 = *(int *)(puVar17 + (ulong)(iVar11 - 1) * 4);
      uVar9 = *(uint *)(puVar17 + uVar21 * 4);
      if ((int)uVar9 < param_2) {
LAB_00177b24:
        if (4 < param_2 - uVar9) {
          uVar20 = param_2 + uVar9;
          if ((int)uVar20 < 0) {
            uVar20 = uVar20 + 1;
          }
          lVar10 = *(long *)(param_1 + (long)(int)uVar9 * 8);
          lVar23 = (long)((ulong)uVar20 << 0x20) >> 0x21;
          lVar6 = *(long *)(param_1 + (long)((int)uVar20 >> 1) * 8);
          fVar24 = *(float *)(lVar10 + 0x18);
          lVar12 = lVar10;
          if (*(float *)(lVar6 + 0x18) < fVar24) {
            lVar12 = (long)(int)uVar9 * 8;
            *(long *)(param_1 + lVar12) = lVar6;
            *(long *)(param_1 + lVar23 * 8) = lVar10;
            lVar12 = *(long *)(param_1 + lVar12);
            fVar24 = *(float *)(lVar12 + 0x18);
            lVar6 = lVar10;
          }
          lVar10 = *(long *)(param_1 + (long)param_2 * 8);
          fVar25 = *(float *)(lVar10 + 0x18);
          lVar13 = (long)param_2;
          if (fVar25 < fVar24) {
            *(long *)(param_1 + (long)(int)uVar9 * 8) = lVar10;
            *(long *)(param_1 + lVar13 * 8) = lVar12;
            fVar25 = *(float *)(lVar12 + 0x18);
            lVar6 = *(long *)(param_1 + lVar23 * 8);
            lVar10 = lVar12;
          }
          if (fVar25 < *(float *)(lVar6 + 0x18)) {
            *(long *)(param_1 + lVar23 * 8) = lVar10;
            *(long *)(param_1 + lVar13 * 8) = lVar6;
            lVar6 = *(long *)(param_1 + lVar23 * 8);
          }
          uVar8 = lVar13 - 1;
          *(undefined8 *)(param_1 + lVar23 * 8) = *(undefined8 *)(param_1 + uVar8 * 8);
          uVar14 = (ulong)uVar9;
          uVar7 = uVar8 & 0xffffffff;
          *(long *)(param_1 + uVar8 * 8) = lVar6;
          while( true ) {
            iVar11 = (int)uVar14;
            lVar23 = 0;
            do {
              lVar12 = lVar23 * 8;
              lVar23 = lVar23 + 1;
              lVar12 = *(long *)(param_1 + (long)iVar11 * 8 + lVar12 + 8);
            } while (*(float *)(lVar12 + 0x18) < *(float *)(lVar6 + 0x18));
            plVar2 = (long *)(param_1 + (long)(int)uVar7 * 8);
            do {
              plVar2 = plVar2 + -1;
              uVar20 = (int)uVar7 - 1;
              uVar7 = (ulong)uVar20;
            } while (*(float *)(lVar6 + 0x18) < *(float *)(*plVar2 + 0x18));
            uVar14 = lVar23 + (uVar14 & 0xffffffff);
            if ((int)uVar20 <= (int)uVar14) break;
            *(long *)(param_1 + (long)iVar11 * 8 + lVar23 * 8) = *plVar2;
            *plVar2 = lVar12;
            lVar6 = *(long *)(param_1 + uVar8 * 8);
          }
          *(long *)(param_1 + (long)iVar11 * 8 + lVar23 * 8) = lVar6;
          iVar22 = (int)lVar23;
          *(long *)(param_1 + uVar8 * 8) = lVar12;
          uVar20 = (uint)uVar21;
          if ((int)((iVar11 - uVar9) + iVar22) < (param_2 - iVar11) - iVar22) {
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
                    /* try { // try from 00177c7c to 00177d73 has its CatchHandler @ 00177f44 */
                plVar2 = (long *)FUN_00400d30();
                pcVar19 = *(code **)(*plVar2 + 0x10);
                plVar3 = (long *)FUN_00400d60();
                uVar14 = (**(code **)(*plVar3 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ContactPatch *>::getName() [T = physx::Dy::ContactPatch *]"
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
                    /* try { // try from 00177d84 to 00177d97 has its CatchHandler @ 00177f3c */
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
            *(uint *)(puVar17 + uVar21 * 4) = uVar9;
            uVar21 = (ulong)(uVar20 + 2);
            *(int *)(puVar17 + (ulong)(uVar20 + 1) * 4) = iVar11 + -1 + iVar22;
            uVar9 = iVar11 + iVar22 + 1;
            if (param_2 <= (int)uVar9) goto LAB_00177eb0;
            goto LAB_00177b24;
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
              "static const char *physx::shdfnd::ReflectionAllocator<physx::Dy::ContactPatch *>::getName() [T = physx::Dy::ContactPatch *]"
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
                    /* try { // try from 00177dbc to 00177dc7 has its CatchHandler @ 00177f44 */
            memcpy(__dest,puVar4,(ulong)(uVar20 << 2));
            if ((puVar17 != (undefined1 *)0x0) && ((local_80 & 0xff) != 0)) {
                    /* try { // try from 00177dd8 to 00177deb has its CatchHandler @ 00177f3c */
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
          *(int *)(puVar17 + uVar21 * 4) = iVar22 + iVar11 + 1;
          uVar21 = (ulong)(uVar20 + 2);
          *(int *)(puVar17 + (ulong)(uVar20 + 1) * 4) = param_2;
          param_2 = iVar11 + iVar22 + -1;
          if (param_2 <= (int)uVar9) goto LAB_00177eb0;
          goto LAB_00177b24;
        }
        lVar23 = local_90 + (long)(int)uVar9 * 8;
        uVar14 = (long)(int)uVar9;
        do {
          uVar9 = uVar9 + 1;
          lVar6 = 0;
          uVar7 = uVar14 + 1;
          uVar8 = uVar14 & 0xffffffff;
          do {
            lVar12 = lVar6 * 8;
            iVar11 = (int)lVar6;
            lVar6 = lVar6 + 1;
            uVar20 = uVar9 + iVar11;
            if (*(float *)(*(long *)(param_1 + (long)(int)(uint)uVar8 * 8) + 0x18) <=
                *(float *)(*(long *)(lVar23 + lVar12) + 0x18)) {
              uVar20 = (uint)uVar8;
            }
            uVar8 = (ulong)uVar20;
          } while ((long)(uVar14 + lVar6) < (long)param_2);
          if (uVar20 != (uint)uVar14) {
            uVar8 = -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3;
            uVar15 = *(undefined8 *)(param_1 + uVar8);
            *(undefined8 *)(param_1 + uVar8) = *(undefined8 *)(param_1 + uVar14 * 8);
            *(undefined8 *)(param_1 + uVar14 * 8) = uVar15;
          }
          lVar23 = lVar23 + 8;
          uVar14 = uVar7;
        } while (uVar7 != (long)param_2);
      }
      goto LAB_00177eb0;
    }
    if ((puVar18 != (undefined1 *)0x0) && (uVar16 != 0)) {
                    /* try { // try from 00177edc to 00177eef has its CatchHandler @ 00177f24 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar18);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 00177efc to 00177f03 has its CatchHandler @ 00177f28 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


