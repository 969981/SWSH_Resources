/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6940; name: FUN_008a6940
 */


byte FUN_008a6940(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = FUN_016a6a70(*(undefined8 *)(param_1 + 0xb0));
  bVar1 = FUN_016a7880(*(undefined8 *)(param_1 + 0xb8));
  bVar2 = FUN_01689f40(*(undefined8 *)(param_1 + 0x138));
  bVar3 = FUN_01689f40(*(undefined8 *)(param_1 + 0x140));
  return iVar4 == 1 & bVar1 & bVar2 & bVar3;
}


