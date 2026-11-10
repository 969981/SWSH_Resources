/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00120be0; name: FUN_00120be0
 */


void FUN_00120be0(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 local_40;
  undefined4 local_38;
  uint uStack_34;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
                    /* try { // try from 00120c00 to 00120c9b has its CatchHandler @ 00120cb0 */
  plVar3 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::PxsCCDBlockArray<physx::PxsCCDOverlap, 128>::Block>::getName() [T = physx::PxsCCDBlockArray<physx::PxsCCDOverlap, 128>::Block]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  local_40 = (*pcVar6)(plVar3,0x800,pcVar2,"./../../LowLevel/software/include\\PxsCCD.h",0xd0);
  local_38 = 0;
  if (*(uint *)(param_1 + 1) < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
    puVar1 = (undefined8 *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x10);
    puVar1[1] = (ulong)uStack_34 << 0x20;
    *puVar1 = local_40;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  else {
    FUN_00127130(param_1,&local_40);
  }
  return;
}


