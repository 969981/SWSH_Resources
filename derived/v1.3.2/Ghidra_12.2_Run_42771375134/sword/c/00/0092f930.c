/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0092f930; name: FUN_0092f930
 */


void FUN_0092f930(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_0092f210();
  if ((uVar3 & 1) != 0) {
    bVar1 = FUN_008f35c0(param_1,0x1000);
    if ((param_4 != 8) && ((param_4 != 10) != (bool)(param_4 == 5 & bVar1))) {
      return;
    }
  }
  uVar4 = FUN_00931a70(param_2);
  iVar2 = FUN_0092fc70(uVar4,param_4,param_5,param_6,param_7);
  if (iVar2 < 0) {
    return;
  }
  FUN_00939fe0(param_3,iVar2,param_4);
  return;
}


