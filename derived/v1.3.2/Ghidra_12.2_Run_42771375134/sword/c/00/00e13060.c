/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13060; name: FUN_00e13060
 */


uint FUN_00e13060(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if ((*(long *)(param_1 + 0x248) != 0) && (*(char *)(*(long *)(param_1 + 0x248) + 0x170) == '\0'))
  {
    return 0;
  }
  lVar2 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    uVar1 = FUN_015c5c90(0);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar1 = FUN_015c5c90(lVar3);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return uVar1 & 1;
}


