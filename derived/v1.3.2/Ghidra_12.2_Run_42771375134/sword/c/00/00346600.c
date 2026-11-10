/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00346600; name: FUN_00346600
 */


undefined4 * FUN_00346600(ulong *param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  code *pcVar12;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    puVar7 = (undefined4 *)0x0;
    uVar2 = (uint)param_1[1];
    uVar6 = (ulong)uVar2;
    puVar8 = (undefined4 *)(uVar6 * 0xc);
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar12 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxVec3>::getName() [T = physx::PxVec3]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar7 = (undefined4 *)
             (*pcVar12)(plVar4,(ulong)uVar3 * 0xc,pcVar1,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar2 = (uint)param_1[1];
    uVar6 = (ulong)uVar2;
    puVar8 = puVar7 + uVar6 * 3;
  }
  if (uVar2 != 0) {
    puVar9 = (undefined4 *)*param_1;
    puVar10 = puVar7;
    do {
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10[2] = puVar9[2];
      puVar10 = puVar10 + 3;
      puVar9 = puVar9 + 3;
    } while (puVar10 < puVar8);
  }
  *puVar8 = *param_2;
  puVar7[uVar6 * 3 + 1] = param_2[1];
  puVar7[uVar6 * 3 + 2] = param_2[2];
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar11 = *param_1, uVar11 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar11);
    uVar6 = (ulong)(uint)param_1[1];
    puVar8 = puVar7 + uVar6 * 3;
  }
  *param_1 = (ulong)puVar7;
  *(int *)(param_1 + 1) = (int)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return puVar8;
}


