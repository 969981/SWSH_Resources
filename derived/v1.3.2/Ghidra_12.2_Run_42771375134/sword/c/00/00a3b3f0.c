/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3b3f0; name: FUN_00a3b3f0
 */


void FUN_00a3b3f0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_48;
  
  *(undefined8 *)(param_1 + 0x638) = 0;
  uVar2 = FUN_016b8210(*(undefined8 *)(param_1 + 0x630),(long *)(param_1 + 0x638));
  if ((uVar2 & 1) == 0) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar3 = *(undefined8 *)(param_1 + 0x630);
      local_48 = 0;
      FUN_016b7700(uVar3,&DAT_0262deb8 + lVar5,&local_48,0);
      uVar1 = FUN_016b8210(uVar3,&local_48);
      uVar4 = uVar4 + (~uVar1 & 1);
      if (lVar5 == 0xa8) break;
      lVar5 = lVar5 + 0x18;
    } while ((uVar1 & 1) == 0);
    *(long *)(param_1 + 0x638) = (ulong)uVar4 << 0x20;
  }
  return;
}


