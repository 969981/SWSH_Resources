/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969f60; name: FUN_00969f60
 */


void FUN_00969f60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined1 local_26;
  
  iVar1 = FUN_0093b420(param_3[3]);
  if (iVar1 != 0) {
    uStack_40 = *param_3;
    local_48 = param_3[1];
    uStack_30 = param_3[2];
    local_38 = param_3[3];
    local_26 = 0;
    local_28 = 0x3a;
    FUN_00942450(param_1);
    uVar3 = FUN_00925180();
    FUN_009697e0(uVar3,auStack_50,&local_48);
    if ((param_3[4] != 0) && (uVar4 = FUN_0093b4e0(param_3[3]), (uVar4 & 1) != 0)) {
      uVar3 = FUN_009423b0(param_1);
      uVar2 = FUN_008e0a00(*param_3);
      FUN_00939090(uVar3,uVar2,2);
    }
  }
  return;
}


