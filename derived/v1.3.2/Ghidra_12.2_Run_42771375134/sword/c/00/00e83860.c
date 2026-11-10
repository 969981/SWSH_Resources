/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e83860; name: FUN_00e83860
 */


uint FUN_00e83860(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_28;
  
  plVar5 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  if (plVar5 == plVar1) {
    return 2;
  }
  while ((lVar3 = FUN_00e87f20(*plVar5 + 0x50), lVar3 == 0 ||
         (uVar4 = (**(code **)(*(long *)*plVar5 + 0x88))(), (uVar4 & 1) != 0))) {
    plVar5 = plVar5 + 1;
    if (plVar1 == plVar5) {
      return 2;
    }
  }
  local_28 = *(undefined8 *)(lVar3 + 0x3a8);
  lVar3 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar3 == 0) {
    uVar2 = FUN_0100d1b0(0,&local_28);
  }
  else {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar2 = FUN_0100d1b0(lVar3,&local_28);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  if (1 < uVar2) {
    uVar2 = 2;
  }
  return uVar2;
}


