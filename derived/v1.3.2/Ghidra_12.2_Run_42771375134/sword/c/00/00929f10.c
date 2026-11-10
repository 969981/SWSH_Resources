/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00929f10; name: FUN_00929f10
 */


bool FUN_00929f10(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 char *param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar3 = FUN_0093b420(param_4);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,iVar3);
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      FUN_0093b2c0(param_4,iVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar5,iVar4 + 6,uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),2,0x1f);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),4,0x1f);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x1c);
  cVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),2);
  *param_5 = cVar2;
  uVar1 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),4);
  *param_6 = uVar1;
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return *param_5 != '\x1f';
}


