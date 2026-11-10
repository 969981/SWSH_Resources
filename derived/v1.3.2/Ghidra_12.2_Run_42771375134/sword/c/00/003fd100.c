/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fd100; name: FUN_003fd100
 */


void FUN_003fd100(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x18) & 0x1fffffff;
  lVar1 = *(long *)(param_2 + 8) + uVar2 * 0x20;
  Hint_Prefetch(lVar1,0,0,0);
  FUN_003fc170(param_1,lVar1);
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  FUN_002938e0(0,0x3f800000,*(long *)(param_3 + 8) + uVar2 * 0x18,*(long *)(param_1 + 0x40) + 0x48,
               lVar1,0,*PTR_DAT_02710c00 == '\0');
  return;
}


