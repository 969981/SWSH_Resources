/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4020; name: FUN_001e4020
 */


void FUN_001e4020(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[0x15];
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[0x11] != '\0') {
      uVar1 = FUN_00400880();
      FUN_00400890(uVar1,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxParticleBase::releaseParticles()",(long)plVar2 + 0x89);
    }
    strncpy((char *)((long)plVar2 + 0x89),"PxParticleBase::releaseParticles()",0x80);
    *(undefined1 *)(plVar2 + 0x21) = 0;
    *(undefined1 *)(plVar2 + 0x11) = 1;
  }
  if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
                    /* try { // try from 001e40c4 to 001e4133 has its CatchHandler @ 001e4160 */
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                 ,0x8e,"Particle operations are not allowed while simulation is running.");
  }
  else {
    FUN_003a9e10(param_1 + 3);
    if ((char)param_1[0x18] != '\0') {
                    /* WARNING: Subroutine does not return */
      memset(*(void **)param_1[0x16],0,(ulong)(uint)(*(int *)((undefined8 *)param_1[0x16] + 1) << 2)
            );
    }
    if ((char)param_1[0x1b] != '\0') {
                    /* WARNING: Subroutine does not return */
      memset(*(void **)param_1[0x19],0,(ulong)(uint)(*(int *)((undefined8 *)param_1[0x19] + 1) << 2)
            );
    }
  }
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001e4144 to 001e414b has its CatchHandler @ 001e415c */
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


