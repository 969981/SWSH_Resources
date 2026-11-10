/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008770e0; name: FUN_008770e0
 */


ulong FUN_008770e0(uint param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (((param_2 & 0xffff) * 2 + (param_3 & 0xffff) + ((param_4 & 0xfffc) >> 2)) *
          (param_1 & 0xff)) / 100 + 5;
  if ((&DAT_02143aa1)[(ulong)(param_6 & 0xffff) * 5] == -1) {
    iVar2 = 0x5a;
  }
  else {
    if ((&DAT_02143aa1)[(ulong)(param_6 & 0xffff) * 5] != '\x01') {
      return (ulong)uVar1;
    }
    iVar2 = 0x6e;
  }
  return (ulong)(uVar1 * iVar2 & 0xfffe) / 100;
}


