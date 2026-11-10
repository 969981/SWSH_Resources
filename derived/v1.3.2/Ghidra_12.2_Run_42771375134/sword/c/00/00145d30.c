/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00145d30; name: FUN_00145d30
 */


void FUN_00145d30(long param_1,int param_2,undefined8 *param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  void *__src;
  int iVar2;
  undefined1 *__dest;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *__dest_00;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 auStack_120 [8];
  void *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  long local_f0;
  ulong uStack_e8;
  void *local_e0;
  long local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  uint local_bc;
  undefined8 *local_b8;
  long local_b0;
  undefined1 *local_a8;
  bool local_a0;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  
  uVar10 = param_5 * 4;
  local_b8 = param_3;
  local_b0 = param_1;
  local_a0 = 0x400 < uVar10;
  if (uVar10 < 0x401) {
    __dest = auStack_120 + -((ulong)uVar10 + 0xf & 0x1fffffff0);
    local_a8 = __dest;
  }
  else {
                    /* try { // try from 00145d78 to 00145d8f has its CatchHandler @ 001461c8 */
    __dest = (undefined1 *)
             FUN_00401b30(auStack_98,uVar10,
                          "./../../../../PxShared/src/foundation/include\\PsSort.h",0x41);
    local_a8 = __dest;
  }
  local_a8 = __dest;
  if (0 < param_2 + -1) {
    param_2 = param_2 + -1;
    local_e0 = (void *)((ulong)auStack_98 | 4);
    uVar10 = 0;
    iVar13 = 0;
    local_bc = 0;
    local_c8 = __dest;
    local_d8 = local_b0 + 0x50;
    local_d0 = __dest;
    puVar15 = __dest;
    puVar16 = __dest;
    if (param_2 < 1) goto LAB_00146018;
LAB_00145e20:
    uVar7 = uVar10 << 2;
    __dest_00 = __dest;
LAB_00145e24:
    do {
      if ((uint)(param_2 - iVar13) < 5) {
        lVar12 = local_d8 + (long)iVar13 * 0x50;
        uVar5 = (long)iVar13;
        local_f8 = __dest_00;
        do {
          iVar13 = iVar13 + 1;
          lVar14 = 0;
          uStack_e8 = uVar5 + 1;
          uVar9 = uVar5 & 0xffffffff;
          local_f0 = lVar12;
          do {
                    /* try { // try from 0014605c to 00146063 has its CatchHandler @ 001461d8 */
            uVar6 = (*(code *)*local_b8)(lVar12,local_b0 + (long)(int)(uint)uVar9 * 0x50);
            lVar11 = local_b0;
            __src = local_e0;
            iVar2 = (int)lVar14;
            lVar14 = lVar14 + 1;
            uVar7 = iVar13 + iVar2;
            if ((uVar6 & 1) == 0) {
              uVar7 = (uint)uVar9;
            }
            uVar9 = (ulong)uVar7;
            lVar12 = lVar12 + 0x50;
          } while ((long)(uVar5 + lVar14) < (long)param_2);
          if (uVar7 != (uint)uVar5) {
            lVar12 = local_b0 + (long)(int)uVar7 * 0x50;
            local_100 = *(undefined8 *)(lVar12 + 8);
            local_108 = *(undefined8 *)(lVar12 + 0x10);
            local_110 = *(undefined8 *)(lVar12 + 0x18);
            local_70 = *(undefined4 *)(lVar12 + 0x20);
            local_118 = (void *)(lVar12 + 0x28);
            memcpy(local_e0,local_118,0x24);
            lVar11 = lVar11 + uVar5 * 0x50;
            *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
            *(undefined8 *)(lVar12 + 8) = *(undefined8 *)(lVar11 + 8);
            *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
            *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
            memcpy(local_118,(void *)(lVar11 + 0x28),0x24);
            *(undefined8 *)(lVar11 + 8) = local_100;
            *(undefined8 *)(lVar11 + 0x10) = local_108;
            *(undefined8 *)(lVar11 + 0x18) = local_110;
            *(undefined4 *)(lVar11 + 0x20) = local_70;
            memcpy((void *)(lVar11 + 0x28),__src,0x24);
          }
          lVar12 = local_f0 + 0x50;
          uVar5 = uStack_e8;
        } while (uStack_e8 != (long)param_2);
        __dest = local_f8;
        if (uVar10 != 0) goto LAB_00145e08;
        goto LAB_00146168;
      }
                    /* try { // try from 00145e30 to 00145fdf has its CatchHandler @ 00146208 */
      iVar2 = FUN_00146240(local_b0,iVar13,param_2,local_b8);
      if (param_2 - iVar2 <= iVar2 - iVar13) goto LAB_00145ec4;
      __dest = __dest_00;
      if (param_5 - 1 <= uVar10) {
        param_5 = param_5 << 1;
        if (param_5 == 0) {
          __dest = (undefined1 *)0x0;
        }
        else {
          plVar3 = (long *)FUN_00400d30();
          pcVar8 = *(code **)(*plVar3 + 0x10);
          plVar4 = (long *)FUN_00400d60();
          uVar5 = (**(code **)(*plVar4 + 0x28))();
          pcVar1 = 
          "static const char *physx::shdfnd::ReflectionAllocator<physx::cloth::SwSolver::CpuClothSimulationTask>::getName() [T = physx::cloth::SwSolver::CpuClothSimulationTask]"
          ;
          if ((uVar5 & 1) == 0) {
            pcVar1 = "<allocation names disabled>";
          }
          __dest = (undefined1 *)
                   (*pcVar8)(plVar3,(ulong)param_5 << 2,pcVar1,
                             "./../../../../PxShared/src/foundation/include/PsSortInternals.h",0x9b)
          ;
        }
        memcpy(__dest,__dest_00,(ulong)uVar7);
        if ((puVar16 != (undefined1 *)0x0) && ((local_bc & 0xff) != 0)) {
          plVar3 = (long *)FUN_00400d30();
          (**(code **)(*plVar3 + 0x18))(plVar3,__dest_00);
        }
        local_bc = 1;
        local_d0 = __dest;
        local_c8 = __dest;
        puVar15 = __dest;
        puVar16 = __dest;
      }
      *(int *)(puVar16 + (ulong)uVar10 * 4) = iVar13;
      iVar13 = iVar2 + 1;
      *(int *)(puVar16 + (ulong)(uVar10 + 1) * 4) = iVar2 + -1;
      uVar10 = uVar10 + 2;
      uVar7 = uVar7 + 8;
      __dest_00 = __dest;
    } while (iVar13 < param_2);
    goto LAB_00146018;
  }
LAB_0014618c:
  if (local_a0 != false) {
                    /* try { // try from 00146198 to 0014619f has its CatchHandler @ 001461c4 */
    FUN_00401ce0(&local_a8,local_a8);
  }
  return;
LAB_00145ec4:
  if (param_5 - 1 <= uVar10) {
    param_5 = param_5 << 1;
    if (param_5 == 0) {
      __dest_00 = (undefined1 *)0x0;
    }
    else {
      plVar3 = (long *)FUN_00400d30();
      pcVar8 = *(code **)(*plVar3 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar5 = (**(code **)(*plVar4 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::cloth::SwSolver::CpuClothSimulationTask>::getName() [T = physx::cloth::SwSolver::CpuClothSimulationTask]"
      ;
      if ((uVar5 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      __dest_00 = (undefined1 *)
                  (*pcVar8)(plVar3,(ulong)param_5 << 2,pcVar1,
                            "./../../../../PxShared/src/foundation/include/PsSortInternals.h",0x9b);
    }
    memcpy(__dest_00,local_c8,(ulong)uVar7);
    if ((puVar16 != (undefined1 *)0x0) && ((local_bc & 0xff) != 0)) {
      plVar3 = (long *)FUN_00400d30();
      (**(code **)(*plVar3 + 0x18))(plVar3,local_c8);
    }
    local_bc = 1;
    local_d0 = __dest_00;
    local_c8 = __dest_00;
    puVar15 = __dest_00;
    puVar16 = __dest_00;
  }
  *(int *)(puVar16 + (ulong)uVar10 * 4) = iVar2 + 1;
  *(int *)(puVar16 + (ulong)(uVar10 + 1) * 4) = param_2;
  param_2 = iVar2 + -1;
  uVar10 = uVar10 + 2;
  uVar7 = uVar7 + 8;
  __dest = __dest_00;
  if (param_2 <= iVar13) goto LAB_00146018;
  goto LAB_00145e24;
LAB_00145e08:
  while( true ) {
    uVar7 = uVar10 - 1;
    uVar10 = uVar10 - 2;
    param_2 = *(int *)(puVar16 + (ulong)uVar7 * 4);
    iVar13 = *(int *)(puVar16 + (ulong)uVar10 * 4);
    if (iVar13 < param_2) break;
LAB_00146018:
    if (uVar10 == 0) goto LAB_00146168;
  }
  goto LAB_00145e20;
LAB_00146168:
  if ((puVar15 != (undefined1 *)0x0) && ((local_bc & 0xff) != 0)) {
                    /* try { // try from 00146178 to 0014618b has its CatchHandler @ 001461c0 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar15);
  }
  goto LAB_0014618c;
}


