/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c46d0; name: FUN_003c46d0
 */


void FUN_003c46d0(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  ulong uVar1;
  char *pcVar2;
  void *__dest;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  void *pvVar24;
  int iVar25;
  void *pvVar26;
  int iVar27;
  code *pcVar28;
  uint uVar29;
  ulong uVar30;
  long local_a0;
  void *local_98;
  uint local_90;
  uint local_8c;
  void *local_88;
  bool local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = param_5 * 4;
  local_80 = 0x400 < uVar7;
  if (uVar7 < 0x401) {
    __dest = (void *)((long)&local_a0 - ((ulong)uVar7 + 0xf & 0x1fffffff0));
    local_88 = __dest;
  }
  else {
                    /* try { // try from 003c4718 to 003c472f has its CatchHandler @ 003c4d34 */
    __dest = (void *)FUN_00401b30(&local_78,uVar7,
                                  "./../../../../PxShared/src/foundation/include/PsSort.h",0x41);
    local_88 = __dest;
  }
  local_88 = __dest;
  if (0 < param_2 + -1) {
    uVar30 = 0;
    uVar7 = 0;
    iVar12 = 0;
    local_a0 = param_1 + 0x28;
    pvVar5 = __dest;
    pvVar24 = __dest;
    pvVar6 = __dest;
    pvVar26 = __dest;
    iVar25 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_003c47c0;
LAB_003c4cb8:
    iVar12 = (int)uVar30;
    if (iVar12 != 0) {
      uVar30 = (ulong)(iVar12 - 2);
      iVar25 = *(int *)((long)pvVar24 + (ulong)(iVar12 - 1) * 4);
      iVar12 = *(int *)((long)pvVar24 + uVar30 * 4);
      if (iVar12 < iVar25) {
LAB_003c47c0:
        if (4 < (uint)(iVar25 - iVar12)) {
          iVar19 = iVar25 + iVar12;
          if (iVar19 < 0) {
            iVar19 = iVar19 + 1;
          }
          puVar8 = (undefined8 *)(param_1 + (long)(iVar19 >> 1) * 0x18);
          puVar9 = (undefined8 *)(param_1 + (long)iVar12 * 0x18);
          uVar29 = *(uint *)(puVar9 + 2);
          if (uVar29 < *(uint *)(puVar8 + 2)) {
            uVar14 = puVar9[2];
            uVar15 = puVar9[1];
            uVar16 = *puVar9;
            puVar9[2] = puVar8[2];
            puVar9[1] = puVar8[1];
            *puVar9 = *puVar8;
            puVar8[2] = uVar14;
            puVar8[1] = uVar15;
            *puVar8 = uVar16;
            uVar29 = *(uint *)(puVar9 + 2);
          }
          puVar13 = (undefined8 *)(param_1 + (long)iVar25 * 0x18);
          uVar21 = *(uint *)(puVar13 + 2);
          if (uVar29 < uVar21) {
            uVar14 = puVar9[2];
            uVar15 = puVar9[1];
            uVar16 = *puVar9;
            puVar9[2] = puVar13[2];
            puVar9[1] = puVar13[1];
            *puVar9 = *puVar13;
            puVar13[2] = uVar14;
            puVar13[1] = uVar15;
            *puVar13 = uVar16;
            uVar21 = *(uint *)(puVar13 + 2);
          }
          if (*(uint *)(puVar8 + 2) < uVar21) {
            uVar14 = puVar8[2];
            uVar15 = puVar8[1];
            uVar16 = *puVar8;
            puVar8[2] = puVar13[2];
            puVar8[1] = puVar13[1];
            *puVar8 = *puVar13;
            puVar13[2] = uVar14;
            puVar13[1] = uVar15;
            *puVar13 = uVar16;
          }
          uVar14 = puVar8[2];
          uVar15 = puVar8[1];
          uVar10 = (long)iVar25 - 1;
          puVar9 = (undefined8 *)(param_1 + uVar10 * 0x18);
          uVar16 = *puVar8;
          puVar11 = (uint *)(puVar9 + 2);
          puVar8[2] = *(undefined8 *)puVar11;
          puVar8[1] = puVar9[1];
          *puVar8 = *puVar9;
          *(undefined8 *)puVar11 = uVar14;
          puVar9[1] = uVar15;
          *puVar9 = uVar16;
          iVar19 = iVar12;
          while( true ) {
            puVar8 = (undefined8 *)(param_1 + (long)iVar19 * 0x18);
            do {
              iVar27 = iVar19;
              puVar13 = puVar8;
              iVar19 = iVar27 + 1;
              puVar8 = puVar13 + 3;
            } while (*puVar11 < *(uint *)(puVar13 + 5));
            puVar18 = (undefined8 *)(param_1 + (long)(int)uVar10 * 0x18);
            do {
              puVar17 = puVar18;
              puVar18 = puVar17 + -3;
              uVar29 = (int)uVar10 - 1;
              uVar10 = (ulong)uVar29;
            } while (*(uint *)(puVar17 + -1) < *puVar11);
            if ((int)uVar29 <= iVar19) break;
            uVar14 = puVar13[5];
            uVar15 = puVar13[4];
            uVar16 = *puVar8;
            puVar13[5] = puVar17[-1];
            puVar13[4] = puVar17[-2];
            *puVar8 = *puVar18;
            puVar17[-1] = uVar14;
            puVar17[-2] = uVar15;
            *puVar18 = uVar16;
          }
          local_68 = puVar13[5];
          local_70 = puVar13[4];
          local_78 = *puVar8;
          puVar13[5] = puVar9[2];
          puVar13[4] = puVar9[1];
          *puVar8 = *puVar9;
          puVar9[2] = local_68;
          puVar9[1] = local_70;
          *puVar9 = local_78;
          uVar29 = (uint)uVar30;
          if (iVar19 - iVar12 < iVar25 - iVar19) {
            if (param_5 - 1 <= uVar29) {
              local_8c = param_5 << 1;
              if (local_8c == 0) {
                pvVar5 = (void *)0x0;
                local_98 = __dest;
                local_90 = uVar7;
              }
              else {
                local_98 = __dest;
                local_90 = uVar7;
                    /* try { // try from 003c4a54 to 003c4b4b has its CatchHandler @ 003c4d4c */
                plVar3 = (long *)FUN_00400d30();
                pcVar28 = *(code **)(*plVar3 + 0x10);
                plVar4 = (long *)FUN_00400d60();
                uVar10 = (**(code **)(*plVar4 + 0x28))();
                pcVar2 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::BodyRank>::getName() [T = physx::Sc::BodyRank]"
                ;
                if ((uVar10 & 1) == 0) {
                  pcVar2 = "<allocation names disabled>";
                }
                pvVar5 = (void *)(*pcVar28)(plVar3,(ulong)local_8c << 2,pcVar2,
                                            "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                            ,0x9b);
              }
              __dest = pvVar5;
              memcpy(__dest,pvVar6,(ulong)(uVar29 << 2));
              if ((pvVar24 != (void *)0x0) && ((local_90 & 0xff) != 0)) {
                    /* try { // try from 003c4b5c to 003c4b6f has its CatchHandler @ 003c4d44 */
                plVar3 = (long *)FUN_00400d30();
                (**(code **)(*plVar3 + 0x18))(plVar3,pvVar6);
              }
              uVar7 = 1;
              pvVar5 = __dest;
              pvVar24 = __dest;
              pvVar6 = __dest;
              pvVar26 = __dest;
              param_5 = local_8c;
            }
            *(int *)((long)pvVar24 + uVar30 * 4) = iVar12;
            iVar12 = iVar27 + 2;
            *(int *)((long)pvVar24 + (ulong)(uVar29 + 1) * 4) = iVar27;
            uVar30 = (ulong)(uVar29 + 2);
            if (iVar25 <= iVar12) goto LAB_003c4cb8;
            goto LAB_003c47c0;
          }
          if (param_5 - 1 <= uVar29) {
            local_8c = param_5 << 1;
            if (local_8c == 0) {
              pvVar6 = (void *)0x0;
              local_98 = __dest;
              local_90 = uVar7;
            }
            else {
              local_98 = __dest;
              local_90 = uVar7;
              plVar3 = (long *)FUN_00400d30();
              pcVar28 = *(code **)(*plVar3 + 0x10);
              plVar4 = (long *)FUN_00400d60();
              uVar10 = (**(code **)(*plVar4 + 0x28))();
              pcVar2 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::BodyRank>::getName() [T = physx::Sc::BodyRank]"
              ;
              if ((uVar10 & 1) == 0) {
                pcVar2 = "<allocation names disabled>";
              }
              pvVar6 = (void *)(*pcVar28)(plVar3,(ulong)local_8c << 2,pcVar2,
                                          "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                          ,0x9b);
            }
            __dest = pvVar6;
                    /* try { // try from 003c4b94 to 003c4b9f has its CatchHandler @ 003c4d4c */
            memcpy(__dest,pvVar5,(ulong)(uVar29 << 2));
            if ((pvVar24 != (void *)0x0) && ((local_90 & 0xff) != 0)) {
                    /* try { // try from 003c4bb0 to 003c4bc3 has its CatchHandler @ 003c4d44 */
              plVar3 = (long *)FUN_00400d30();
              (**(code **)(*plVar3 + 0x18))(plVar3,pvVar5);
            }
            uVar7 = 1;
            pvVar5 = __dest;
            pvVar24 = __dest;
            pvVar6 = __dest;
            pvVar26 = __dest;
            param_5 = local_8c;
          }
          *(int *)((long)pvVar24 + uVar30 * 4) = iVar27 + 2;
          uVar30 = (ulong)(uVar29 + 2);
          *(int *)((long)pvVar24 + (ulong)(uVar29 + 1) * 4) = iVar25;
          iVar25 = iVar27;
          if (iVar27 <= iVar12) goto LAB_003c4cb8;
          goto LAB_003c47c0;
        }
        puVar11 = (uint *)(local_a0 + (long)iVar12 * 0x18);
        uVar10 = (long)iVar12;
        do {
          iVar12 = iVar12 + 1;
          lVar20 = 0;
          uVar1 = uVar10 + 1;
          uVar22 = uVar10 & 0xffffffff;
          puVar23 = puVar11;
          do {
            iVar19 = (int)lVar20;
            lVar20 = lVar20 + 1;
            uVar29 = iVar12 + iVar19;
            if (*puVar23 <= *(uint *)(param_1 + (long)(int)(uint)uVar22 * 0x18 + 0x10)) {
              uVar29 = (uint)uVar22;
            }
            uVar22 = (ulong)uVar29;
            puVar23 = puVar23 + 6;
          } while ((long)(uVar10 + lVar20) < (long)iVar25);
          if (uVar29 != (uint)uVar10) {
            puVar9 = (undefined8 *)(param_1 + (long)(int)uVar29 * 0x18);
            local_68 = puVar9[2];
            local_70 = puVar9[1];
            puVar8 = (undefined8 *)(param_1 + uVar10 * 0x18);
            local_78 = *puVar9;
            puVar9[2] = puVar8[2];
            puVar9[1] = puVar8[1];
            *puVar9 = *puVar8;
            puVar8[2] = local_68;
            puVar8[1] = local_70;
            *puVar8 = local_78;
          }
          puVar11 = puVar11 + 6;
          uVar10 = uVar1;
        } while (uVar1 != (long)iVar25);
      }
      goto LAB_003c4cb8;
    }
    if ((pvVar26 != (void *)0x0) && (uVar7 != 0)) {
                    /* try { // try from 003c4ce4 to 003c4cf7 has its CatchHandler @ 003c4d2c */
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,pvVar26);
    }
  }
  if (local_80 != false) {
                    /* try { // try from 003c4d04 to 003c4d0b has its CatchHandler @ 003c4d30 */
    FUN_00401ce0(&local_88,local_88);
  }
  return;
}


