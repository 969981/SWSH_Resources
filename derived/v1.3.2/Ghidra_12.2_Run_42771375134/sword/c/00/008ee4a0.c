/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ee4a0; name: FUN_008ee4a0
 */


char FUN_008ee4a0(ulong param_1,ulong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2 & 0xffffffff;
  uVar6 = param_1 & 0xffffffff;
  iVar2 = FUN_008ee550(param_1,param_2,0);
  iVar3 = FUN_008ee550(uVar6,uVar5,1);
  cVar4 = '\x02';
  if (iVar3 != param_3) {
    cVar4 = '\x01';
  }
  cVar1 = iVar3 == param_3;
  if (iVar2 == param_3) {
    cVar1 = cVar4;
  }
  iVar2 = FUN_008ee550(uVar6,uVar5,2);
  if (iVar2 == param_3) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_008ee550(uVar6,uVar5,3);
  if (iVar2 == param_3) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_008ee550(uVar6,uVar5,4);
  if (iVar2 == param_3) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


