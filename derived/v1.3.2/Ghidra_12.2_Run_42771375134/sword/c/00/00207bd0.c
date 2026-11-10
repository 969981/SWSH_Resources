/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00207bd0; name: FUN_00207bd0
 */


void FUN_00207bd0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = (ulong)*(ushort *)(param_1 + 1);
  if (uVar1 != 1) {
    if (*(ushort *)(param_1 + 1) == 0) {
      return;
    }
    param_1 = (long *)*param_1;
  }
  do {
    lVar2 = *param_1;
    if ((*(byte *)(lVar2 + 0x3b) >> 4 & 1) != 0) {
      FUN_001cafb0(param_2 + 0x1fe8,lVar2 + 0x30);
      *(uint *)(lVar2 + 0x38) = *(uint *)(lVar2 + 0x38) & 0xefffffff;
    }
    param_1 = param_1 + 1;
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0);
  return;
}


