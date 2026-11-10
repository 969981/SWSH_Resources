/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092d060; name: FUN_0092d060
 */


void FUN_0092d060(long param_1,undefined8 param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar2 = *param_3;
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_008e0a00(param_2);
  FUN_008db3f0(uVar5,2,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x3a,uVar2);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x3b,0);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x3c,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x15);
  uVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x3a);
  iVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x3b);
  iVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x3c);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if (iVar3 != 0 || iVar4 != 0) {
    if (iVar4 != 0) {
      uVar2 = 0;
    }
    *param_3 = uVar2;
  }
  return;
}


