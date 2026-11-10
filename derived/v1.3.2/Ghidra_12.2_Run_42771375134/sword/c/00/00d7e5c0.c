/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e5c0; name: FUN_00d7e5c0
 */


long FUN_00d7e5c0(long param_1)

{
  int iVar1;
  long lVar2;
  int local_24;
  
  iVar1 = FUN_016c0010(*(undefined8 *)(param_1 + 0x5e8));
  local_24 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
  local_24 = local_24 + iVar1;
  lVar2 = FUN_00d75680(*(long *)(param_1 + 0x5d0) + 0x60,param_1 + 0x5dc,&local_24);
  return lVar2 + 8;
}


