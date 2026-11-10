/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012abe40; name: FUN_012abe40
 */


void FUN_012abe40(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = *(undefined8 *)(*param_1 + 0x58);
  uVar1 = FUN_012ad4d0(*(undefined8 *)param_1[1]);
  FUN_01861050(uVar3,uVar2,uVar1);
  return;
}


