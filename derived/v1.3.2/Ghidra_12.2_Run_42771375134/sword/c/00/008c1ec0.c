/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c1ec0; name: FUN_008c1ec0
 */


uint FUN_008c1ec0(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_18;
  
  if (param_2 == 1) {
    local_18 = 0x31b5f77ad1a1d139;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
  }
  else {
    if (param_2 != 0) {
      return 1;
    }
    local_18 = 0xd5a646e9eb5de80c;
    lVar2 = *(long *)(param_1 + 0x2b0);
    if (lVar2 == 0) {
      return 1;
    }
  }
  uVar1 = FUN_0167bc20(lVar2,&local_18);
  return uVar1 & 1;
}


