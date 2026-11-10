/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0144d130; name: FUN_0144d130
 */


bool FUN_0144d130(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar1 = FUN_014525d0(param_1,param_2,0);
  cVar2 = FUN_014525d0(param_1,param_2 & 0xffffffff,1);
  cVar3 = FUN_014525d0(param_1,param_2 & 0xffffffff,2);
  cVar4 = FUN_0087eca0(*param_3);
  cVar5 = FUN_0087ed40(*param_3);
  return (cVar4 == cVar3 || (cVar4 == cVar1 || cVar4 == cVar2)) ||
         (cVar5 == cVar3 || (cVar5 == cVar1 || cVar5 == cVar2));
}


