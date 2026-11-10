/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db42e0; name: FUN_00db42e0
 */


void FUN_00db42e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined1 auStack_18 [8];
  
  if ((param_3 & 1) == 0) {
    FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,param_2);
    return;
  }
  lVar1 = FUN_00ad9f80(param_1,auStack_18);
  if (lVar1 != 0) {
    FUN_00c54fc0(*(undefined8 *)(lVar1 + 0xc0),param_2);
  }
  return;
}


