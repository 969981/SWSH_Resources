/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00175780; name: FUN_00175780
 */


void FUN_00175780(long param_1,int param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  code *pcVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  int iVar18;
  void *pvVar19;
  void *pvVar20;
  long local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  uint local_c0;
  uint local_bc;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  ulong local_a8;
  undefined1 *local_a0;
  bool local_98;
  undefined1 auStack_90 [48];
  
  uVar14 = param_5 * 4;
  local_98 = 0x400 < uVar14;
  if (uVar14 < 0x401) {
    puVar3 = auStack_90 + (-0x50 - ((ulong)uVar14 + 0xf & 0x1fffffff0));
    local_a0 = puVar3;
  }
  else {
                    /* try { // try from 001757c8 to 001757df has its CatchHandler @ 00175d5c */
    puVar3 = (undefined1 *)
             FUN_00401b30(auStack_90,uVar14,"./../../../../PxShared/src/foundation/include/PsSort.h"
                          ,0x41);
    local_a0 = puVar3;
  }
  local_a0 = puVar3;
  if (0 < param_2 + -1) {
    uVar14 = 0;
    local_c0 = 0;
    local_e0 = param_1 + 0x50;
    local_d8 = puVar3;
    local_d0 = puVar3;
    local_c8 = puVar3;
    puVar16 = puVar3;
    uVar17 = 0;
    iVar18 = param_2 + -1;
    if (0 < param_2 + -1) goto LAB_0017586c;
LAB_00175c28:
    if (uVar14 != 0) {
      while( true ) {
        uVar6 = uVar14 - 1;
        uVar14 = uVar14 - 2;
        uVar17 = (ulong)*(uint *)(puVar16 + (ulong)uVar14 * 4);
        iVar18 = *(int *)(puVar16 + (ulong)uVar6 * 4);
        if (*(int *)(puVar16 + (ulong)uVar6 * 4) <= (int)*(uint *)(puVar16 + (ulong)uVar14 * 4))
        break;
LAB_0017586c:
        while( true ) {
          iVar11 = (int)uVar17;
          local_b8 = puVar16;
          puStack_b0 = puVar3;
          if ((uint)(iVar18 - iVar11) < 5) break;
          iVar8 = iVar18 + iVar11;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 1;
          }
          pvVar19 = (void *)(param_1 + (long)(iVar8 >> 1) * 0x30);
          pvVar20 = (void *)(param_1 + (long)iVar11 * 0x30);
          uVar6 = *(uint *)(*(long *)((long)pvVar20 + 0x20) + 0x4c);
          local_bc = param_5;
          if (uVar6 < *(uint *)(*(long *)((long)pvVar19 + 0x20) + 0x4c)) {
            memcpy(auStack_90,pvVar20,0x30);
            memcpy(pvVar20,pvVar19,0x30);
            memcpy(pvVar19,auStack_90,0x30);
            uVar6 = *(uint *)(*(long *)((long)pvVar20 + 0x20) + 0x4c);
          }
          pvVar13 = (void *)(param_1 + (long)iVar18 * 0x30);
          uVar7 = *(uint *)(*(long *)((long)pvVar13 + 0x20) + 0x4c);
          if (uVar6 < uVar7) {
            memcpy(auStack_90,pvVar20,0x30);
            memcpy(pvVar20,pvVar13,0x30);
            memcpy(pvVar13,auStack_90,0x30);
            uVar7 = *(uint *)(*(long *)((long)pvVar13 + 0x20) + 0x4c);
          }
          if (*(uint *)(*(long *)((long)pvVar19 + 0x20) + 0x4c) < uVar7) {
            memcpy(auStack_90,pvVar19,0x30);
            memcpy(pvVar19,pvVar13,0x30);
            memcpy(pvVar13,auStack_90,0x30);
          }
          uVar15 = (long)iVar18 - 1;
          pvVar20 = (void *)(param_1 + uVar15 * 0x30);
          memcpy(auStack_90,pvVar19,0x30);
          memcpy(pvVar19,pvVar20,0x30);
          memcpy(pvVar20,auStack_90,0x30);
          local_a8 = uVar17;
          while( true ) {
            uVar6 = *(uint *)(*(long *)((long)pvVar20 + 0x20) + 0x4c);
            pvVar19 = (void *)(param_1 + (long)(int)uVar17 * 0x30);
            do {
              plVar4 = (long *)((long)pvVar19 + 0x50);
              pvVar19 = (void *)((long)pvVar19 + 0x30);
              iVar11 = (int)uVar17;
              uVar7 = iVar11 + 1;
              uVar17 = (ulong)uVar7;
            } while (uVar6 < *(uint *)(*plVar4 + 0x4c));
            pvVar13 = (void *)(param_1 + (long)(int)uVar15 * 0x30);
            do {
              plVar4 = (long *)((long)pvVar13 + -0x10);
              pvVar13 = (void *)((long)pvVar13 + -0x30);
              uVar2 = (int)uVar15 - 1;
              uVar15 = (ulong)uVar2;
            } while (*(uint *)(*plVar4 + 0x4c) < uVar6);
            if ((int)uVar2 <= (int)uVar7) break;
            memcpy(auStack_90,pvVar19,0x30);
            memcpy(pvVar19,pvVar13,0x30);
            memcpy(pvVar13,auStack_90,0x30);
          }
          memcpy(auStack_90,pvVar19,0x30);
          memcpy(pvVar19,pvVar20,0x30);
          memcpy(pvVar20,auStack_90,0x30);
          puVar16 = local_b8;
          puVar3 = puStack_b0;
          param_5 = local_bc;
          if ((int)(uVar7 - (int)local_a8) < (int)(iVar18 - uVar7)) {
            if (local_bc - 1 <= uVar14) {
              param_5 = local_bc << 1;
              if (param_5 == 0) {
                puVar3 = (undefined1 *)0x0;
              }
              else {
                    /* try { // try from 00175a94 to 00175b7b has its CatchHandler @ 00175d74 */
                plVar4 = (long *)FUN_00400d30();
                pcVar12 = *(code **)(*plVar4 + 0x10);
                plVar5 = (long *)FUN_00400d60();
                uVar17 = (**(code **)(*plVar5 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverConstraintDesc>::getName() [T = physx::PxSolverConstraintDesc]"
                ;
                if ((uVar17 & 1) == 0) {
                  pcVar1 = "<allocation names disabled>";
                }
                puVar3 = (undefined1 *)
                         (*pcVar12)(plVar4,(ulong)param_5 << 2,pcVar1,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
              memcpy(puVar3,local_d0,(ulong)(uVar14 << 2));
              if ((puVar16 != (undefined1 *)0x0) && ((local_c0 & 0xff) != 0)) {
                    /* try { // try from 00175b8c to 00175b9f has its CatchHandler @ 00175d6c */
                plVar4 = (long *)FUN_00400d30();
                (**(code **)(*plVar4 + 0x18))(plVar4,local_d0);
              }
              local_c8 = puVar3;
              local_c0 = 1;
              local_d8 = puVar3;
              local_d0 = puVar3;
              puVar16 = puVar3;
            }
            *(int *)(puVar16 + (ulong)uVar14 * 4) = (int)local_a8;
            *(int *)(puVar16 + (ulong)(uVar14 + 1) * 4) = iVar11;
            uVar14 = uVar14 + 2;
            uVar17 = (ulong)(iVar11 + 2U);
            if (iVar18 <= (int)(iVar11 + 2U)) goto LAB_00175c28;
          }
          else {
            if (local_bc - 1 <= uVar14) {
              param_5 = local_bc << 1;
              if (param_5 == 0) {
                puVar3 = (undefined1 *)0x0;
              }
              else {
                plVar4 = (long *)FUN_00400d30();
                pcVar12 = *(code **)(*plVar4 + 0x10);
                plVar5 = (long *)FUN_00400d60();
                uVar17 = (**(code **)(*plVar5 + 0x28))();
                pcVar1 = 
                "static const char *physx::shdfnd::ReflectionAllocator<physx::PxSolverConstraintDesc>::getName() [T = physx::PxSolverConstraintDesc]"
                ;
                if ((uVar17 & 1) == 0) {
                  pcVar1 = "<allocation names disabled>";
                }
                puVar3 = (undefined1 *)
                         (*pcVar12)(plVar4,(ulong)param_5 << 2,pcVar1,
                                    "./../../../../PxShared/src/foundation/include/PsSortInternals.h"
                                    ,0x9b);
              }
                    /* try { // try from 00175bc0 to 00175bcb has its CatchHandler @ 00175d74 */
              memcpy(puVar3,local_c8,(ulong)(uVar14 << 2));
              if ((puVar16 != (undefined1 *)0x0) && ((local_c0 & 0xff) != 0)) {
                    /* try { // try from 00175bdc to 00175bef has its CatchHandler @ 00175d6c */
                plVar4 = (long *)FUN_00400d30();
                (**(code **)(*plVar4 + 0x18))(plVar4,local_c8);
              }
              local_c8 = puVar3;
              local_c0 = 1;
              local_d8 = puVar3;
              local_d0 = puVar3;
              puVar16 = puVar3;
            }
            uVar6 = uVar14 + 1;
            *(int *)(puVar16 + (ulong)uVar14 * 4) = iVar11 + 2;
            uVar14 = uVar14 + 2;
            *(int *)(puVar16 + (ulong)uVar6 * 4) = iVar18;
            uVar17 = local_a8;
            iVar18 = iVar11;
            if (iVar11 <= (int)local_a8) goto LAB_00175c28;
          }
        }
        plVar4 = (long *)(local_e0 + (long)iVar11 * 0x30);
        uVar17 = (long)iVar11;
        do {
          iVar11 = iVar11 + 1;
          lVar9 = 0;
          uVar15 = uVar17 + 1;
          uVar10 = uVar17 & 0xffffffff;
          plVar5 = plVar4;
          do {
            iVar8 = (int)lVar9;
            lVar9 = lVar9 + 1;
            uVar6 = iVar11 + iVar8;
            if (*(uint *)(*plVar5 + 0x4c) <=
                *(uint *)(*(long *)(param_1 + (long)(int)(uint)uVar10 * 0x30 + 0x20) + 0x4c)) {
              uVar6 = (uint)uVar10;
            }
            uVar10 = (ulong)uVar6;
            plVar5 = plVar5 + 6;
          } while ((long)(uVar17 + lVar9) < (long)iVar18);
          if (uVar6 != (uint)uVar17) {
            pvVar19 = (void *)(param_1 + (long)(int)uVar6 * 0x30);
            pvVar20 = (void *)(param_1 + uVar17 * 0x30);
            memcpy(auStack_90,pvVar19,0x30);
            memcpy(pvVar19,pvVar20,0x30);
            memcpy(pvVar20,auStack_90,0x30);
          }
          plVar4 = plVar4 + 6;
          uVar17 = uVar15;
        } while (uVar15 != (long)iVar18);
        puVar3 = puStack_b0;
        puVar16 = local_b8;
        if (uVar14 == 0) goto LAB_00175cfc;
      }
      goto LAB_00175c28;
    }
LAB_00175cfc:
    if ((puVar3 != (undefined1 *)0x0) && ((local_c0 & 0xff) != 0)) {
                    /* try { // try from 00175d0c to 00175d1f has its CatchHandler @ 00175d54 */
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar3);
    }
  }
  if (local_98 != false) {
                    /* try { // try from 00175d2c to 00175d33 has its CatchHandler @ 00175d58 */
    FUN_00401ce0(&local_a0,local_a0);
  }
  return;
}


