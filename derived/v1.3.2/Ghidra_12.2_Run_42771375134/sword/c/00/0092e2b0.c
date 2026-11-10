/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092e2b0; name: FUN_0092e2b0
 */


bool FUN_0092e2b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar6,4,uVar2);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x29,param_3);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x89);
  uVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x29);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  bVar1 = false;
  if ((uVar3 != 0) && (iVar4 == 0)) {
    uVar5 = FUN_008ebfa0(100);
    bVar1 = uVar5 < (uVar3 & 0xff);
  }
  return bVar1;
}


