/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00912390; name: FUN_00912390
 */


undefined1 FUN_00912390(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_009123f0();
  if (cVar1 == '\x02') {
    return 2;
  }
  uVar3 = FUN_008f98a0(param_1);
  cVar2 = FUN_008f8ca0(param_1,uVar3);
  return cVar1 == cVar2;
}


