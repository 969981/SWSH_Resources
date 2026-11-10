/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f1c40; name: FUN_003f1c40
 */


void FUN_003f1c40(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  void *__dest;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar15;
  ulong *puVar14;
  ulong uVar16;
  int iVar17;
  long lVar18;
  void *pvVar19;
  int iVar20;
  void *pvVar21;
  int iVar22;
  code *pcVar23;
  uint uVar24;
  ulong uVar25;
  long local_a0;
  void *local_98;
  uint local_90;
  uint local_8c;
  void *local_88;
  bool local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  uVar6 = param_5 * 4;
  local_80 = 0x400 < uVar6;
  if (uVar6 < 0x401) {
    __dest = (void *)((long)&local_a0 - ((ulong)uVar6 + 0xf & 0x1fffffff0));
    local_88 = __dest;
  }
  else {
                    /* try { // try from 003f1c88 to 003f1c9f has its CatchHandler @ 003f2298 */
    __dest = (void *)FUN_00401b30(&local_78,uVar6,
                                  "./../../../../PxShared/src/foundation/include/PsSort.h",0x41);
    local_88 = __dest;
  }
  local_88 = __dest;
  if (0 < param_2 + -1) {
    uVar25 = 0;
    uVar6 = 0;
    iVar10 = 0;
    local_a0 = param_1 + 0x18;
    pvVar4 = __dest;
    pvVar19 = __dest;
    pvVar5 = __dest;
    pvVar21 = __dest;
    iVar20 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_003f1d30;
LAB_003f221c:
    iVar10 = (int)uVar25;
    if (iVar10 != 0) {
      uVar25 = (ulong)(iVar10 - 2);
      iVar20 = *(int *)((long)pvVar19 + (ulong)(iVar10 - 1) * 4);
      iVar10 = *(int *)((long)pvVar19 + uVar25 * 4);
      if (iVar10 < iVar20) {
LAB_003f1d30:
        if (4 < (uint)(iVar20 - iVar10)) {
          iVar17 = iVar20 + iVar10;
          if (iVar17 < 0) {
            iVar17 = iVar17 + 1;
          }
          puVar7 = (ulong *)(param_1 + (long)(iVar17 >> 1) * 0x18);
          puVar9 = (ulong *)(param_1 + (long)iVar10 * 0x18);
          if (*puVar7 < *puVar9) {
            uVar16 = puVar9[2];
            uVar11 = puVar9[1];
            uVar12 = *puVar9;
            *(int *)(puVar9 + 2) = (int)puVar7[2];
            puVar9[1] = puVar7[1];
            *puVar9 = *puVar7;
            local_68._0_4_ = (undefined4)uVar16;
            *(undefined4 *)(puVar7 + 2) = (undefined4)local_68;
            puVar7[1] = uVar11;
            *puVar7 = uVar12;
            puVar8 = (ulong *)(param_1 + (long)iVar20 * 0x18);
            uVar16 = *puVar8;
            if (uVar16 < *puVar9) goto LAB_003f1fb8;
LAB_003f1d74:
            if (uVar16 < *puVar7) {
LAB_003f1d84:
              uVar16 = puVar7[2];
              uVar11 = puVar7[1];
              uVar12 = *puVar7;
              *(int *)(puVar7 + 2) = (int)puVar8[2];
              puVar7[1] = puVar8[1];
              *puVar7 = *puVar8;
              local_68._0_4_ = (undefined4)uVar16;
              *(undefined4 *)(puVar8 + 2) = (undefined4)local_68;
              puVar8[1] = uVar11;
              *puVar8 = uVar12;
            }
          }
          else {
            puVar8 = (ulong *)(param_1 + (long)iVar20 * 0x18);
            uVar16 = *puVar8;
            if (*puVar9 <= uVar16) goto LAB_003f1d74;
LAB_003f1fb8:
            uVar16 = puVar9[2];
            uVar11 = puVar9[1];
            uVar12 = *puVar9;
            *(int *)(puVar9 + 2) = (int)puVar8[2];
            puVar9[1] = puVar8[1];
            *puVar9 = *puVar8;
            local_68._0_4_ = (undefined4)uVar16;
            *(undefined4 *)(puVar8 + 2) = (undefined4)local_68;
            puVar8[1] = uVar11;
            *puVar8 = uVar12;
            if (uVar12 < *puVar7) goto LAB_003f1d84;
          }
          uVar11 = puVar7[2];
          uVar12 = puVar7[1];
          uVar16 = (long)iVar20 - 1;
          puVar9 = (ulong *)(param_1 + uVar16 * 0x18);
          uVar13 = *puVar7;
          *(int *)(puVar7 + 2) = (int)puVar9[2];
          puVar7[1] = puVar9[1];
          *puVar7 = *puVar9;
          local_68._0_4_ = (undefined4)uVar11;
          *(undefined4 *)(puVar9 + 2) = (undefined4)local_68;
          puVar9[1] = uVar12;
          *puVar9 = uVar13;
          iVar17 = iVar10;
          while( true ) {
            puVar7 = (ulong *)(param_1 + (long)iVar17 * 0x18);
            do {
              iVar22 = iVar17;
              puVar8 = puVar7;
              puVar7 = puVar8 + 3;
              iVar17 = iVar22 + 1;
            } while (*puVar7 < *puVar9);
            puVar14 = (ulong *)(param_1 + (long)(int)uVar16 * 0x18);
            do {
              puVar15 = puVar14;
              puVar14 = puVar15 + -3;
              uVar24 = (int)uVar16 - 1;
              uVar16 = (ulong)uVar24;
            } while (*puVar9 < *puVar14);
            local_68 = puVar8[5];
            uVar11 = local_68;
            local_70 = puVar8[4];
            local_78 = *puVar7;
            local_68._0_4_ = (undefined4)puVar8[5];
            if ((int)uVar24 <= iVar17) break;
            *(int *)(puVar8 + 5) = (int)puVar15[-1];
            puVar8[4] = puVar15[-2];
            *puVar7 = *puVar14;
            *puVar14 = local_78;
            puVar15[-2] = local_70;
            *(undefined4 *)(puVar15 + -1) = (undefined4)local_68;
          }
          *(int *)(puVar8 + 5) = (int)puVar9[2];
          puVar8[4] = puVar9[1];
          *puVar7 = *puVar9;
          *puVar9 = local_78;
          puVar9[1] = local_70;
          *(undefined4 *)(puVar9 + 2) = (undefined4)local_68;
          uVar24 = (uint)uVar25;
          local_68 = uVar11;
          if (iVar17 - iVar10 < iVar20 - iVar17) {
            if (param_5 - 1 <= uVar24) {
              local_8c = param_5 << 1;
              if (local_8c == 0) {
                pvVar4 = (void *)0x0;
                local_98 = __dest;
                local_90 = uVar6;
              }
              else {
                local_98 = __dest;
                local_90 = uVar6;
                    /* try { // try from 003f1efc to 003f20af has its CatchHandler @ 003f22b0 */
                plVar2 = (long *)FUN_00400d30();
                pcVar23 = *(code **)(*plVar2 + 0x10);
                plVar3 = (long *)FUN_00400d60();
                uVar16 = (**(code **)(*plVar3 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::PreallocatingRegion>::getName() [T = physx::Cm::PreallocatingRegion]"
                ;
                if ((uVar16 & 1) == 0) {
                  pcVar1 = "<allocation names disabled>";
                }
                pvVar4 = (void *)(*pcVar23)(plVar2,(ulong)local_8c << 2,pcVar1,
                                            "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                            ,0x9b);
              }
              __dest = pvVar4;
              memcpy(__dest,pvVar5,(ulong)(uVar24 << 2));
              if ((pvVar19 != (void *)0x0) && ((local_90 & 0xff) != 0)) {
                    /* try { // try from 003f20c0 to 003f20d3 has its CatchHandler @ 003f22a8 */
                plVar2 = (long *)FUN_00400d30();
                (**(code **)(*plVar2 + 0x18))(plVar2,pvVar5);
              }
              uVar6 = 1;
              pvVar4 = __dest;
              pvVar19 = __dest;
              pvVar5 = __dest;
              pvVar21 = __dest;
              param_5 = local_8c;
            }
            *(int *)((long)pvVar19 + uVar25 * 4) = iVar10;
            iVar10 = iVar22 + 2;
            *(int *)((long)pvVar19 + (ulong)(uVar24 + 1) * 4) = iVar22;
            uVar25 = (ulong)(uVar24 + 2);
            if (iVar20 <= iVar10) goto LAB_003f221c;
            goto LAB_003f1d30;
          }
          if (param_5 - 1 <= uVar24) {
            local_8c = param_5 << 1;
            if (local_8c == 0) {
              pvVar5 = (void *)0x0;
              local_98 = __dest;
              local_90 = uVar6;
            }
            else {
              local_98 = __dest;
              local_90 = uVar6;
              plVar2 = (long *)FUN_00400d30();
              pcVar23 = *(code **)(*plVar2 + 0x10);
              plVar3 = (long *)FUN_00400d60();
              uVar16 = (**(code **)(*plVar3 + 0x28))();
              pcVar1 = 
              "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::PreallocatingRegion>::getName() [T = physx::Cm::PreallocatingRegion]"
              ;
              if ((uVar16 & 1) == 0) {
                pcVar1 = "<allocation names disabled>";
              }
              pvVar5 = (void *)(*pcVar23)(plVar2,(ulong)local_8c << 2,pcVar1,
                                          "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                          ,0x9b);
            }
            __dest = pvVar5;
                    /* try { // try from 003f20f8 to 003f2103 has its CatchHandler @ 003f22b0 */
            memcpy(__dest,pvVar4,(ulong)(uVar24 << 2));
            if ((pvVar19 != (void *)0x0) && ((local_90 & 0xff) != 0)) {
                    /* try { // try from 003f2114 to 003f2127 has its CatchHandler @ 003f22a8 */
              plVar2 = (long *)FUN_00400d30();
              (**(code **)(*plVar2 + 0x18))(plVar2,pvVar4);
            }
            uVar6 = 1;
            pvVar4 = __dest;
            pvVar19 = __dest;
            pvVar5 = __dest;
            pvVar21 = __dest;
            param_5 = local_8c;
          }
          *(int *)((long)pvVar19 + uVar25 * 4) = iVar22 + 2;
          uVar25 = (ulong)(uVar24 + 2);
          *(int *)((long)pvVar19 + (ulong)(uVar24 + 1) * 4) = iVar20;
          iVar20 = iVar22;
          if (iVar22 <= iVar10) goto LAB_003f221c;
          goto LAB_003f1d30;
        }
        puVar7 = (ulong *)(local_a0 + (long)iVar10 * 0x18);
        uVar16 = (long)iVar10;
        do {
          iVar10 = iVar10 + 1;
          lVar18 = 0;
          uVar11 = uVar16 + 1;
          uVar12 = uVar16 & 0xffffffff;
          puVar9 = puVar7;
          do {
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 1;
            uVar24 = iVar10 + iVar17;
            if (*(ulong *)(param_1 + (long)(int)(uint)uVar12 * 0x18) <= *puVar9) {
              uVar24 = (uint)uVar12;
            }
            uVar12 = (ulong)uVar24;
            puVar9 = puVar9 + 3;
          } while ((long)(uVar16 + lVar18) < (long)iVar20);
          if (uVar24 != (uint)uVar16) {
            puVar8 = (ulong *)(param_1 + (long)(int)uVar24 * 0x18);
            local_68 = puVar8[2];
            uVar12 = local_68;
            local_70 = puVar8[1];
            puVar9 = (ulong *)(param_1 + uVar16 * 0x18);
            local_78 = *puVar8;
            *(int *)(puVar8 + 2) = (int)puVar9[2];
            puVar8[1] = puVar9[1];
            *puVar8 = *puVar9;
            *(undefined4 *)(puVar9 + 2) = (undefined4)local_68;
            puVar9[1] = local_70;
            *puVar9 = local_78;
            local_68 = uVar12;
          }
          puVar7 = puVar7 + 3;
          uVar16 = uVar11;
        } while (uVar11 != (long)iVar20);
      }
      goto LAB_003f221c;
    }
    if ((pvVar21 != (void *)0x0) && (uVar6 != 0)) {
                    /* try { // try from 003f2248 to 003f225b has its CatchHandler @ 003f2290 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,pvVar21);
    }
  }
  if (local_80 != false) {
                    /* try { // try from 003f2268 to 003f226f has its CatchHandler @ 003f2294 */
    FUN_00401ce0(&local_88,local_88);
  }
  return;
}


