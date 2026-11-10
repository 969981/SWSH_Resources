/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc1d20; name: FUN_00dc1d20
 */


void FUN_00dc1d20(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x458);
  lVar2 = *(long *)(param_1 + 0x460);
  *(undefined4 *)(param_1 + 0x4b8) = param_2;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x180) {
    if (*(long *)(lVar1 + 0x120) != 0) {
      FUN_00db81b0(*(long *)(lVar1 + 0x120),param_2,1);
    }
  }
  lVar1 = FUN_00dc3640(param_1,auStack_38);
  if (lVar1 != 0) {
    FUN_00da30e0(lVar1,param_2);
  }
  return;
}


