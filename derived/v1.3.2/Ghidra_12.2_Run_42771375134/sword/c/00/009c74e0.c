/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c74e0; name: FUN_009c74e0
 */


ulong FUN_009c74e0(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  uint param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = FUN_00965a90(param_2,param_3,param_4 & 1,param_5 & 1,param_6);
  if (iVar1 - 0x1cU < 3) {
    return 0xa0;
  }
  if ((param_4 & 1) == 0) {
    uVar3 = FUN_00880ab0(param_6);
    return uVar3;
  }
  uVar2 = FUN_00881040();
  return (ulong)(uVar2 & 0xff);
}


