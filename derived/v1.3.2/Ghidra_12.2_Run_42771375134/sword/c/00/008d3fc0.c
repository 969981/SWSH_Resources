/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d3fc0; name: FUN_008d3fc0
 */


uint FUN_008d3fc0(undefined1 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 2;
  switch(param_1) {
  case 1:
    return param_2 & 1;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 7:
    return 6;
  case 8:
    return 7;
  case 9:
    return 8;
  case 10:
    uVar1 = 9;
  }
  return uVar1;
}


