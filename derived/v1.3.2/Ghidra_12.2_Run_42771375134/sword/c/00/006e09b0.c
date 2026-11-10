/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e09b0; name: FUN_006e09b0
 */


float FUN_006e09b0(long param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  iVar2 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x150));
  iVar3 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x150));
  iVar4 = FUN_006f8330(*(undefined8 *)(param_1 + 0x150));
  lVar6 = *(long *)(param_1 + 0x148);
  iVar1 = *(int *)PTR_DAT_02715500;
  *(int *)(lVar6 + 0x138) = iVar1;
  FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar6);
  lVar6 = lVar6 + (long)iVar1 * 0x70 + 0x58;
  lVar5 = thunk_FUN_0199c7e0(lVar6);
  fVar7 = *(float *)(lVar5 + (long)(param_2 + iVar2 * param_3 + iVar3 * param_4 * iVar4) * 4);
  if (*(int *)(param_1 + 0x158) == 0x1307) {
    fVar7 = (float)((uint)fVar7 >> 8) / DAT_01d4c334;
  }
  thunk_FUN_0199c800(lVar6);
  return fVar7 + fVar7 + -1.0;
}


