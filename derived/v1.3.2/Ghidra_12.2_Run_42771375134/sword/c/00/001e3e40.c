/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e3e40; name: FUN_001e3e40
 */


void FUN_001e3e40(long *param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[0x15];
  if (plVar7 != (long *)0x0) {
    if ((char)plVar7[0x11] != '\0') {
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxParticleBase::releaseParticles()",(long)plVar7 + 0x89);
    }
    strncpy((char *)((long)plVar7 + 0x89),"PxParticleBase::releaseParticles()",0x80);
    *(undefined1 *)(plVar7 + 0x21) = 0;
    *(undefined1 *)(plVar7 + 0x11) = 1;
  }
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
       ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
                    /* try { // try from 001e3ef4 to 001e3f27 has its CatchHandler @ 001e3ff4 */
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,8,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysX/src/buffering/ScbParticleSystem.cpp"
                   ,0x74,"Particle operations are not allowed while simulation is running.");
    }
    else {
      FUN_003a9dc0(param_1 + 3,param_2,param_3);
      if ((char)param_1[0x18] != '\0') {
        lVar4 = *param_3;
        iVar3 = 0;
        lVar5 = *(long *)param_1[0x16];
        do {
          uVar1 = (int)param_3[1] * iVar3;
          iVar3 = iVar3 + 1;
          uVar1 = *(uint *)(lVar4 + (ulong)uVar1);
          lVar6 = (ulong)(uVar1 >> 5) * 4;
          *(uint *)(lVar5 + lVar6) =
               *(uint *)(lVar5 + lVar6) & (1 << ((ulong)uVar1 & 0x1f) ^ 0xffffffffU);
        } while (param_2 != iVar3);
      }
      if ((char)param_1[0x1b] != '\0') {
        lVar4 = *param_3;
        iVar3 = 0;
        lVar5 = *(long *)param_1[0x19];
        do {
          uVar1 = (int)param_3[1] * iVar3;
          iVar3 = iVar3 + 1;
          uVar1 = *(uint *)(lVar4 + (ulong)uVar1);
          lVar6 = (ulong)(uVar1 >> 5) * 4;
          *(uint *)(lVar5 + lVar6) =
               *(uint *)(lVar5 + lVar6) & (1 << ((ulong)uVar1 & 0x1f) ^ 0xffffffffU);
        } while (param_2 != iVar3);
      }
    }
  }
  if (plVar7 != (long *)0x0) {
                    /* try { // try from 001e3fd4 to 001e3fdb has its CatchHandler @ 001e3ff0 */
    (**(code **)(*plVar7 + 8))(plVar7);
  }
  return;
}


