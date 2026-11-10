/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080ca20; name: FUN_0080ca20
 */


undefined8 FUN_0080ca20(int *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1[10];
  iVar5 = param_1[6];
  lVar2 = *(long *)(param_1 + 2) + (long)param_1[0xb];
  iVar1 = (iVar5 - param_1[0xb]) + (*param_1 - (int)*(long *)(param_1 + 2));
  iVar3 = 0x7fffffff;
  if (param_2 <= 0x7fffffff - iVar1 && -1 < param_2) {
    iVar3 = iVar1 + param_2;
  }
  iVar1 = iVar4;
  if (iVar3 <= iVar4) {
    iVar1 = iVar3;
  }
  param_1[10] = iVar1;
  iVar3 = param_1[0xc];
  if (iVar1 <= param_1[0xc]) {
    iVar3 = iVar1;
  }
  iVar1 = iVar5 - iVar3;
  *(long *)(param_1 + 2) = lVar2;
  if (iVar1 == 0 || iVar5 < iVar3) {
    param_1[0xb] = 0;
  }
  else {
    param_1[0xb] = iVar1;
    *(long *)(param_1 + 2) = lVar2 - iVar1;
  }
  iVar1 = param_1[0xe];
  param_1[0xe] = iVar1 + -1;
  return CONCAT44(iVar1 + -1,iVar4);
}


