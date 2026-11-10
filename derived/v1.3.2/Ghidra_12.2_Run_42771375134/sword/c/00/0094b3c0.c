/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094b3c0; name: FUN_0094b3c0
 */


void FUN_0094b3c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  FUN_008e0a00(param_2);
  cVar1 = FUN_008f94e0();
  FUN_00942380(param_1);
  cVar2 = FUN_008f98a0();
  if (cVar1 == cVar2) {
    iVar3 = FUN_008e12a0(param_2,0x11);
    iVar4 = FUN_0094b6a0(param_1);
    uVar5 = FUN_00942380(param_1);
    FUN_008f9e50(uVar5,param_2,iVar3 + 0x1e <= iVar4);
    return;
  }
  return;
}


