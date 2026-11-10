/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00396c30; name: FUN_00396c30
 */


void FUN_00396c30(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar1 = FUN_00400880();
    FUN_00400890(uVar1,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningStructure.cpp"
                 ,0x147,"PrunerStructure::exportExtraData: Pruning structure is invalid!");
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x18),*(int *)(param_1 + 0xc) * 0x1c);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x30),*(int *)(param_1 + 0x28) << 2);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x10) * 0x1c);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 0x38),*(int *)(param_1 + 0x2c) << 2);
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x00396d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x48),*(int *)(param_1 + 0x40) << 3);
  return;
}


