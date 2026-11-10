/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01073950; name: FUN_01073950
 */


uint FUN_01073950(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  switch(param_2) {
  case 1:
    local_18 = 0xbf2bb2531b7cde14;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 2:
    local_18 = 0x3b8f5513c2470901;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 3:
    local_18 = 0xd5a646e9eb5de80c;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 4:
    local_18 = 0x31b5f77ad1a1d139;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 5:
    local_18 = 0x5e136fde17d5ef80;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 6:
    local_18 = 0xc31262628b00dd05;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  default:
    local_18 = 0x8e89686f5660e8f;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_0167bc20(lVar2,&local_18);
  return uVar1 & 1;
}


