/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00901fa0; name: FUN_00901fa0
 */


undefined8 FUN_00901fa0(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_008fade0(*(undefined8 *)(param_1 + 0x58));
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00931920(*(undefined8 *)(param_1 + 0x70));
    uVar4 = FUN_008df3c0(uVar4,param_2 & 0xff);
    cVar1 = FUN_009141d0();
    if (cVar1 == '\x01') {
      uVar4 = FUN_00914330(uVar4,0);
      uVar3 = FUN_008e1600();
      if (((uVar3 & 1) == 0) && (iVar2 = FUN_008e2f00(uVar4), iVar2 < 0x32001)) {
        uVar4 = FUN_009c9ad0(*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x68),
                             param_2,2);
        return uVar4;
      }
    }
  }
  return 0;
}


