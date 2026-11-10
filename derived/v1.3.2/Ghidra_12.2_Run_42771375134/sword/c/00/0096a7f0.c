/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096a7f0; name: FUN_0096a7f0
 */


void FUN_0096a7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 auStack_28 [8];
  
  if (param_6 == 2) {
    local_34 = 1;
    local_50 = param_4;
    local_48 = param_2;
    uStack_40 = param_3;
    local_38 = param_5;
    FUN_00942450(param_1);
    uVar2 = FUN_00925e40();
    FUN_00966da0(uVar2,auStack_28,&local_50);
  }
  else {
    if (param_6 == 1) {
      uVar2 = FUN_009423b0(param_1);
      uVar1 = FUN_008e0a00(param_3);
      FUN_009360c0(uVar2,0x120,uVar1);
    }
    else {
      if (param_6 != 0) {
        return;
      }
      FUN_009423b0(param_1);
      FUN_009366b0();
    }
    lVar3 = FUN_00942400(param_1);
    *(undefined1 *)(lVar3 + 0x34) = 1;
  }
  return;
}


