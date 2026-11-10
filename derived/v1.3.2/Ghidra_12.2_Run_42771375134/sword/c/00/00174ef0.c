/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00174ef0; name: FUN_00174ef0
 */


void FUN_00174ef0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 *__src;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  code *pcVar24;
  undefined1 *__src_00;
  int iVar25;
  undefined1 *puVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined1 *local_b0;
  uint local_a4;
  undefined1 *local_a0;
  uint local_94;
  undefined1 *local_90;
  bool local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar9 = param_5 * 4;
  local_88 = 0x400 < uVar9;
  if (uVar9 < 0x401) {
    puVar6 = auStack_c0 + -((ulong)uVar9 + 0xf & 0x1fffffff0);
    local_90 = puVar6;
  }
  else {
                    /* try { // try from 00174f38 to 00174f4f has its CatchHandler @ 00175714 */
    puVar6 = (undefined1 *)
             FUN_00401b30(&local_80,uVar9,"./../../../../PxShared/src/foundation/include/PsSort.h",
                          0x41);
    local_90 = puVar6;
  }
  local_90 = puVar6;
  if (0 < param_2 + -1) {
    uVar30 = 0;
    uVar9 = 0;
    iVar13 = 0;
    local_b8 = param_1 + 0x38;
    __src = puVar6;
    puVar10 = puVar6;
    puVar11 = puVar6;
    __src_00 = puVar6;
    puVar26 = puVar6;
    iVar25 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_00174fe0;
LAB_00175698:
    iVar29 = (int)uVar30;
    if (iVar29 != 0) {
      uVar30 = (ulong)(iVar29 - 2);
      iVar13 = *(int *)(puVar10 + uVar30 * 4);
      __src = puVar6;
      iVar25 = *(int *)(puVar10 + (ulong)(iVar29 - 1) * 4);
      if (iVar13 < *(int *)(puVar10 + (ulong)(iVar29 - 1) * 4)) {
LAB_00174fe0:
        puVar6 = __src;
        if (4 < (uint)(iVar25 - iVar13)) {
          uVar28 = iVar25 + iVar13;
          if ((int)uVar28 < 0) {
            uVar28 = uVar28 + 1;
          }
          puVar2 = (undefined8 *)(param_1 + (long)iVar13 * 0x20);
          puVar12 = (undefined8 *)(param_1 + ((long)((ulong)uVar28 << 0x20) >> 0x21) * 0x20);
          plVar7 = puVar12 + 3;
          lVar20 = puVar2[3];
          uVar28 = *(uint *)(*plVar7 + 0x60);
          uVar19 = *(uint *)(lVar20 + 0x60);
          if ((uVar28 < uVar19) ||
             ((uVar28 == uVar19 &&
              (uVar19 = uVar28, *(uint *)(*plVar7 + 100) < *(uint *)(lVar20 + 100))))) {
            uVar15 = puVar2[3];
            uVar16 = puVar2[2];
            uVar17 = puVar2[1];
            uVar18 = *puVar2;
            puVar2[3] = puVar12[3];
            puVar2[2] = puVar12[2];
            puVar2[1] = puVar12[1];
            *puVar2 = *puVar12;
            puVar12[3] = uVar15;
            puVar12[2] = uVar16;
            puVar12[1] = uVar17;
            *puVar12 = uVar18;
            lVar20 = puVar2[3];
            uVar19 = *(uint *)(lVar20 + 0x60);
          }
          puVar22 = (undefined8 *)(param_1 + (long)iVar25 * 0x20);
          lVar23 = puVar22[3];
          uVar28 = *(uint *)(lVar23 + 0x60);
          if (uVar28 < uVar19) {
LAB_001750d8:
            uVar15 = puVar2[3];
            uVar16 = puVar2[2];
            uVar17 = puVar2[1];
            uVar18 = *puVar2;
            puVar2[3] = puVar22[3];
            puVar2[2] = puVar22[2];
            puVar2[1] = puVar22[1];
            *puVar2 = *puVar22;
            puVar22[3] = uVar15;
            puVar22[2] = uVar16;
            puVar22[1] = uVar17;
            *puVar22 = uVar18;
            lVar23 = puVar22[3];
            uVar19 = *(uint *)(lVar23 + 0x60);
LAB_00175140:
            lVar20 = *plVar7;
            bVar5 = uVar19 == *(uint *)(lVar20 + 0x60);
            if (uVar19 < *(uint *)(lVar20 + 0x60)) goto LAB_0017517c;
LAB_00175150:
            if ((bVar5) && (*(uint *)(lVar23 + 100) < *(uint *)(lVar20 + 100))) goto LAB_0017517c;
          }
          else {
            if (uVar28 == uVar19) {
              if (*(uint *)(lVar23 + 100) < *(uint *)(lVar20 + 100)) goto LAB_001750d8;
              goto LAB_00175140;
            }
            lVar20 = *plVar7;
            bVar5 = uVar28 == *(uint *)(lVar20 + 0x60);
            if (*(uint *)(lVar20 + 0x60) <= uVar28) goto LAB_00175150;
LAB_0017517c:
            uVar15 = puVar12[3];
            uVar16 = puVar12[2];
            uVar17 = puVar12[1];
            uVar18 = *puVar12;
            puVar12[3] = puVar22[3];
            puVar12[2] = puVar22[2];
            puVar12[1] = puVar22[1];
            *puVar12 = *puVar22;
            puVar22[3] = uVar15;
            puVar22[2] = uVar16;
            puVar22[1] = uVar17;
            *puVar22 = uVar18;
          }
          uVar14 = (long)iVar25 - 1;
          lVar20 = puVar12[3];
          puVar2 = (undefined8 *)(param_1 + uVar14 * 0x20);
          uVar15 = puVar12[2];
          uVar16 = puVar12[1];
          uVar17 = *puVar12;
          plVar7 = puVar2 + 3;
          puVar12[3] = *plVar7;
          puVar12[2] = puVar2[2];
          puVar12[1] = puVar2[1];
          *puVar12 = *puVar2;
          *plVar7 = lVar20;
          puVar2[2] = uVar15;
          puVar2[1] = uVar16;
          *puVar2 = uVar17;
          iVar29 = iVar13;
          while( true ) {
            lVar23 = *plVar7;
            uVar28 = *(uint *)(lVar23 + 0x60);
            puVar12 = (undefined8 *)(param_1 + 0x20 + (long)iVar29 * 0x20);
            lVar20 = puVar12[3];
            uVar19 = *(uint *)(lVar20 + 0x60);
            iVar27 = iVar29;
            if (uVar28 <= uVar19) goto LAB_001752ec;
            do {
              do {
                iVar27 = iVar27 + 1;
                puVar22 = puVar12 + 4;
                lVar20 = puVar12[7];
                uVar19 = *(uint *)(lVar20 + 0x60);
                puVar12 = puVar22;
              } while (uVar19 < uVar28);
LAB_001752ec:
            } while ((uVar19 == uVar28) && (*(uint *)(lVar20 + 100) < *(uint *)(lVar23 + 100)));
            puVar22 = (undefined8 *)(param_1 + -0x20 + (long)(int)uVar14 * 0x20);
            iVar29 = iVar27 + 1;
            while( true ) {
              uVar19 = *(uint *)(puVar22[3] + 0x60);
              uVar4 = (int)uVar14 - 1;
              uVar14 = (ulong)uVar4;
              if ((uVar19 <= uVar28) &&
                 ((uVar28 != uVar19 || (*(uint *)(puVar22[3] + 100) <= *(uint *)(lVar23 + 100)))))
              break;
              puVar22 = puVar22 + -4;
            }
            if ((int)uVar4 <= iVar29) break;
            uVar15 = puVar12[3];
            uVar16 = puVar12[2];
            uVar17 = puVar12[1];
            uVar18 = *puVar12;
            puVar12[3] = puVar22[3];
            puVar12[2] = puVar22[2];
            puVar12[1] = puVar22[1];
            *puVar12 = *puVar22;
            puVar22[3] = uVar15;
            puVar22[2] = uVar16;
            puVar22[1] = uVar17;
            *puVar22 = uVar18;
          }
          local_68 = puVar12[3];
          local_70 = puVar12[2];
          local_78 = puVar12[1];
          local_80 = *puVar12;
          puVar12[3] = puVar2[3];
          puVar12[2] = puVar2[2];
          puVar12[1] = puVar2[1];
          *puVar12 = *puVar2;
          puVar2[3] = local_68;
          puVar2[2] = local_70;
          puVar2[1] = local_78;
          *puVar2 = local_80;
          uVar28 = (uint)uVar30;
          if ((iVar27 - iVar13) + 1 < (iVar25 + -1) - iVar27) {
            if (param_5 - 1 <= uVar28) {
              local_94 = param_5 << 1;
              if (local_94 == 0) {
                __src = (undefined1 *)0x0;
                local_b0 = puVar11;
                local_a4 = uVar9;
                local_a0 = puVar10;
              }
              else {
                local_b0 = puVar11;
                local_a4 = uVar9;
                local_a0 = puVar10;
                    /* try { // try from 001753e0 to 001754df has its CatchHandler @ 0017572c */
                plVar7 = (long *)FUN_00400d30();
                pcVar24 = *(code **)(*plVar7 + 0x10);
                plVar8 = (long *)FUN_00400d60();
                uVar14 = (**(code **)(*plVar8 + 0x28))();
                pcVar3 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsIndexedContactManager>::getName() [T = physx::PxsIndexedContactManager]"
                ;
                if ((uVar14 & 1) == 0) {
                  pcVar3 = "<allocation names disabled>";
                }
                __src = (undefined1 *)
                        (*pcVar24)(plVar7,(ulong)local_94 << 2,pcVar3,
                                   "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                   ,0x9b);
              }
              memcpy(__src,__src_00,(ulong)(uVar28 << 2));
              if ((local_a0 != (undefined1 *)0x0) && ((local_a4 & 0xff) != 0)) {
                    /* try { // try from 001754f4 to 00175507 has its CatchHandler @ 00175724 */
                plVar7 = (long *)FUN_00400d30();
                (**(code **)(*plVar7 + 0x18))(plVar7,__src_00);
              }
              uVar9 = 1;
              puVar10 = __src;
              puVar11 = __src;
              __src_00 = __src;
              puVar26 = __src;
              param_5 = local_94;
            }
            *(int *)(puVar10 + uVar30 * 4) = iVar13;
            *(int *)(puVar10 + (ulong)(uVar28 + 1) * 4) = iVar27;
            iVar13 = iVar27 + 2;
            uVar30 = (ulong)(uVar28 + 2);
            puVar6 = __src;
            if (iVar25 <= iVar13) goto LAB_00175698;
            goto LAB_00174fe0;
          }
          if (param_5 - 1 <= uVar28) {
            local_94 = param_5 << 1;
            if (local_94 == 0) {
              puVar6 = (undefined1 *)0x0;
              local_b0 = puVar11;
              local_a4 = uVar9;
              local_a0 = puVar10;
            }
            else {
              local_b0 = puVar11;
              local_a4 = uVar9;
              local_a0 = puVar10;
              plVar7 = (long *)FUN_00400d30();
              pcVar24 = *(code **)(*plVar7 + 0x10);
              plVar8 = (long *)FUN_00400d60();
              uVar14 = (**(code **)(*plVar8 + 0x28))();
              pcVar3 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsIndexedContactManager>::getName() [T = physx::PxsIndexedContactManager]"
              ;
              if ((uVar14 & 1) == 0) {
                pcVar3 = "<allocation names disabled>";
              }
              puVar6 = (undefined1 *)
                       (*pcVar24)(plVar7,(ulong)local_94 << 2,pcVar3,
                                  "./../../../../PxShared/src/foundation/include/PsSortInternals.h",
                                  0x9b);
            }
                    /* try { // try from 0017552c to 00175537 has its CatchHandler @ 0017572c */
            memcpy(puVar6,__src,(ulong)(uVar28 << 2));
            if ((local_a0 != (undefined1 *)0x0) && ((local_a4 & 0xff) != 0)) {
                    /* try { // try from 0017554c to 0017555f has its CatchHandler @ 00175724 */
              plVar7 = (long *)FUN_00400d30();
              (**(code **)(*plVar7 + 0x18))(plVar7,__src);
            }
            uVar9 = 1;
            puVar10 = puVar6;
            puVar11 = puVar6;
            __src_00 = puVar6;
            puVar26 = puVar6;
            param_5 = local_94;
          }
          *(int *)(puVar10 + uVar30 * 4) = iVar27 + 2;
          uVar30 = (ulong)(uVar28 + 2);
          *(int *)(puVar10 + (ulong)(uVar28 + 1) * 4) = iVar25;
          __src = puVar6;
          iVar25 = iVar27;
          if (iVar27 <= iVar13) goto LAB_00175698;
          goto LAB_00174fe0;
        }
        plVar7 = (long *)(local_b8 + (long)iVar13 * 0x20);
        uVar14 = (long)iVar13;
        do {
          iVar13 = iVar13 + 1;
          lVar20 = 0;
          uVar1 = uVar14 + 1;
          uVar21 = uVar14 & 0xffffffff;
          plVar8 = plVar7;
          do {
            lVar23 = *(long *)(param_1 + (long)(int)uVar21 * 0x20 + 0x18);
            uVar28 = *(uint *)(*plVar8 + 0x60);
            uVar19 = *(uint *)(lVar23 + 0x60);
            if ((uVar28 < uVar19) ||
               ((uVar28 == uVar19 && (*(uint *)(*plVar8 + 100) < *(uint *)(lVar23 + 100))))) {
              uVar21 = (ulong)(uint)(iVar13 + (int)lVar20);
            }
            lVar20 = lVar20 + 1;
            plVar8 = plVar8 + 4;
          } while ((long)(uVar14 + lVar20) < (long)iVar25);
          if ((int)uVar21 != (int)uVar14) {
            puVar2 = (undefined8 *)(param_1 + (long)(int)uVar21 * 0x20);
            local_68 = puVar2[3];
            local_70 = puVar2[2];
            local_78 = puVar2[1];
            local_80 = *puVar2;
            puVar12 = (undefined8 *)(param_1 + uVar14 * 0x20);
            puVar2[3] = puVar12[3];
            puVar2[2] = puVar12[2];
            puVar2[1] = puVar12[1];
            *puVar2 = *puVar12;
            puVar12[3] = local_68;
            puVar12[2] = local_70;
            puVar12[1] = local_78;
            *puVar12 = local_80;
          }
          plVar7 = plVar7 + 4;
          uVar14 = uVar1;
        } while (uVar1 != (long)iVar25);
      }
      goto LAB_00175698;
    }
    if ((puVar26 != (undefined1 *)0x0) && (uVar9 != 0)) {
                    /* try { // try from 001756c4 to 001756d7 has its CatchHandler @ 0017570c */
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar26);
    }
  }
  if (local_88 != false) {
                    /* try { // try from 001756e4 to 001756eb has its CatchHandler @ 00175710 */
    FUN_00401ce0(&local_90,local_90);
  }
  return;
}


