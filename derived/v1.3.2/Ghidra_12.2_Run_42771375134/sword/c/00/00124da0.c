/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00124da0; name: FUN_00124da0
 */


long FUN_00124da0(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  code *pcVar10;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  
  lVar5 = *param_1;
  uVar6 = (ulong)*(uint *)(param_1 + 2);
  puVar9 = (uint *)(lVar5 + uVar6 * 0x10 + 8);
  uVar7 = *puVar9;
  if (uVar7 == 0x80) {
    uVar8 = *(uint *)(param_1 + 2) + 1;
    if (uVar8 == *(uint *)(param_1 + 1)) {
      plVar3 = (long *)FUN_00400d30();
      pcVar10 = *(code **)(*plVar3 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar6 = (**(code **)(*plVar4 + 0x28))();
      pcVar2 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDBlockArray<physx::PxsCCDBody, 128>::Block>::getName() [T = physx::PxsCCDBlockArray<physx::PxsCCDBody, 128>::Block]"
      ;
      if ((uVar6 & 1) == 0) {
        pcVar2 = "<allocation names disabled>";
      }
      local_40 = (*pcVar10)(plVar3,0x2000,pcVar2,"./../../LowLevel/software/include\\PxsCCD.h",0x102
                           );
      local_38 = 0;
      if (*(uint *)(param_1 + 1) < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
        puVar1 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
        puVar1[1] = (ulong)uStack_34 << 0x20;
        *puVar1 = local_40;
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      else {
        FUN_00126f30(param_1,&local_40);
      }
      lVar5 = *param_1;
      uVar8 = (int)param_1[2] + 1;
    }
    *(uint *)(param_1 + 2) = uVar8;
    uVar6 = (ulong)uVar8;
    uVar7 = 0;
    puVar9 = (uint *)(lVar5 + (ulong)uVar8 * 0x10 + 8);
    *puVar9 = 0;
  }
  *puVar9 = uVar7 + 1;
  return *(long *)(lVar5 + uVar6 * 0x10) + (ulong)uVar7 * 0x40;
}


