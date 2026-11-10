/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00503f80; name: FUN_00503f80
 */


undefined8 FUN_00503f80(long param_1)

{
  int iVar1;
  void *__dest;
  long lVar2;
  ushort *puVar3;
  ushort *local_38;
  uint local_30;
  undefined1 local_28;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    __dest = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02712e28);
    *(void **)(param_1 + 0xf8) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(uint *)(param_1 + 0xd4) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x108),(ulong)*(uint *)(param_1 + 0xd4));
      *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0xd4);
    }
  }
  puVar3 = *(ushort **)(param_1 + 0x108);
  local_38 = puVar3 + 1;
  local_30 = (uint)*puVar3;
  local_28 = 0;
  *(ulong *)(param_1 + 0x108) = (long)puVar3 + (ulong)*puVar3 + 2;
  lVar2 = FUN_00504760(PTR_DAT_027138a8,param_1 + 0x58,*(undefined8 *)(param_1 + 0x18),&local_38);
  *(long *)(param_1 + 0x80) = lVar2;
  if (lVar2 == 0) {
    return 2;
  }
  iVar1 = FUN_00506370(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb8));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    return 1;
  }
  return 2;
}


