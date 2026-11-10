/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00400c30; name: FUN_00400c30
 */


void FUN_00400c30(void)

{
  if (*(int *)PTR_DAT_027129f8 == 0) {
    FUN_00400890(*(undefined8 *)PTR_DAT_027129e0,8,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/PsFoundation.cpp"
                 ,0xd3,"Foundation: Invalid deregistration detected.");
    return;
  }
  *(int *)PTR_DAT_027129f8 = *(int *)PTR_DAT_027129f8 + -1;
  return;
}


