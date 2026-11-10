/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b80e0; name: FUN_011b80e0
 */


void FUN_011b80e0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_011b8150();
  if ((uVar1 & 0xff) == 0) {
    *param_1 = 0;
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + (uVar1 >> 0x1d & 0x7fffffff8)) + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *param_1 = lVar2;
  return;
}


