/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a9120; name: FUN_009a9120
 */


void FUN_009a9120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined1 auStack_68 [40];
  undefined1 auStack_38 [8];
  
  iVar2 = FUN_008ebfd0(2,4);
  if ((0 < iVar2) && (iVar3 = FUN_008e19f0(param_2), iVar3 == 0)) {
    uVar4 = FUN_008ed480(param_3);
    uVar1 = FUN_008e0a00(param_2);
    local_80 = 0x1f1f;
    local_74 = 0;
    uStack_70 = 0;
    local_7c = 0;
    uStack_78 = 0;
    local_6c = 1;
    FUN_00943e60(auStack_68);
    local_80 = CONCAT11(uVar1,uVar1);
    uStack_70 = CONCAT13(1,(undefined3)uStack_70);
    local_7c = 2;
    uVar5 = FUN_008ed0b0(uVar4,iVar2);
    uStack_78 = (undefined4)uVar5;
    local_74 = (undefined4)((ulong)uVar5 >> 0x20);
    FUN_00942450(param_1);
    uVar5 = FUN_009254c0();
    FUN_009440e0(uVar5,auStack_38,&local_80);
  }
  return;
}


