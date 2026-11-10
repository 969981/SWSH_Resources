/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f6890; name: FUN_014f6890
 */


void FUN_014f6890(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_30 [2];
  
  lVar1 = *(long *)(param_2 + 0x460);
  local_30[0] = param_1;
  FUN_0075e340(lVar1 + 0xc0,local_30);
  *(undefined1 *)(lVar1 + 0xf0) = 1;
  return;
}


