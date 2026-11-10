/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bfcc0; name: FUN_003bfcc0
 */


void FUN_003bfcc0(long param_1)

{
  long lVar1;
  
  if (*(uint *)(param_1 + 0xb8) < 0xfffffffe) {
    FUN_003dd880(*(undefined8 *)(param_1 + 0x48),param_1);
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_003c16d0(*(long *)(param_1 + 200),*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x800));
  }
  FUN_003ba7d0(param_1,5,0,8);
  FUN_00114570(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x748),*(undefined4 *)(param_1 + 0xb0));
  for (lVar1 = *(long *)(param_1 + 0x38); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    FUN_003fd6d0(lVar1);
  }
  return;
}


