/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012abef0; name: FUN_012abef0
 */


void FUN_012abef0(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined4 *)param_1[1];
  uVar5 = *param_2;
  uVar6 = *(undefined8 *)(*param_1 + 0x58);
  uVar2 = *(undefined4 *)param_1[2];
  uVar3 = *(undefined4 *)(*param_1 + 0xfc);
  uVar4 = FUN_012ad550(*(undefined8 *)param_1[3]);
  FUN_01861200(uVar6,uVar5,uVar1,uVar2,uVar3,uVar4);
  return;
}


