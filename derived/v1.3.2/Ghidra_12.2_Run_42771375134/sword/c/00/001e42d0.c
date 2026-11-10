/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e42d0; name: FUN_001e42d0
 */


void FUN_001e42d0(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x15];
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[0x11] != '\0') {
      uVar1 = FUN_00400880();
      FUN_00400890(uVar1,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxParticleBase::setVelocities()",(long)plVar2 + 0x89);
    }
    strncpy((char *)((long)plVar2 + 0x89),"PxParticleBase::setVelocities()",0x80);
    *(undefined1 *)(plVar2 + 0x21) = 0;
    *(undefined1 *)(plVar2 + 0x11) = 1;
  }
  if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
                    /* try { // try from 001e4384 to 001e43a3 has its CatchHandler @ 001e43e8 */
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                 ,0xb7,"Particle operations are not allowed while simulation is running.");
  }
  else {
                    /* try { // try from 001e43d0 to 001e43df has its CatchHandler @ 001e43e8 */
    FUN_003a9eb0(param_1 + 3,param_2,param_3,param_4);
  }
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001e43b0 to 001e43b7 has its CatchHandler @ 001e43e4 */
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


