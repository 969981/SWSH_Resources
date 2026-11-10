/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d85d0; name: FUN_003d85d0
 */


long FUN_003d85d0(ulong *param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  
  uVar2 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    puVar7 = (undefined8 *)0x0;
    uVar3 = (uint)param_1[1];
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::TriggerPairExtraData>::getName() [T = physx::Sc::TriggerPairExtraData]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar7 = (undefined8 *)
             (*pcVar11)(plVar4,(ulong)uVar2 * 0xc,pcVar1,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = (uint)param_1[1];
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar7;
    do {
      *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
      puVar10 = (undefined8 *)((long)puVar9 + 0xc);
      *puVar9 = *puVar8;
      puVar8 = (undefined8 *)((long)puVar8 + 0xc);
      puVar9 = puVar10;
    } while (puVar10 < (undefined8 *)((long)puVar7 + (ulong)uVar3 * 0xc));
    uVar6 = (ulong)(uint)param_1[1];
  }
  puVar8 = (undefined8 *)((long)puVar7 + uVar6 * 0xc);
  *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar8 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar6 = *param_1, uVar6 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
  }
  uVar6 = param_1[1];
  *param_1 = (ulong)puVar7;
  *(uint *)(param_1 + 1) = (uint)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return (long)puVar7 + (ulong)(uint)uVar6 * 0xc;
}


