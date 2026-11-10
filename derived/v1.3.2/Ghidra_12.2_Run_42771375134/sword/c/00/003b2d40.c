/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b2d40; name: FUN_003b2d40
 */


undefined8 FUN_003b2d40(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_a0 [92];
  int local_44;
  
  (**(code **)*param_2)(param_2,&local_44,4);
  if (local_44 - 0x30300U < 2 || local_44 == 1) {
                    /* WARNING: Subroutine does not return */
    memset(auStack_a0,0,0x58);
  }
  uVar1 = FUN_00400880();
  FUN_00400890(uVar1,0x20,
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothFabricCore.cpp"
               ,0xaf,"Loading cloth fabric failed: mismatching version of cloth fabric stream.");
  return 0;
}


