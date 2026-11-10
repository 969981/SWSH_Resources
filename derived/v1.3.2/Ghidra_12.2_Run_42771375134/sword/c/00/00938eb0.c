/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938eb0; name: FUN_00938eb0
 */


void FUN_00938eb0(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  lVar3 = FUN_008deea0(uVar2,param_2);
  if (((param_3 & 1) == 0) || (lVar3 == 0)) {
    FUN_00935bf0(param_1,param_4);
    return;
  }
  cVar1 = FUN_008e0a00(lVar3);
  if (cVar1 != '\x1f') {
    FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb7,cVar1,0);
  }
  FUN_00935bf0(param_1,param_4);
  cVar1 = FUN_008e0a00(lVar3);
  if (cVar1 == '\x1f') {
    return;
  }
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0xb8);
  return;
}


