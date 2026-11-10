/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073af0; name: FUN_01073af0
 */


void FUN_01073af0(long param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = FUN_0106f480(*(undefined8 *)(*(long *)(param_1 + 0x5d0) + 0x60));
  bVar1 = cVar2 != '\x01' & param_2;
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5f8),bVar1);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x600),bVar1);
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x688),param_2 & 1,1);
  return;
}


