/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067d4a0; name: FUN_0067d4a0
 */


undefined8 FUN_0067d4a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_38;
  undefined8 local_28;
  
  plVar1 = (long *)FUN_005bf860();
  plVar1 = (long *)(**(code **)(*plVar1 + 0xb8))(plVar1,0);
  *(long **)(param_1 + 0x30) = plVar1;
  (**(code **)(*plVar1 + 0x40))();
  plVar1 = *(long **)(param_1 + 0x30);
  local_28 = 0;
  local_38 = 0;
  uVar2 = FUN_00687c90(&local_38);
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_28,uVar2);
  plVar4 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)FUN_005bf860();
  uVar2 = (**(code **)(*plVar1 + 0xc0))();
  plVar1 = (long *)FUN_005bf860();
  (**(code **)(*plVar1 + 0xc0))();
  uVar3 = FUN_00687c90();
  (**(code **)(*plVar4 + 0x58))(plVar4,uVar2,uVar3);
  (**(code **)(**(long **)(param_1 + 0x30) + 0x48))();
  plVar1 = (long *)FUN_005bf860();
  (**(code **)(*plVar1 + 0xd0))(plVar1,&DAT_02139390,*(undefined8 *)(param_1 + 0x30));
  return 1;
}


