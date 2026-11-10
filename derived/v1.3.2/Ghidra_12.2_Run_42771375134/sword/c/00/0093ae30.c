/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093ae30; name: FUN_0093ae30
 */


void FUN_0093ae30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  iVar2 = FUN_0093b430(param_3);
  uVar3 = FUN_008e0a00(param_2);
  uVar1 = FUN_00913e70(param_4,uVar3);
  *(undefined1 *)(param_1 + 4) = uVar1;
  *(undefined1 *)(param_1 + 5) = 5;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (((iVar2 == 1) && (iVar2 = FUN_0093b420(param_3), iVar2 != 0)) &&
     (lVar4 = FUN_0093b2c0(param_3,0), lVar4 != 0)) {
    uVar3 = FUN_008e0a00();
    uVar1 = FUN_00913e70(param_4,uVar3);
    *(undefined1 *)(param_1 + 5) = uVar1;
  }
  return;
}


