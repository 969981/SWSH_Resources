/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00787250; name: FUN_00787250
 */


undefined4 FUN_00787250(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 < *(uint *)(param_1 + 0x2a8)) {
    uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_00788950(*(long *)(param_1 + 0x288) + (ulong)param_2 * 0x40);
      uVar3 = *(undefined4 *)(lVar2 + 0x20);
    }
  }
  return uVar3;
}


