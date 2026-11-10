/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a9200; name: FUN_009a9200
 */


void FUN_009a9200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined2 local_78;
  undefined4 local_76;
  undefined2 local_72;
  undefined1 local_70;
  undefined1 auStack_6c [36];
  undefined1 auStack_48 [8];
  
  uVar1 = FUN_008e0a00(param_2);
  uVar4 = (ulong)&local_78 | 4;
  local_78 = 0x1f;
  FUN_00943e60(uVar4);
  local_78 = CONCAT11(local_78._1_1_,uVar1);
  FUN_00943f20(uVar4,2,0x48c);
  FUN_00943f60(uVar4,uVar1);
  FUN_00943f60(uVar4,0);
  FUN_00942450(param_1);
  uVar3 = FUN_009256b0();
  FUN_0094c9b0(uVar3,auStack_48,&local_78);
  uVar1 = FUN_008e0a00(param_2);
  uVar2 = FUN_008ed480(param_3);
  local_78 = 0x1f1f;
  local_70 = 0;
  local_72 = 0;
  local_76 = 0;
  FUN_00943e60(auStack_6c);
  local_78 = CONCAT11(uVar1,uVar2);
  local_70 = 0x2e;
  FUN_00942450(param_1);
  uVar3 = FUN_00925690();
  FUN_0094a3d0(uVar3,auStack_48,&local_78);
  return;
}


