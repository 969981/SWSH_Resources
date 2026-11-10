/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00956750; name: FUN_00956750
 */


undefined8 FUN_00956750(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if ((uVar1 == (param_2 & 0xff)) && (uVar4 = FUN_0093eb90(param_1,0x31), (uVar4 & 1) != 0)) {
    uVar5 = FUN_0093ec60(param_1,param_2);
    iVar2 = FUN_008e12a0(uVar5,0x13);
    uVar1 = FUN_008e12a0(uVar5,0xf);
    if (1 < uVar1) {
      param_3 = param_3 >> (ulong)(2 < param_3 && iVar2 == 0x52);
      if (param_3 == 0) {
        param_3 = 1;
      }
      uVar1 = FUN_008e12a0(uVar5,0xd);
      uVar3 = FUN_008ec2a0(uVar5,param_3,0);
      if (uVar1 <= uVar3) {
        return 1;
      }
    }
  }
  return 0;
}


