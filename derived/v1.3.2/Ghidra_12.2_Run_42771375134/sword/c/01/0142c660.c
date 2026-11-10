/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0142c660; name: FUN_0142c660
 */


undefined8 FUN_0142c660(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x658);
  iVar1 = FUN_016c0020(*(undefined8 *)(param_1 + 0x650));
  iVar2 = FUN_016c0010(*(undefined8 *)(param_1 + 0x650));
  return *(undefined8 *)(*(long *)(lVar3 + 0xe0) + (ulong)(uint)(iVar2 + iVar1) * 0x10);
}


