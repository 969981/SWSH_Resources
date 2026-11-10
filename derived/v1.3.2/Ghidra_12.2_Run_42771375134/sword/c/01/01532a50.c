/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01532a50; name: FUN_01532a50
 */


uint FUN_01532a50(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_24;
  
  local_24 = 0;
  lVar2 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  uVar1 = FUN_01503e30(lVar2,&DAT_02172934);
  if (((uVar1 & 0xff) == 0) && (plVar3 = *(long **)(lVar2 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_02172934);
  }
  return uVar1 >> 8 & 0xff;
}


