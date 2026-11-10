/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aebf0; name: FUN_014aebf0
 */


bool FUN_014aebf0(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar3 = FUN_008783b0();
  uVar4 = FUN_008783c0(param_1);
  uVar5 = FUN_014ae9f0(uVar3,uVar4);
  bVar2 = (uVar5 & 0xff) == 0;
  if (bVar2) {
    uVar5 = FUN_008797f0(param_1);
  }
  else {
    FUN_0087df30(param_1,uVar5 >> 0x10 & 0xffff,0);
    uVar5 = FUN_008797f0(param_1);
  }
  bVar1 = (uVar5 & 1) != 0;
  if (bVar1) {
    FUN_008797a0(param_1,0);
  }
  return bVar1 || !bVar2;
}


