/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa2a0; name: FUN_003aa2a0
 */


void FUN_003aa2a0(long *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  byte local_50 [8];
  ushort local_48 [4];
  
  FUN_003ba380();
  param_1[0x4f] = 0x4000000000;
  puVar1 = PTR_DAT_02712738;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  param_1[0x4e] = (long)(param_1 + 0xd);
  param_1[0x50] = 0x20;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xc00;
  *param_1 = (long)(puVar1 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x57] = lVar4;
  puVar1 = PTR_DAT_02712740;
  param_1[0x5b] = (long)param_1;
  param_1[0x56] = (long)(puVar1 + 0x10);
  param_1[0x5c] = (long)"ScParticleSystemSim.prepareCollisionInput";
  if (*(uint *)(param_1 + 6) < 0x21) {
                    /* try { // try from 003aa35c to 003aa367 has its CatchHandler @ 003aa45c */
    FUN_003ba690(param_1,param_1 + 5,param_1 + 6,*(undefined4 *)((long)param_1 + 0x34),0x20);
  }
  plVar5 = *(long **)(param_1[9] + 0x8a0);
                    /* try { // try from 003aa370 to 003aa37b has its CatchHandler @ 003aa460 */
  uVar2 = FUN_003a9990(param_3);
                    /* try { // try from 003aa380 to 003aa443 has its CatchHandler @ 003aa464 */
  FUN_003a9b40(local_48,param_1[10]);
  lVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar2,param_3 + 7,local_48[0] >> 6 & 1);
  param_1[0xb] = lVar4;
  if ((lVar4 == 0) && ((local_48[0] >> 6 & 1) != 0)) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/particles/ScParticleSystemSim.cpp"
                 ,0x47,"GPU particle system creation failed. Falling back to CPU implementation.");
    lVar4 = (**(code **)(*plVar5 + 8))(plVar5,uVar2,param_3 + 7,0);
    param_1[0xb] = lVar4;
    FUN_003a9c00(param_1[10]);
    lVar4 = param_1[0xb];
  }
  if (lVar4 == 0) {
    *param_3 = 0;
    FUN_003a99a0(param_3,uVar2);
  }
  else {
    FUN_003a9b40(local_50,param_1[10]);
    if ((local_50[0] >> 2 & 1) != 0) {
      (**(code **)(*(long *)param_1[0xb] + 0x38))((long *)param_1[0xb],1);
    }
  }
  return;
}


