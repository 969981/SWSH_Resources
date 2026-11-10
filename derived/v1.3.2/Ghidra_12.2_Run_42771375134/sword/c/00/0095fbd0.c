/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0095fbd0; name: FUN_0095fbd0
 */


void FUN_0095fbd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  cVar1 = *(char *)(param_3 + 1);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x05') {
    uVar3 = FUN_008e0a00(*param_3);
    uVar2 = FUN_008f94e0();
    uVar4 = FUN_009423b0(param_1);
    FUN_00936060(uVar4,0xed,uVar3 & 0xff,uVar2);
    uVar4 = FUN_009423b0(param_1);
    FUN_0093a0c0(uVar4,uVar3,0);
    return;
  }
  if (cVar1 == '\x01') {
    uVar2 = FUN_008e0a00(*param_3);
    uVar4 = FUN_009423b0(param_1);
    FUN_009360c0(uVar4,0x2b6,uVar2);
    return;
  }
  uVar5 = *param_3;
  uVar4 = FUN_009423e0(param_1);
  FUN_0092b200(uVar4,uVar5,cVar1);
  return;
}


