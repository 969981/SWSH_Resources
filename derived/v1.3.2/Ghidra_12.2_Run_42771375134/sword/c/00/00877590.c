/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877590; name: FUN_00877590
 */


undefined2 FUN_00877590(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x1a;
  if (param_3 == '\x01') {
    uVar3 = 0x1b;
  }
  uVar1 = 0x1c;
  if (param_3 != '\x02') {
    uVar1 = uVar3;
  }
  FUN_008649f0();
  uVar2 = FUN_00864a10(uVar1);
  return uVar2;
}


