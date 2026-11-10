/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c4540; name: FUN_003c4540
 */


undefined8 * FUN_003c4540(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  
  iVar2 = *(uint *)((long)param_1 + 0x614) << 1;
  if ((*(uint *)((long)param_1 + 0x614) & 0x7fffffff) == 0) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x18;
    if (uVar3 < 0x601 && *(char *)(param_1 + 0xc0) == '\0') {
      *(undefined1 *)(param_1 + 0xc0) = 1;
      uVar3 = *(uint *)(param_1 + 0xc2);
      puVar7 = param_1;
      goto joined_r0x003c4644;
    }
    if (uVar3 != 0) {
      plVar4 = (long *)FUN_00400d30();
      pcVar11 = *(code **)(*plVar4 + 0x10);
      plVar5 = (long *)FUN_00400d60();
      uVar6 = (**(code **)(*plVar5 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::BodyRank>::getName() [T = physx::Sc::BodyRank]"
      ;
      if ((uVar6 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      puVar7 = (undefined8 *)
               (*pcVar11)(plVar4,uVar3,pcVar1,
                          "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
      uVar3 = *(uint *)(param_1 + 0xc2);
      goto joined_r0x003c4644;
    }
  }
  puVar7 = (undefined8 *)0x0;
  uVar3 = *(uint *)(param_1 + 0xc2);
joined_r0x003c4644:
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar10 = (undefined8 *)param_1[0xc1];
    puVar8 = puVar7;
    do {
      puVar8[2] = puVar10[2];
      puVar8[1] = puVar10[1];
      puVar9 = puVar8 + 3;
      *puVar8 = *puVar10;
      puVar10 = puVar10 + 3;
      puVar8 = puVar9;
    } while (puVar9 < puVar7 + (ulong)uVar3 * 3);
    uVar6 = (ulong)*(uint *)(param_1 + 0xc2);
  }
  puVar10 = puVar7 + uVar6 * 3;
  puVar10[2] = param_2[2];
  puVar10[1] = param_2[1];
  *puVar10 = *param_2;
  if (-1 < *(int *)((long)param_1 + 0x614)) {
    puVar10 = (undefined8 *)param_1[0xc1];
    if (param_1 == puVar10) {
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    else if (puVar10 != (undefined8 *)0x0) {
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,puVar10);
    }
  }
  uVar3 = *(uint *)(param_1 + 0xc2);
  param_1[0xc1] = puVar7;
  *(int *)((long)param_1 + 0x614) = iVar2;
  *(uint *)(param_1 + 0xc2) = uVar3 + 1;
  return puVar7 + (ulong)uVar3 * 3;
}


