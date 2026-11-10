/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00938c70; name: FUN_00938c70
 */


void FUN_00938c70(long param_1,undefined8 param_2,uint param_3,undefined1 param_4,undefined1 param_5
                 )

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_008e0a00(param_2);
  uVar2 = FUN_00880ae0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_00931920(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_008f9470(uVar1,uVar5,uVar4);
  FUN_00916b10(*(undefined8 *)(param_1 + 0x18),0x87,uVar3,param_4,param_3 & 0xffff,uVar2,0,0,0,0,
               param_5);
  return;
}


