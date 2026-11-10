/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010cbc30; name: FUN_010cbc30
 */


undefined8 FUN_010cbc30(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 == 2) {
    uVar2 = FUN_011fcf90(*(undefined8 *)PTR_DAT_02718f20);
    if ((uVar2 & 1) == 0) {
      FUN_010cb410(param_1,0x15);
      *(undefined8 *)(param_1 + 0x88) = 0;
      FUN_010cb4c0(param_1);
      return 0;
    }
  }
  else {
    if (iVar1 == 1) {
      uVar2 = FUN_011fca80(*(undefined8 *)PTR_DAT_02718f20);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x80));
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x5d0) + 0x60);
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  return 0;
}


