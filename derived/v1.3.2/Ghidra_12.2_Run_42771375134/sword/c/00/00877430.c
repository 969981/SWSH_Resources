/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877430; name: FUN_00877430
 */


uint FUN_00877430(undefined8 param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  if (param_3 != '\0') {
    return param_2 & 0xffff | (uVar2 ^ (uint)param_1 ^ param_2 ^ (uint)(param_3 == '\x01')) << 0x10;
  }
  uVar1 = param_2 ^ 0x10000000;
  if (0xf < (uVar2 ^ (uint)param_1 & 0xfff0 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
    uVar1 = param_2;
  }
  return uVar1;
}


