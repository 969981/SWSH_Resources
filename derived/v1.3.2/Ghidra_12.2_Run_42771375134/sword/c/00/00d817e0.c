/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d817e0; name: FUN_00d817e0
 */


void FUN_00d817e0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x278);
  if (*(char *)(param_1 + 0x668) == '\0') {
    FUN_00d83b20(uVar1,8);
  }
  else {
    lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
    if (lVar2 == 0) {
      lVar2 = FUN_01524df0(0);
      FUN_00d83ac0(uVar1,8,*(undefined8 *)(lVar2 + 0x48));
    }
    else {
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = FUN_01524df0(lVar2);
      FUN_00d83ac0(uVar1,8,*(undefined8 *)(lVar2 + 0x48));
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  *(byte *)(param_1 + 0x668) = *(byte *)(param_1 + 0x668) ^ 1;
  FUN_00d7d7c0(param_1);
  if (*(long *)(param_1 + 0x4c0) == 0) {
    return;
  }
  FUN_016d2080();
  return;
}


