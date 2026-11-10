/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c51c0; name: FUN_003c51c0
 */


undefined8 FUN_003c51c0(long param_1)

{
  void *__s;
  undefined8 uVar1;
  ulong __n;
  
  __n = (ulong)*(uint *)(*(long *)(param_1 + 0x68) + 0x40);
  __s = (void *)FUN_003e0010(*(undefined8 *)(param_1 + 0x60),__n);
  if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    memset(__s,0,__n);
  }
  uVar1 = FUN_00400880();
  FUN_00400890(uVar1,0x20,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScConstraintSim.cpp"
               ,0x85,"Constraint: could not allocate low-level resources.");
  return 0;
}


