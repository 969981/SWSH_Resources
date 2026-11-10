/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00906990; name: FUN_00906990
 */


void FUN_00906990(long param_1)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  
  cVar1 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),0);
  cVar2 = FUN_008f9910(*(undefined8 *)(param_1 + 0x58),1);
  if (cVar1 == cVar2) {
    FUN_009c7ca0(param_1 + 0x574,1,0x33);
    FUN_009c7cd0(param_1 + 0x574,cVar1);
    return;
  }
  uVar3 = FUN_008fb0a0(*(undefined8 *)(param_1 + 0x58),cVar1);
  uVar4 = FUN_008fb0a0(*(undefined8 *)(param_1 + 0x58),cVar2);
  iVar5 = FUN_01622cc0(uVar3,uVar4);
  param_1 = param_1 + 0x574;
  if (iVar5 == -1) {
    FUN_009c7ca0(param_1,1,0x34);
  }
  else {
    FUN_009c7ca0(param_1,1,0x16e);
    FUN_009c7cd0(param_1,iVar5);
  }
  FUN_009c7cd0(param_1,cVar1);
  FUN_009c7cd0(param_1,cVar2);
  return;
}


