/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e4740; name: FUN_001e4740
 */


void FUN_001e4740(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0xa8);
  if (plVar2 != (long *)0x0) {
    if ((char)plVar2[0x11] != '\0') {
      uVar1 = FUN_00400880();
      FUN_00400890(uVar1,8,"./../../PhysX/src/particles\\NpParticleFluidReadData.h",0x43,
                   "PxParticleReadData access through %s while its still locked by last call of %s."
                   ,"PxParticleBase: Apply forces",(long)plVar2 + 0x89);
    }
    strncpy((char *)((long)plVar2 + 0x89),"PxParticleBase: Apply forces",0x80);
    *(undefined1 *)(plVar2 + 0x21) = 0;
    *(undefined1 *)(plVar2 + 0x11) = 1;
  }
                    /* try { // try from 001e47d4 to 001e4837 has its CatchHandler @ 001e4868 */
  if ((*(char *)(param_2 + 0xc0) != '\0') &&
     (FUN_003a9f70(param_1,param_2 + 0x18,*(undefined8 *)(param_2 + 0xb0),
                   *(undefined8 *)(param_2 + 0xb8)), *(char *)(param_2 + 0xc0) != '\0')) {
                    /* WARNING: Subroutine does not return */
    memset((void *)**(undefined8 **)(param_2 + 0xb0),0,
           (ulong)(uint)(*(int *)(*(undefined8 **)(param_2 + 0xb0) + 1) << 2));
  }
  if ((*(char *)(param_2 + 0xd8) != '\0') &&
     (FUN_003a9f70(0x3f800000,param_2 + 0x18,*(undefined8 *)(param_2 + 200),
                   *(undefined8 *)(param_2 + 0xd0)), *(char *)(param_2 + 0xd8) != '\0')) {
                    /* WARNING: Subroutine does not return */
    memset((void *)**(undefined8 **)(param_2 + 200),0,
           (ulong)(uint)(*(int *)(*(undefined8 **)(param_2 + 200) + 1) << 2));
  }
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 001e4848 to 001e484f has its CatchHandler @ 001e4864 */
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  return;
}


