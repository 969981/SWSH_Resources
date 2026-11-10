/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092d970; name: FUN_0092d970
 */


bool FUN_0092d970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_0093b420(param_3);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,3,uVar1);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,iVar3);
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      FUN_0093b2c0(param_3,iVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar5,iVar4 + 6,uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xbe);
  cVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  if (cVar2 == '\0') {
    FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xbf);
  }
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return cVar2 == '\0';
}


