/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00787070; name: FUN_00787070
 */


void FUN_00787070(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 < *(uint *)(param_1 + 0x2a8)) {
    uVar3 = (ulong)param_2;
    uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + uVar3 * 0x40);
    if ((((uVar1 & 1) != 0) &&
        (FUN_00788790(*(long *)(param_1 + 0x288) + uVar3 * 0x40,0),
        param_2 < *(uint *)(param_1 + 0x2a8))) &&
       (uVar1 = FUN_00788660(*(long *)(param_1 + 0x288) + uVar3 * 0x40), (uVar1 & 1) != 0)) {
      FUN_00788950(*(long *)(param_1 + 0x288) + uVar3 * 0x40);
      FUN_019a9320();
      lVar2 = FUN_00788950(*(long *)(param_1 + 0x288) + uVar3 * 0x40);
      *(undefined4 *)(lVar2 + 0x20) = 0;
    }
  }
  return;
}


