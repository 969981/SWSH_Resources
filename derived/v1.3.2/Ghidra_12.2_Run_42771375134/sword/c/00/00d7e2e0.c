/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7e2e0; name: FUN_00d7e2e0
 */


uint FUN_00d7e2e0(long param_1,undefined4 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  switch(*param_2) {
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
    local_18 = 0x6b55fe6e3b77bc99;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 6:
    local_18 = 0xa88c4e4ef06f301a;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 7:
    local_18 = 0x44d9cd21b9561d63;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
    break;
  case 8:
    local_18 = 0x45724f4de5b1eb50;
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


