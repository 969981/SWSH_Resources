/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f4bd0; name: FUN_001f4bd0
 */


void FUN_001f4bd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_001e10e0(param_1 + 0x18,param_1);
  uVar1 = FUN_001e1e70(param_1);
  if (*(long *)(param_1 + 0x48) != 0) {
    uVar2 = FUN_00400880();
    FUN_00400890(uVar2,8,"./../../PhysX/src/NpRigidActorTemplate.h",0xbf,
                 "PxRigidActor::release: Actor is part of a pruning structure, pruning structure is now invalid!"
                );
    FUN_00396ea0(*(undefined8 *)(param_1 + 0x48),param_1);
  }
  FUN_00207630(param_1 + 0x28,uVar1);
  FUN_001e1200(param_1 + 0x18,param_1);
  return;
}


