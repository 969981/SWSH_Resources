/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4410; name: FUN_001e4410
 */


void FUN_001e4410(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x15];
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[0x11] != '\0') {
      uVar1 = FUN_00400880();
      FUN_00400890(uVar1,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxParticleBase::setRestOffsets()",(long)plVar2 + 0x89);
    }
    strncpy((char *)((long)plVar2 + 0x89),"PxParticleBase::setRestOffsets()",0x80);
    *(undefined1 *)(plVar2 + 0x21) = 0;
    *(undefined1 *)(plVar2 + 0x11) = 1;
  }
  if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
                    /* try { // try from 001e44c4 to 001e44e3 has its CatchHandler @ 001e4528 */
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                 ,0xca,"Particle operations are not allowed while simulation is running.");
  }
  else {
                    /* try { // try from 001e4510 to 001e451f has its CatchHandler @ 001e4528 */
    FUN_003a9f10(param_1 + 3,param_2,param_3,param_4);
  }
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001e44f0 to 001e44f7 has its CatchHandler @ 001e4524 */
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


