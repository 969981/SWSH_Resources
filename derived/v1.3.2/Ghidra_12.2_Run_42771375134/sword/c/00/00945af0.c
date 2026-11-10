/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00945af0; name: FUN_00945af0
 */


ulong FUN_00945af0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  byte local_38 [8];
  
  uVar3 = FUN_009425f0();
  uVar1 = FUN_009141c0();
  uVar4 = FUN_00942380(param_1);
  uVar2 = FUN_008f9fc0(uVar4,param_2);
  uVar2 = uVar2 & 0xff;
  if (uVar2 < (uVar1 & 0xff)) {
    uVar6 = 0;
    do {
      FUN_00914330(uVar3,uVar2);
      uVar5 = FUN_008e18d0();
      if ((uVar5 & 1) != 0) {
        local_38[uVar6] = (byte)uVar2;
        uVar6 = (ulong)((int)uVar6 + 1);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar1 & 0xff) != uVar2);
    if ((int)uVar6 != 0) {
      uVar6 = FUN_008ebfa0(uVar6);
      return (ulong)local_38[uVar6 & 0xffffffff];
    }
  }
  return 0xffffffff;
}


