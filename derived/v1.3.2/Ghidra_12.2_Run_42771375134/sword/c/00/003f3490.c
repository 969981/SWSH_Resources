/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f3490; name: FUN_003f3490
 */


void FUN_003f3490(ulong *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  
  if (param_2 == 0) {
    puVar6 = (undefined8 *)0x0;
    uVar2 = (uint)param_1[1];
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    pcVar10 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::TriggerPairExtraData>::getName() [T = physx::Sc::TriggerPairExtraData]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    puVar6 = (undefined8 *)
             (*pcVar10)(plVar3,(ulong)param_2 * 0xc,pcVar1,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar2 = (uint)param_1[1];
  }
  if (uVar2 != 0) {
    puVar7 = (undefined8 *)*param_1;
    puVar8 = puVar6;
    do {
      *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
      puVar9 = (undefined8 *)((long)puVar8 + 0xc);
      *puVar8 = *puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + 0xc);
      puVar8 = puVar9;
    } while (puVar9 < (undefined8 *)((long)puVar6 + (ulong)uVar2 * 0xc));
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar5 = *param_1, uVar5 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
  }
  *param_1 = (ulong)puVar6;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


