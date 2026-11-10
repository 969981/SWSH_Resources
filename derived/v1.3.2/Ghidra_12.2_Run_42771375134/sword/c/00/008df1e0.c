/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df1e0; name: FUN_008df1e0
 */


void FUN_008df1e0(long param_1,byte param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  lVar2 = param_1 + (ulong)param_2 * 0x38 + 8;
  bVar3 = FUN_00914490(lVar2);
  if (bVar3 != 0) {
    uVar7 = 0;
    do {
      bVar4 = FUN_009c9810(param_2,uVar7);
      lVar1 = param_1 + (ulong)bVar4 * 8;
      iVar5 = FUN_008e12a0(*(undefined8 *)(lVar1 + 0x120),0x13);
      if (iVar5 == 0x95) {
        FUN_00914330(lVar2,(uint)bVar3);
        uVar6 = FUN_008e0a00();
        FUN_008e1690(*(undefined8 *)(lVar1 + 0x120),uVar6);
      }
      uVar7 = uVar7 + 1;
    } while (bVar3 != uVar7);
  }
  return;
}


