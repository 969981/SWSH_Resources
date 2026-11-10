/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a8320; name: FUN_009a8320
 */


void FUN_009a8320(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 local_90;
  undefined1 auStack_68 [40];
  undefined1 auStack_38 [8];
  
  FUN_00943e60(auStack_68);
  uVar2 = FUN_00948570(param_3,param_4,param_2,0,auStack_68);
  if ((uVar2 & 1) != 0) {
    local_90 = 0x1f;
    FUN_00943e60((ulong)&local_90 | 4);
    uVar1 = FUN_008e0a00(param_2);
    local_90 = CONCAT11(local_90._1_1_,uVar1);
    FUN_00943eb0((ulong)&local_90 | 4,auStack_68);
    FUN_00942450(param_1);
    uVar3 = FUN_009256b0();
    FUN_0094c9b0(uVar3,auStack_38,&local_90);
  }
  switch(param_3) {
  case 0xe:
    FUN_009a9120(param_1,param_2,param_4);
    break;
  case 0xf:
    uVar1 = FUN_008e0a00(param_2);
    uVar4 = 1;
    goto LAB_009a840c;
  case 0x13:
    uVar1 = FUN_008e0a00(param_2);
    uVar4 = 7;
LAB_009a840c:
    local_90 = CONCAT11(uVar4,uVar1);
    FUN_00942450(param_1);
    uVar3 = FUN_00925140();
    FUN_00944c20(uVar3,auStack_38,&local_90);
    break;
  case 0x14:
    FUN_009a9200(param_1,param_2,param_4);
  }
  return;
}


