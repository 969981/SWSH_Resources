/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003df9a0; name: FUN_003df9a0
 */


void FUN_003df9a0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long local_28;
  
  if (*(long *)(param_2 + 200) != 0) {
    FUN_003c2510(*(undefined8 *)(param_1 + 0x800),*(long *)(param_2 + 200),0);
  }
  lVar2 = *(long *)(param_2 + 0x50);
  local_28 = lVar2;
  FUN_003f3bb0(param_1 + 0x1078,&local_28);
  local_28 = lVar2;
  FUN_003f3bb0(param_1 + 0x10b0,&local_28);
  if ((*(uint *)(param_2 + 0xb8) < 0xfffffffe) && ((*(byte *)(lVar2 + 0x2c) >> 4 & 1) != 0)) {
    local_28 = param_2;
    FUN_003c12d0(param_1 + 0x1ee8,&local_28);
  }
  uVar1 = *(uint *)(param_2 + 0x58);
  FUN_00190b50(param_1 + 0x1188,uVar1 + 1);
  lVar2 = (ulong)(uVar1 >> 5) * 4;
  *(uint *)(*(long *)(param_1 + 0x1188) + lVar2) =
       *(uint *)(*(long *)(param_1 + 0x1188) + lVar2) | 1 << ((ulong)uVar1 & 0x1f);
  return;
}


