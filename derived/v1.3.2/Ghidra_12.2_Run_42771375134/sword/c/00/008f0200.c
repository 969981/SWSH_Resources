/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f0200; name: FUN_008f0200
 */


bool FUN_008f0200(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = FUN_008eef90();
  cVar2 = FUN_008eef90(param_1,param_3);
  return cVar1 != cVar2;
}


