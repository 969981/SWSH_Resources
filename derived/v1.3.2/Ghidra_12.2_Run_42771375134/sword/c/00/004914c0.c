/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004914c0; name: FUN_004914c0
 */


int FUN_004914c0(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  
  if ((*(ushort *)(param_1 + 0xfd) & 7) == param_2) {
    return 1;
  }
  uVar3 = *(ushort *)(param_1 + 0xfd) & 0xfff8 | param_2 & 7;
  *(short *)(param_1 + 0xfd) = (short)uVar3;
  if (*(long **)(param_1 + 200) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 200) + 0x18))();
    uVar3 = (uint)*(ushort *)(param_1 + 0xfd);
  }
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if ((uVar3 & 7) == 1) {
    if (plVar2 != (long *)0x0) {
      FUN_00495440(plVar2);
      *(long **)(param_1 + 200) = plVar2;
      goto joined_r0x0049155c;
    }
  }
  else if (plVar2 != (long *)0x0) {
    FUN_00494f70(plVar2);
  }
  *(long **)(param_1 + 200) = plVar2;
joined_r0x0049155c:
  if (plVar2 == (long *)0x0) {
    iVar1 = 2;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (iVar1 != 1) {
      (**(code **)(**(long **)(param_1 + 200) + 0x18))();
      *(undefined8 *)(param_1 + 200) = 0;
    }
  }
  FUN_00493260(param_1);
  return iVar1;
}


