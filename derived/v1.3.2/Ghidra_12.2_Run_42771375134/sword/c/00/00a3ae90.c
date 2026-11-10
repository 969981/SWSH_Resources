/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a3ae90; name: FUN_00a3ae90
 */


void FUN_00a3ae90(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_48;
  
  uVar3 = FUN_016b8210(*(undefined8 *)(param_1 + 0x630),(long *)(param_1 + 0x638));
  if ((uVar3 & 1) == 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 0x630);
      local_48 = 0;
      FUN_016b7700(uVar4,&DAT_0262deb8 + lVar6,&local_48,0);
      uVar2 = FUN_016b8210(uVar4,&local_48);
      uVar5 = uVar5 + (~uVar2 & 1);
      if ((uVar2 & 1) != 0) break;
      bVar1 = lVar6 != 0xa8;
      lVar6 = lVar6 + 0x18;
    } while (bVar1);
    *(long *)(param_1 + 0x638) = (ulong)uVar5 << 0x20;
  }
  return;
}


