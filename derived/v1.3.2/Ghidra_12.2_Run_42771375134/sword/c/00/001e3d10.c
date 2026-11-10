/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e3d10; name: FUN_001e3d10
 */


uint FUN_001e3d10(long *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
    uVar2 = FUN_00400880();
    FUN_00400890(uVar2,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                 ,0x5b,"Particle operations are not allowed while simulation is running.");
    uVar1 = 0;
  }
  else {
    plVar3 = (long *)param_1[0x15];
    if (plVar3 != (long *)0x0) {
      if ((char)plVar3[0x11] != '\0') {
        uVar2 = FUN_00400880();
        FUN_00400890(uVar2,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                     "PxParticleReadData access through %s while its still locked by last call of %s."
                     ,"PxParticleBase::createParticles()",(long)plVar3 + 0x89);
      }
      strncpy((char *)((long)plVar3 + 0x89),"PxParticleBase::createParticles()",0x80);
      *(undefined1 *)(plVar3 + 0x21) = 0;
      *(undefined1 *)(plVar3 + 0x11) = 1;
    }
                    /* try { // try from 001e3de4 to 001e3def has its CatchHandler @ 001e3e1c */
    uVar1 = FUN_003a9d80(param_1 + 3,param_2);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 001e3dfc to 001e3e03 has its CatchHandler @ 001e3e18 */
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  return uVar1 & 1;
}


