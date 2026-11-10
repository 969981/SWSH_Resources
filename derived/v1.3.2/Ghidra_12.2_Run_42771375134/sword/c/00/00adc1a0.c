/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00adc1a0; name: FUN_00adc1a0
 */


undefined8 FUN_00adc1a0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x350);
  iVar1 = FUN_00722fb0(lVar3);
  if ((iVar1 < 0) || (lVar3 = *(long *)(lVar3 + 0x1b8), lVar3 + (long)iVar1 * 0x130 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = lVar3 + (long)iVar1 * 0x130;
    uVar6 = *(undefined8 *)(lVar3 + 0x58);
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    auVar5 = FUN_00ac5a80(param_1);
    uVar2 = 1;
    param_3[1] = CONCAT44((float)((ulong)uVar6 >> 0x20) + auVar5._12_4_,(float)uVar6 + auVar5._8_4_)
    ;
    *param_3 = CONCAT44((float)((ulong)uVar4 >> 0x20) + auVar5._4_4_,(float)uVar4 + auVar5._0_4_);
  }
  return uVar2;
}


