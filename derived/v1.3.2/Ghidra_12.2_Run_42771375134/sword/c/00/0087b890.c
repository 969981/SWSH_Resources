/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087b890; name: FUN_0087b890
 */


char FUN_0087b890(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  iVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),0);
  iVar3 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),1);
  cVar4 = '\x02';
  if (iVar3 == 0) {
    cVar4 = '\x01';
  }
  cVar1 = iVar3 != 0;
  if (iVar2 != 0) {
    cVar1 = cVar4;
  }
  iVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),2);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  iVar2 = FUN_00869ee0(*(undefined8 *)(param_1 + 0x98),3);
  if (iVar2 != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


