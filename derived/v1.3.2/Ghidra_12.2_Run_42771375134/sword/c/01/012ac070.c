/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ac070; name: FUN_012ac070
 */


void FUN_012ac070(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[1];
  uVar5 = *(undefined8 *)(*param_1 + 0x58);
  uVar4 = *param_2;
  uVar2 = *(undefined4 *)param_1[2];
  uVar3 = FUN_012ad6a0(*(undefined8 *)param_1[3]);
  FUN_018618f0(uVar5,uVar4,lVar1,uVar2,uVar3);
  return;
}


