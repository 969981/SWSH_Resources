/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bd230; name: FUN_003bd230
 */


undefined4 * FUN_003bd230(ulong *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  code *pcVar11;
  
  uVar2 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    puVar6 = (undefined4 *)0x0;
    uVar8 = (uint)param_1[1];
    puVar7 = (undefined4 *)((ulong)uVar8 << 5);
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::SpatialVector>::getName() [T = physx::Cm::SpatialVector]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar6 = (undefined4 *)
             (*pcVar11)(plVar3,(ulong)uVar2 << 5,pcVar1,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar8 = (uint)param_1[1];
    puVar7 = puVar6 + (ulong)uVar8 * 8;
  }
  if (uVar8 != 0) {
    puVar9 = (undefined4 *)*param_1;
    puVar10 = puVar6;
    do {
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10[2] = puVar9[2];
      puVar10[3] = puVar9[3];
      puVar10[4] = puVar9[4];
      puVar10[5] = puVar9[5];
      puVar10[6] = puVar9[6];
      puVar10[7] = puVar9[7];
      puVar10 = puVar10 + 8;
      puVar9 = puVar9 + 8;
    } while (puVar10 < puVar7);
  }
  *puVar7 = *param_2;
  puVar7[1] = param_2[1];
  puVar7[2] = param_2[2];
  puVar7[3] = param_2[3];
  puVar7[4] = param_2[4];
  puVar7[5] = param_2[5];
  puVar7[6] = param_2[6];
  puVar7[7] = param_2[7];
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar5 = *param_1, uVar5 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
    uVar8 = (uint)param_1[1];
    puVar7 = puVar6 + (ulong)uVar8 * 8;
  }
  *param_1 = (ulong)puVar6;
  *(uint *)(param_1 + 1) = uVar8 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar7;
}


