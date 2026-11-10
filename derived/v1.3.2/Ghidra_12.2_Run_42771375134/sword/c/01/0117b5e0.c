/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117b5e0; name: FUN_0117b5e0
 */


bool FUN_0117b5e0(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0xc2) == '\0') {
    return false;
  }
  local_17 = *(undefined4 *)(param_1 + 0xc3);
  local_13 = *(undefined2 *)(param_1 + 199);
  local_18 = 1;
  uVar2 = FUN_0117b670(param_1,1,&local_18);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  return bVar1;
}


