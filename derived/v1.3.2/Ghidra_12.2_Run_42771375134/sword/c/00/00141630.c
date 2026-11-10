/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00141630; name: FUN_00141630
 */


void FUN_00141630(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x00141670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))
            (plVar1,param_1,&DAT_01d38550,
             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelCloth/src/Allocator.cpp"
             ,0x26);
  return;
}


