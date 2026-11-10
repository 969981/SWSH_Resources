/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00146960; name: FUN_00146960
 */


undefined8 * FUN_00146960(ulong *param_1,undefined8 *param_2)

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
    "static const char *physx::shdfnd::ReflectionAllocator<physx::cloth::SwInterCollisionData>::getName() [T = physx::cloth::SwInterCollisionData]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar7 = (undefined8 *)
             (*pcVar10)(plVar4,(ulong)uVar2 * 0x60,pcVar1,
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
      puVar9[3] = puVar8[3];
      puVar9[2] = puVar8[2];
      puVar9[1] = puVar8[1];
      *puVar9 = *puVar8;
      *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(puVar8 + 4);
      *(undefined4 *)((long)puVar9 + 0x24) = *(undefined4 *)((long)puVar8 + 0x24);
      *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(puVar8 + 5);
      *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)puVar8 + 0x2c);
      *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(puVar8 + 6);
      *(undefined4 *)((long)puVar9 + 0x34) = *(undefined4 *)((long)puVar8 + 0x34);
      *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(puVar8 + 7);
      *(undefined4 *)((long)puVar9 + 0x3c) = *(undefined4 *)((long)puVar8 + 0x3c);
      *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(puVar8 + 8);
      *(undefined4 *)((long)puVar9 + 0x44) = *(undefined4 *)((long)puVar8 + 0x44);
      *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(puVar8 + 9);
      *(undefined4 *)((long)puVar9 + 0x4c) = *(undefined4 *)((long)puVar8 + 0x4c);
      *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(puVar8 + 10);
      *(undefined4 *)((long)puVar9 + 0x5c) = *(undefined4 *)((long)puVar8 + 0x5c);
      *(undefined8 *)((long)puVar9 + 0x54) = *(undefined8 *)((long)puVar8 + 0x54);
      puVar9 = puVar9 + 0xc;
      puVar8 = puVar8 + 0xc;
    } while (puVar9 < puVar7 + (ulong)uVar3 * 0xc);
    uVar6 = (ulong)(uint)param_1[1];
  }
  puVar9 = puVar7 + uVar6 * 0xc;
  puVar9[3] = param_2[3];
  puVar9[2] = param_2[2];
  puVar9[1] = param_2[1];
  *puVar9 = *param_2;
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((long)puVar9 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)puVar9 + 0x2c) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((long)puVar9 + 0x34) = *(undefined4 *)((long)param_2 + 0x34);
  *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((long)puVar9 + 0x3c) = *(undefined4 *)((long)param_2 + 0x3c);
  *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)puVar9 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
  *(undefined4 *)(puVar9 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((long)puVar9 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
  *(undefined4 *)(puVar9 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((long)puVar9 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  *(undefined8 *)((long)puVar9 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar6 = *param_1, uVar6 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
  }
  uVar6 = param_1[1];
  *param_1 = (ulong)puVar7;
  *(uint *)(param_1 + 1) = (uint)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar7 + (ulong)(uint)uVar6 * 0xc;
}


