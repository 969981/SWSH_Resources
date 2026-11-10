/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d4660; name: FUN_002d4660
 */


undefined8 FUN_002d4660(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar3 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (param_2 == 0) {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      plVar1 = (long *)FUN_00400d30();
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,(ulong)param_2 << 2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/CmRadixSortBuffered.cpp"
                         ,0x45);
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      plVar1 = (long *)FUN_00400d30();
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,(ulong)param_2 << 2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/Common/src/CmRadixSortBuffered.cpp"
                         ,0x46);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar2;
  }
  return 1;
}


