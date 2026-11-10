/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00131550; name: FUN_00131550
 */


uint FUN_00131550(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  undefined8 local_68;
  undefined8 local_60;
  
  plVar3 = (long *)FUN_00400d30();
  pcVar11 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::Aggregate>::getName() [T = physx::Bp::Aggregate]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar6 = (*pcVar11)(plVar3,0x50,pcVar1,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                     ,0x728);
                    /* try { // try from 001315d0 to 001315db has its CatchHandler @ 001317a4 */
  FUN_0012fa00(uVar6,(ulong)param_2,param_5 & 1);
  uVar10 = *(uint *)(param_1 + 0x1e4);
  if (uVar10 == 0xffffffff) {
    uVar10 = *(uint *)(param_1 + 0x1f0);
    local_68 = uVar6;
    if ((*(uint *)(param_1 + 500) & 0x7fffffff) <= uVar10) {
      FUN_00134780(param_1 + 0x1e8,&local_68);
      iVar7 = *(int *)(param_1 + 0x290);
      uVar6 = local_68;
      goto joined_r0x00131778;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x1e8) + (ulong)uVar10 * 8) = uVar6;
    *(uint *)(param_1 + 0x1f0) = uVar10 + 1;
    iVar7 = *(int *)(param_1 + 0x290);
    if (iVar7 != 0) goto LAB_00131608;
LAB_0013177c:
    uVar12 = *(int *)(param_1 + 0x280) << 2 | 3;
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
    if (param_2 + 1 < *(uint *)(param_1 + 0xb8)) goto LAB_00131694;
  }
  else {
    *(int *)(param_1 + 0x1e4) = (int)*(undefined8 *)(*(long *)(param_1 + 0x1e8) + (ulong)uVar10 * 8)
    ;
    *(undefined8 *)(*(long *)(param_1 + 0x1e8) + (ulong)uVar10 * 8) = uVar6;
    iVar7 = *(int *)(param_1 + 0x290);
joined_r0x00131778:
    local_68 = uVar6;
    if (iVar7 == 0) goto LAB_0013177c;
LAB_00131608:
    uVar12 = *(uint *)(*(long *)(param_1 + 0x288) + (ulong)(iVar7 - 1U) * 4);
    *(uint *)(param_1 + 0x290) = iVar7 - 1U;
    if (param_2 + 1 < *(uint *)(param_1 + 0xb8)) goto LAB_00131694;
  }
  uVar2 = param_2 + 1 | param_2 + 1 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  iVar7 = (uVar2 | uVar2 >> 0x10) + 1;
  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
  FUN_0012ff00(param_1 + 0x90,iVar7,&local_60);
  local_60 = 0;
  FUN_0012ffe0(param_1 + 0xb0,iVar7,&local_60);
  FUN_00130120(*(undefined8 *)(param_1 + 0xa8),iVar7);
  FUN_00190b50(param_1 + 0x50,iVar7);
  FUN_00190b50(param_1 + 0x60,iVar7);
LAB_00131694:
  uVar2 = *(uint *)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d8) <= param_2 + 1) {
    uVar2 = param_2 + 1;
  }
  *(uint *)(param_1 + 0x1d8) = uVar2;
  lVar8 = (ulong)param_2 * 4;
  *(uint *)(*(long *)(param_1 + 0x98) + lVar8) = uVar12;
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0xa8) + 8) + lVar8) = 0;
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)param_2 * 0x10);
  *(uint *)(puVar9 + 1) = uVar10 << 1 | 1;
  *puVar9 = param_4;
  lVar8 = *(long *)(param_1 + 0x120);
  puVar9 = (undefined8 *)(*(long *)(lVar8 + 8) + (ulong)param_2 * 0x18);
  *puVar9 = 0x7e7fffff7e7fffff;
  puVar9[1] = 0xfe7fffff7e7fffff;
  puVar9[2] = 0xfe7ffffffe7fffff;
  *(undefined1 *)(lVar8 + 0x18) = 1;
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  return uVar10;
}


