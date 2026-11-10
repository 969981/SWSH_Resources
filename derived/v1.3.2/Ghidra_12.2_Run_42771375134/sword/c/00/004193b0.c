/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004193b0; name: FUN_004193b0
 */


int FUN_004193b0(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_160 [264];
  long local_58;
  long lStack_50;
  
  FUN_00418860(auStack_160,param_1,1);
  while (local_58 != param_2) {
    (**(code **)(*param_1 + 0x98))(param_1,auStack_160,1);
  }
  uVar3 = *(undefined8 *)(param_1[0xc] + 8);
  iVar1 = FUN_0040b100(param_1);
  if (*(long *)(local_58 + 0x18) == 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = FUN_00419150(auStack_160,0);
    iVar1 = *(int *)(lStack_50 + 0x88) + ((((int)uVar3 - iVar1) - iVar2) - *(int *)(local_58 + 8));
  }
  FUN_004188d0(auStack_160);
  return iVar1;
}


