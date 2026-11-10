/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ef370; name: FUN_003ef370
 */


undefined8 * FUN_003ef370(ulong *param_1,undefined8 *param_2)

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
  code *pcVar10;
  
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
    pcVar10 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxActiveTransform>::getName() [T = physx::PxActiveTransform]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar7 = (undefined8 *)
             (*pcVar10)(plVar4,(ulong)uVar2 * 0x30,pcVar1,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar3 = (uint)param_1[1];
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar7;
    do {
      puVar9[1] = puVar8[1];
      *puVar9 = *puVar8;
      *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar8 + 2);
      *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)puVar8 + 0x14);
      *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(puVar8 + 3);
      *(undefined4 *)((long)puVar9 + 0x1c) = *(undefined4 *)((long)puVar8 + 0x1c);
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)((long)puVar9 + 0x24) = *(undefined4 *)((long)puVar8 + 0x24);
      *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar8 + 5);
      puVar9 = puVar9 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar9 < puVar7 + (ulong)uVar3 * 6);
    uVar6 = (ulong)(uint)param_1[1];
  }
  puVar9 = puVar7 + uVar6 * 6;
  puVar9[1] = param_2[1];
  *puVar9 = *param_2;
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)puVar9 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(puVar9 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((long)puVar9 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((long)puVar9 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(param_2 + 5);
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar6 = *param_1, uVar6 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
  }
  uVar6 = param_1[1];
  *param_1 = (ulong)puVar7;
  *(uint *)(param_1 + 1) = (uint)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar7 + (ulong)(uint)uVar6 * 6;
}


