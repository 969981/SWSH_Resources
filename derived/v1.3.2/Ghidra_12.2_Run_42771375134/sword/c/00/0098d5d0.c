/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0098d5d0; name: FUN_0098d5d0
 */


void FUN_0098d5d0(undefined8 param_1,byte param_2,undefined4 param_3,undefined8 *param_4,
                 undefined1 param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined4 local_6c;
  undefined1 auStack_68 [40];
  
  uVar2 = FUN_0093eb90(param_1,4);
  if ((((uVar2 == param_2) && (iVar3 = FUN_0093eb90(param_1,0x4d), iVar3 == 0)) &&
      (iVar3 = FUN_0093eb90(param_1,99), iVar3 != 0)) && (iVar3 = FUN_008ec900(param_5), iVar3 != 0)
     ) {
    local_80 = 0x1f1f;
    local_74 = 0;
    uStack_70 = 0;
    uStack_6f = 0;
    uStack_6e = 0;
    uStack_6d = 0;
    local_7c = 0;
    uStack_78 = 0;
    local_6c = 1;
    FUN_00943e60(auStack_68);
    local_80 = CONCAT11(local_80._1_1_,param_2);
    uStack_6e = 1;
    uStack_70 = 1;
    uStack_6d = 0;
    uStack_78 = (undefined4)*param_4;
    local_74 = (undefined4)((ulong)*param_4 >> 0x20);
    local_7c = param_3;
    uVar1 = FUN_0093eb90(param_1,3);
    local_80 = CONCAT11(uVar1,(undefined1)local_80);
    FUN_0093f310(param_1,&local_80);
  }
  return;
}


