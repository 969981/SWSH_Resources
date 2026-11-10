/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e73c0; name: FUN_001e73c0
 */


long FUN_001e73c0(long *param_1,undefined1 *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined1 local_38 [8];
  
  if ((*(uint *)(param_1 + 1) >> 0x1e == 3) ||
     ((*(uint *)(param_1 + 1) >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,8,"./../../PhysX/src/buffering\\ScbParticleSystem.h",0x12d,
                 "Particle data read not allowed while simulation is running.");
    return 0;
  }
  plVar6 = (long *)param_1[0x15];
  if (plVar6 == (long *)0x0) {
    plVar6 = (long *)FUN_00400d30();
    pcVar7 = *(code **)(*plVar6 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::NpParticleFluidReadData>::getName() [T = physx::NpParticleFluidReadData]"
    ;
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    plVar6 = (long *)(*pcVar7)(plVar6,0x110,pcVar1,
                               "./../../PhysX/src/buffering\\ScbParticleSystem.h",0x132);
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0xc;
    plVar6[5] = 0;
    *(undefined4 *)(plVar6 + 6) = 0xc;
    plVar6[7] = 0;
    *(undefined4 *)(plVar6 + 8) = 4;
    plVar6[9] = 0;
    *(undefined4 *)(plVar6 + 10) = 2;
    plVar6[0xb] = 0;
    *(undefined4 *)(plVar6 + 0xc) = 0xc;
    plVar6[0xd] = 0;
    *(undefined4 *)(plVar6 + 0xe) = 0xc;
    plVar6[0xf] = 0;
    *(undefined4 *)(plVar6 + 0x10) = 4;
    *plVar6 = (long)(PTR_DAT_027110f8 + 0x10);
    *(undefined1 *)(plVar6 + 0x11) = 0;
    *(undefined1 *)((long)plVar6 + 0x109) = 1;
                    /* try { // try from 001e7528 to 001e7537 has its CatchHandler @ 001e75a8 */
    strncpy((char *)((long)plVar6 + 0x89),"UNDEFINED",0x80);
    param_1[0x15] = (long)plVar6;
    cVar2 = (char)plVar6[0x11];
  }
  else {
    cVar2 = (char)plVar6[0x11];
  }
  if (cVar2 != '\0') {
    uVar3 = FUN_00400880();
    FUN_00400890(uVar3,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                 "PxParticleReadData access through %s while its still locked by last call of %s.",
                 "PxParticleBase::lockParticleReadData()",(long)plVar6 + 0x89);
  }
  strncpy((char *)((long)plVar6 + 0x89),"PxParticleBase::lockParticleReadData()",0x80);
  *(undefined1 *)(plVar6 + 0x21) = 0;
  *(undefined1 *)(plVar6 + 0x11) = 1;
  local_38[0] = *param_2;
  (**(code **)(*(long *)param_1[0x15] + 0x20))((long *)param_1[0x15],local_38);
  FUN_003a9fd0(param_1 + 3,param_1[0x15]);
  return param_1[0x15];
}


