/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f5e20; name: FUN_002f5e20
 */


void FUN_002f5e20(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_027120a0 + 0x10);
                    /* try { // try from 002f5e40 to 002f5e9b has its CatchHandler @ 002f5f88 */
  FUN_00212590();
  FUN_002fa710(param_1);
  if (*(int *)((long)param_1 + 0x44) != 0) {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/SnSerializationRegistry.cpp"
                 ,0xa5,
                 "PxSerializationRegistry::release(): some registered PxSerializer instances were not unregistered"
                );
  }
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/serialization/SnSerializationRegistry.cpp"
                 ,0xab,
                 "PxSerializationRegistry::release(): some registered PxRepXSerializer instances were not unregistered"
                );
  }
  if (((-1 < (int)*(uint *)((long)param_1 + 0x8c)) &&
      ((*(uint *)((long)param_1 + 0x8c) & 0x7fffffff) != 0)) && (lVar5 = param_1[0x10], lVar5 != 0))
  {
                    /* try { // try from 002f5eb4 to 002f5ec7 has its CatchHandler @ 002f5f7c */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (*(uint *)((long)param_1 + 0x6c) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(param_1[0xc] + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(param_1[0xb] + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)((long)param_1 + 0x6c));
  }
  lVar5 = param_1[9];
  if (lVar5 != 0) {
                    /* try { // try from 002f5f08 to 002f5f1b has its CatchHandler @ 002f5f84 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  if (*(uint *)((long)param_1 + 0x34) != 0) {
    uVar3 = 0;
    do {
      uVar4 = *(uint *)(param_1[5] + uVar3 * 4);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = *(uint *)(param_1[4] + (ulong)uVar4 * 4);
        } while (uVar4 != 0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)((long)param_1 + 0x34));
  }
  lVar5 = param_1[2];
  if (lVar5 != 0) {
                    /* try { // try from 002f5f5c to 002f5f6f has its CatchHandler @ 002f5f80 */
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5);
  }
  return;
}


