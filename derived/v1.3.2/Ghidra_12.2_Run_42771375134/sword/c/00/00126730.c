/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00126730; name: FUN_00126730
 */


void FUN_00126730(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 *__dest;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  uint uVar20;
  undefined1 *puVar21;
  code *pcVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  uint local_8c;
  undefined1 *local_88;
  uint local_7c;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  bool local_68;
  
  uVar26 = param_5 * 4;
  local_68 = 0x400 < uVar26;
  if (uVar26 < 0x401) {
    __dest = auStack_a0 + -((ulong)uVar26 + 0xf & 0x1fffffff0);
    local_70 = __dest;
  }
  else {
                    /* try { // try from 00126778 to 0012678f has its CatchHandler @ 00126cdc */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_78,uVar26,"./../../../../PxShared/src/foundation/include/PsSort.h"
                          ,0x41);
    local_70 = __dest;
  }
  local_70 = __dest;
  if (0 < param_2 + -1) {
    uVar26 = 0;
    uVar20 = 0;
    iVar13 = 0;
    puVar6 = __dest;
    puVar21 = __dest;
    puVar7 = __dest;
    puVar23 = __dest;
    iVar24 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_00126814;
LAB_00126c7c:
    if (uVar26 != 0) {
      uVar3 = uVar26 - 1;
      uVar26 = uVar26 - 2;
      iVar13 = *(int *)(puVar21 + (ulong)uVar26 * 4);
      iVar24 = *(int *)(puVar21 + (ulong)uVar3 * 4);
      if (iVar13 < *(int *)(puVar21 + (ulong)uVar3 * 4)) {
LAB_00126814:
        if (4 < (uint)(iVar24 - iVar13)) {
          uVar3 = iVar24 + iVar13;
          lVar16 = *(long *)(param_1 + (long)iVar13 * 8);
          if ((int)uVar3 < 0) {
            uVar3 = uVar3 + 1;
          }
          lVar19 = (long)((ulong)uVar3 << 0x20) >> 0x21;
          fVar27 = *(float *)(lVar16 + 0x2c);
          lVar9 = *(long *)(param_1 + (long)((int)uVar3 >> 1) * 8);
          if ((*(float *)(lVar9 + 0x2c) < fVar27) ||
             (((*(float *)(lVar9 + 0x2c) == fVar27 && (*(long *)(lVar9 + 8) != 0)) &&
              (*(long *)(lVar16 + 8) == 0)))) {
            lVar11 = (long)iVar13 * 8;
            *(long *)(param_1 + lVar11) = lVar9;
            *(long *)(param_1 + lVar19 * 8) = lVar16;
            lVar11 = *(long *)(param_1 + lVar11);
            fVar27 = *(float *)(lVar11 + 0x2c);
            lVar9 = lVar16;
            lVar16 = lVar11;
          }
          lVar11 = *(long *)(param_1 + (long)iVar24 * 8);
          fVar28 = *(float *)(lVar11 + 0x2c);
          lVar14 = (long)iVar24;
          if ((fVar28 < fVar27) ||
             (((fVar28 == fVar27 && (*(long *)(lVar11 + 8) != 0)) && (*(long *)(lVar16 + 8) == 0))))
          {
            *(long *)(param_1 + (long)iVar13 * 8) = lVar11;
            *(long *)(param_1 + lVar14 * 8) = lVar16;
            lVar9 = *(long *)(param_1 + lVar19 * 8);
            bVar4 = *(float *)(lVar16 + 0x2c) == *(float *)(lVar9 + 0x2c);
            lVar11 = lVar16;
            if (*(float *)(lVar9 + 0x2c) <= *(float *)(lVar16 + 0x2c)) goto LAB_001268bc;
LAB_001268f8:
            *(long *)(param_1 + lVar19 * 8) = lVar11;
            *(long *)(param_1 + lVar14 * 8) = lVar9;
            lVar9 = *(long *)(param_1 + lVar19 * 8);
          }
          else {
            bVar4 = fVar28 == *(float *)(lVar9 + 0x2c);
            if (fVar28 < *(float *)(lVar9 + 0x2c)) goto LAB_001268f8;
LAB_001268bc:
            if (((bVar4) && (*(long *)(lVar11 + 8) != 0)) && (*(long *)(lVar9 + 8) == 0))
            goto LAB_001268f8;
          }
          uVar12 = lVar14 - 1;
          *(undefined8 *)(param_1 + lVar19 * 8) = *(undefined8 *)(param_1 + uVar12 * 8);
          uVar10 = uVar12 & 0xffffffff;
          *(long *)(param_1 + uVar12 * 8) = lVar9;
          iVar15 = iVar13;
          while( true ) {
            fVar27 = *(float *)(lVar9 + 0x2c);
            plVar8 = (long *)(param_1 + 8 + (long)iVar15 * 8);
            lVar16 = *plVar8;
            fVar28 = *(float *)(lVar16 + 0x2c);
            iVar25 = iVar15;
            if (fVar27 <= fVar28) goto LAB_00126968;
            do {
              do {
                iVar25 = iVar25 + 1;
                plVar8 = plVar8 + 1;
                lVar16 = *plVar8;
                fVar28 = *(float *)(lVar16 + 0x2c);
              } while (fVar28 < fVar27);
LAB_00126968:
            } while (((fVar28 == fVar27) && (*(long *)(lVar16 + 8) != 0)) &&
                    (*(long *)(lVar9 + 8) == 0));
            plVar5 = (long *)(param_1 + -8 + (long)(int)uVar10 * 8);
            iVar15 = iVar25 + 1;
            while( true ) {
              lVar19 = *plVar5;
              uVar3 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar3;
              if ((*(float *)(lVar19 + 0x2c) <= fVar27) &&
                 (((fVar27 != *(float *)(lVar19 + 0x2c) || (*(long *)(lVar9 + 8) == 0)) ||
                  (*(long *)(lVar19 + 8) != 0)))) break;
              plVar5 = plVar5 + -1;
            }
            if ((int)uVar3 <= iVar15) break;
            *plVar8 = lVar19;
            *plVar5 = lVar16;
            lVar9 = *(long *)(param_1 + uVar12 * 8);
          }
          *plVar8 = lVar9;
          *(long *)(param_1 + uVar12 * 8) = lVar16;
          if ((iVar24 + -1) - iVar25 <= (iVar25 - iVar13) + 1) {
            if (param_5 - 1 <= uVar26) {
              local_7c = param_5 << 1;
              if (local_7c == 0) {
                puVar7 = (undefined1 *)0x0;
                local_98 = __dest;
                local_8c = uVar20;
                local_88 = puVar21;
              }
              else {
                local_98 = __dest;
                local_8c = uVar20;
                local_88 = puVar21;
                plVar8 = (long *)FUN_00400d30();
                pcVar22 = *(code **)(*plVar8 + 0x10);
                plVar5 = (long *)FUN_00400d60();
                uVar10 = (**(code **)(*plVar5 + 0x28))();
                pcVar2 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDPair *>::getName() [T = physx::PxsCCDPair *]"
                ;
                if ((uVar10 & 1) == 0) {
                  pcVar2 = "<allocation names disabled>";
                }
                puVar7 = (undefined1 *)
                         (*pcVar22)(plVar8,(ulong)local_7c << 2,pcVar2,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              __dest = puVar7;
                    /* try { // try from 00126b68 to 00126b73 has its CatchHandler @ 00126cf4 */
              memcpy(__dest,puVar6,(ulong)(uVar26 << 2));
              if ((local_88 != (undefined1 *)0x0) && ((local_8c & 0xff) != 0)) {
                    /* try { // try from 00126b88 to 00126b9b has its CatchHandler @ 00126cec */
                plVar8 = (long *)FUN_00400d30();
                (**(code **)(*plVar8 + 0x18))(plVar8,puVar6);
              }
              uVar20 = 1;
              puVar6 = __dest;
              puVar21 = __dest;
              puVar7 = __dest;
              puVar23 = __dest;
              param_5 = local_7c;
            }
            uVar3 = uVar26 + 1;
            *(int *)(puVar21 + (ulong)uVar26 * 4) = iVar25 + 2;
            uVar26 = uVar26 + 2;
            *(int *)(puVar21 + (ulong)uVar3 * 4) = iVar24;
            iVar24 = iVar25;
            if (iVar25 <= iVar13) goto LAB_00126c7c;
            goto LAB_00126814;
          }
          if (param_5 - 1 <= uVar26) {
            local_7c = param_5 << 1;
            if (local_7c == 0) {
              puVar6 = (undefined1 *)0x0;
              local_98 = __dest;
              local_8c = uVar20;
              local_88 = puVar21;
            }
            else {
              local_98 = __dest;
              local_8c = uVar20;
              local_88 = puVar21;
                    /* try { // try from 00126a00 to 00126aff has its CatchHandler @ 00126cf4 */
              plVar8 = (long *)FUN_00400d30();
              pcVar22 = *(code **)(*plVar8 + 0x10);
              plVar5 = (long *)FUN_00400d60();
              uVar10 = (**(code **)(*plVar5 + 0x28))();
              pcVar2 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDPair *>::getName() [T = physx::PxsCCDPair *]"
              ;
              if ((uVar10 & 1) == 0) {
                pcVar2 = "<allocation names disabled>";
              }
              puVar6 = (undefined1 *)
                       (*pcVar22)(plVar8,(ulong)local_7c << 2,pcVar2,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
            __dest = puVar6;
            memcpy(__dest,puVar7,(ulong)(uVar26 << 2));
            if ((local_88 != (undefined1 *)0x0) && ((local_8c & 0xff) != 0)) {
                    /* try { // try from 00126b14 to 00126b27 has its CatchHandler @ 00126cec */
              plVar8 = (long *)FUN_00400d30();
              (**(code **)(*plVar8 + 0x18))(plVar8,puVar7);
            }
            uVar20 = 1;
            puVar6 = __dest;
            puVar21 = __dest;
            puVar7 = __dest;
            puVar23 = __dest;
            param_5 = local_7c;
          }
          *(int *)(puVar21 + (ulong)uVar26 * 4) = iVar13;
          *(int *)(puVar21 + (ulong)(uVar26 + 1) * 4) = iVar25;
          iVar13 = iVar25 + 2;
          uVar26 = uVar26 + 2;
          if (iVar24 <= iVar13) goto LAB_00126c7c;
          goto LAB_00126814;
        }
        lVar16 = param_1 + 8 + (long)iVar13 * 8;
        uVar12 = (ulong)iVar24;
        uVar10 = (long)iVar13;
        do {
          iVar13 = iVar13 + 1;
          lVar19 = 0;
          uVar1 = uVar10 + 1;
          uVar17 = uVar10 & 0xffffffff;
          do {
            while( true ) {
              lVar11 = *(long *)(lVar16 + lVar19 * 8);
              fVar27 = *(float *)(lVar11 + 0x2c);
              lVar9 = *(long *)(param_1 + (long)(int)uVar17 * 8);
              fVar28 = *(float *)(lVar9 + 0x2c);
              if ((fVar28 <= fVar27) &&
                 (((fVar27 != fVar28 || (*(long *)(lVar11 + 8) == 0)) || (*(long *)(lVar9 + 8) != 0)
                  ))) break;
              uVar17 = (ulong)(uint)(iVar13 + (int)lVar19);
              lVar19 = lVar19 + 1;
              if ((long)uVar12 <= (long)(uVar10 + lVar19)) goto LAB_00126c4c;
            }
            lVar19 = lVar19 + 1;
          } while ((long)(uVar10 + lVar19) < (long)uVar12);
LAB_00126c4c:
          if ((int)uVar17 != (int)uVar10) {
            uVar17 = -(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar17 << 3;
            uVar18 = *(undefined8 *)(param_1 + uVar17);
            *(undefined8 *)(param_1 + uVar17) = *(undefined8 *)(param_1 + uVar10 * 8);
            *(undefined8 *)(param_1 + uVar10 * 8) = uVar18;
          }
          lVar16 = lVar16 + 8;
          uVar10 = uVar1;
        } while (uVar1 != uVar12);
      }
      goto LAB_00126c7c;
    }
    if ((puVar23 != (undefined1 *)0x0) && (uVar20 != 0)) {
                    /* try { // try from 00126c8c to 00126c9f has its CatchHandler @ 00126cd4 */
      plVar8 = (long *)FUN_00400d30();
      (**(code **)(*plVar8 + 0x18))(plVar8,puVar23);
    }
  }
  if (local_68 != false) {
                    /* try { // try from 00126cac to 00126cb3 has its CatchHandler @ 00126cd8 */
    FUN_00401ce0(&local_70,local_70);
  }
  return;
}


