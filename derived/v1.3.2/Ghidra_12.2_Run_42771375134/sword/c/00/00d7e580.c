/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e580; name: FUN_00d7e580
 */


void FUN_00d7e580(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_016c0010(*(undefined8 *)(param_1 + 0x5e8));
  iVar2 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
  FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8),iVar2 + iVar1);
  return;
}


