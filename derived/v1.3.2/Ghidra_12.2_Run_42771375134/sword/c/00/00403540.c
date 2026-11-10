/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00403540; name: FUN_00403540
 */


undefined8 * FUN_00403540(ulong *param_1,undefined8 *param_2)

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
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxTaskTableRow>::getName() [T = physx::PxTaskTableRow]"
    ;
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar7 = (undefined8 *)
             (*pcVar11)(plVar4,(ulong)uVar2 * 0x18,pcVar1,"./../../foundation/include/PsArray.h",
                        0x229);
    uVar3 = (uint)param_1[1];
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar8 = (undefined8 *)*param_1;
    puVar9 = puVar7;
    do {
      puVar9[2] = puVar8[2];
      puVar9[1] = puVar8[1];
      puVar10 = puVar9 + 3;
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 3;
      puVar9 = puVar10;
    } while (puVar10 < puVar7 + (ulong)uVar3 * 3);
    uVar6 = (ulong)(uint)param_1[1];
  }
  puVar8 = puVar7 + uVar6 * 3;
  puVar8[2] = param_2[2];
  puVar8[1] = param_2[1];
  *puVar8 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar6 = *param_1, uVar6 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6);
  }
  uVar6 = param_1[1];
  *param_1 = (ulong)puVar7;
  *(uint *)(param_1 + 1) = (uint)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar7 + (ulong)(uint)uVar6 * 3;
}


