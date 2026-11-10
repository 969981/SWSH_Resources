/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092b370; name: FUN_0092b370
 */


void FUN_0092b370(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_0093b420(param_4);
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar4,3,uVar1);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x12,*param_3);
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),0x16,*(undefined1 *)((long)param_3 + 0xe));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),5,iVar2);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      FUN_0093b2c0(param_4,iVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      uVar1 = FUN_008e0a00();
      FUN_008db3f0(uVar4,iVar3 + 6,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar2 != iVar3);
  }
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0xa3);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  return;
}


