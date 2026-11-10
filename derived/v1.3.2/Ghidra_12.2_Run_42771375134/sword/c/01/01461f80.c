/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01461f80; name: FUN_01461f80
 */


void FUN_01461f80(long param_1,uint param_2)

{
  ulong local_18;
  
  if (4 < param_2) {
    return;
  }
  param_1 = param_1 + 0x100;
  switch(param_2) {
  case 0:
    local_18 = 0xf81e7bf3cb040083;
    FUN_00ffd010(param_1,&local_18);
    local_18 = 0x52efb4342c059e3d;
    goto LAB_01462048;
  case 1:
    local_18 = 0x7cf3cb040236;
    break;
  case 2:
    local_18 = 0x7df3cb0403e9;
    break;
  case 3:
    local_18 = 0xbef0218fb26;
    goto LAB_01462044;
  case 4:
    local_18 = 0xaef0218f973;
LAB_01462044:
    local_18 = local_18 | 0x5838000000000000;
    goto LAB_01462048;
  }
  local_18 = local_18 | 0xf81e000000000000;
  FUN_00ffd010(param_1,&local_18);
  local_18 = 0x52efb1342c059924;
LAB_01462048:
  FUN_00ffd010(param_1,&local_18);
  return;
}


