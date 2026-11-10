/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001fdf40; name: FUN_001fdf40
 */


void FUN_001fdf40(ulong *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  
  if (param_2 == 0) {
    puVar6 = (undefined4 *)0x0;
    uVar2 = (uint)param_1[1];
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxDebugPoint>::getName() [T = physx::PxDebugPoint]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar6 = (undefined4 *)
             (*pcVar9)(plVar3,(ulong)param_2 << 4,pcVar1,
                       "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar2 = (uint)param_1[1];
  }
  if (uVar2 != 0) {
    puVar7 = (undefined4 *)*param_1;
    puVar8 = puVar6;
    do {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8[3] = puVar7[3];
      puVar8 = puVar8 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar8 < puVar6 + (ulong)uVar2 * 4);
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar5 = *param_1, uVar5 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
  }
  *param_1 = (ulong)puVar6;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


