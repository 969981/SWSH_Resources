/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119a950; name: FUN_0119a950
 */


void FUN_0119a950(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0x138) == 0) || (uVar1 = FUN_009fec70(), (uVar1 & 1) == 0)) {
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  lVar2 = *(long *)(param_2 + 0x138);
  *(long *)(param_1 + 8) = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *param_1 = 1;
  return;
}


