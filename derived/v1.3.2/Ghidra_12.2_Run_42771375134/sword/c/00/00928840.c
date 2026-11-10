/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00928840; name: FUN_00928840
 */


bool FUN_00928840(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_008e1600(param_2);
  if ((uVar4 & 1) == 0) {
    FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_008e0a00(param_2);
    FUN_008db3f0(uVar5,2,uVar2);
    FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,0);
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xb);
    iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
    bVar1 = iVar3 != 0;
    FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


