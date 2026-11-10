/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dd590; name: FUN_009dd590
 */


ulong FUN_009dd590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ushort local_2c [6];
  
  bVar1 = FUN_008fa2d0();
  if (bVar1 == 0xff) {
    uVar3 = FUN_008f35c0(param_1,0x1000);
    if ((uVar3 & 1) != 0) {
      return 0xf5;
    }
    iVar2 = FUN_008fb0c0(param_1,1);
    if ((iVar2 == 3) || (iVar2 == 5)) {
      return 0xf5;
    }
    uVar3 = FUN_008ed5b0(param_3,100);
    if (0x13 < uVar3) {
      return 0xffffffff;
    }
    local_2c[0] = 0xf6;
    local_2c[1] = 0xf7;
    local_2c[2] = 0xf8;
    local_2c[3] = 0xf9;
    local_2c[4] = 0xfa;
  }
  else {
    if (bVar1 < 0xdc) {
      if (bVar1 < 0xb4) {
        return 0xffffffff;
      }
      uVar3 = FUN_008ed5b0(param_3,100);
      if (0x13 < uVar3) {
        return 0xffffffff;
      }
      uVar5 = 4;
      local_2c[0] = 0x100;
      local_2c[1] = 0x101;
      local_2c[2] = 0x102;
      local_2c[3] = 0x103;
      goto LAB_009dd654;
    }
    uVar3 = FUN_008ed5b0(param_3,100);
    if (0x13 < uVar3) {
      return 0xffffffff;
    }
    local_2c[0] = 0xfb;
    local_2c[1] = 0xfc;
    local_2c[2] = 0xfd;
    local_2c[3] = 0xfe;
    local_2c[4] = 0xff;
  }
  uVar5 = 5;
LAB_009dd654:
  lVar4 = FUN_008ed5b0(param_3,uVar5);
  return (ulong)local_2c[lVar4];
}


