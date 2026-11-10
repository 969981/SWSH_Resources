/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec2f0; name: FUN_008ec2f0
 */


uint FUN_008ec2f0(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if (((param_3 & 1) == 0) || (uVar3 = FUN_008e0a10(param_1), (uVar3 & 1) == 0)) {
    uVar4 = 0xf;
  }
  else {
    uVar4 = 0x10;
  }
  uVar2 = FUN_008e12a0(param_1,uVar4);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = uVar2 / param_2;
  }
  if (uVar2 < param_2) {
    uVar1 = 1;
  }
  return uVar1;
}


