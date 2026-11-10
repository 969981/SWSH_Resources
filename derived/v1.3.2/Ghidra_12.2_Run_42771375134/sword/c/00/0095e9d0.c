/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095e9d0; name: FUN_0095e9d0
 */


void FUN_0095e9d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_0093b2e0(param_2);
  while( true ) {
    lVar2 = FUN_0093b2f0(param_2);
    uVar3 = FUN_00942380(param_1);
    uVar4 = FUN_00942390(param_1);
    uVar5 = FUN_009423b0(param_1);
    if (lVar2 == 0) break;
    uVar1 = FUN_008e0a00(lVar2);
    FUN_0092f930(uVar3,uVar4,uVar5,2,uVar1,0,0);
  }
  FUN_0092f930(uVar3,uVar4,uVar5,5,0x1f,0,0);
  return;
}


