/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac150; name: FUN_012ac150
 */


void FUN_012ac150(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[1];
  uVar3 = *param_2;
  uVar4 = *(undefined8 *)(*param_1 + 0x58);
  uVar2 = FUN_012ad880(*(undefined8 *)param_1[2]);
  FUN_01861b50(uVar4,uVar3,lVar1,uVar2);
  return;
}


