/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015451c0; name: FUN_015451c0
 */


bool FUN_015451c0(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 local_24;
  
  local_24 = 0;
  lVar1 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_24);
  uVar2 = FUN_01515610(lVar1,&DAT_02172fc0);
  if (((uVar2 & 0xff) == 0) && (plVar3 = *(long **)(lVar1 + 0x58), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x50))(plVar3,&DAT_02172fc0);
  }
  return (uVar2 & 0xff00) != 0;
}


