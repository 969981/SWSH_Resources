/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a4820; name: FUN_009a4820
 */


void FUN_009a4820(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = FUN_00942510(param_1,2,0);
  sVar1 = FUN_008e1290();
  if (sVar1 == 0x378) {
    lVar5 = 0;
  }
  else {
    if (sVar1 != 0x379) goto LAB_009a489c;
    lVar5 = 1;
  }
  uVar4 = FUN_009423b0(param_1);
  uVar2 = FUN_008e0a00(uVar3);
  FUN_00938360(uVar4,uVar2,(&UNK_01d4a834)[lVar5 * 8],1);
LAB_009a489c:
  uVar3 = FUN_00942510(param_1,3,0);
  sVar1 = FUN_008e1290();
  if (sVar1 == 0x378) {
    lVar5 = 0;
  }
  else {
    if (sVar1 != 0x379) {
      return;
    }
    lVar5 = 1;
  }
  uVar4 = FUN_009423b0(param_1);
  uVar2 = FUN_008e0a00(uVar3);
  FUN_00938360(uVar4,uVar2,(&UNK_01d4a834)[lVar5 * 8],1);
  return;
}


