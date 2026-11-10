/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0450; name: FUN_003e0450
 */


void FUN_003e0450(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort local_40 [4];
  ushort local_38 [4];
  
  if (*(long **)(param_1 + 0x930) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x930) + 0x60))();
    if ((uVar1 & 1) == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x930) + 0x20))
                        (*(undefined4 *)(param_1 + 0x7b8),*(long **)(param_1 + 0x930),param_2);
    }
    else {
      uVar2 = FUN_00400880();
      FUN_00400890(uVar2,2,
                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                   ,0x73e,"GPU cloth pipeline failed, switching to software");
      if (*(int *)(param_1 + 0x924) != 0) {
        lVar3 = *(long *)(param_1 + 0x8f8);
        uVar1 = 0;
        do {
          uVar2 = *(undefined8 *)(lVar3 + uVar1 * 8);
          FUN_003b17c0(local_40,uVar2);
          local_38[0] = local_40[0] & 0xfffe;
          FUN_003b1730(uVar2,local_38);
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(param_1 + 0x924));
      }
      if (*(long **)(param_1 + 0x930) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x930) + 8))();
      }
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x930) = 0;
    }
    *(undefined8 *)(param_1 + 0x940) = uVar2;
  }
  return;
}


