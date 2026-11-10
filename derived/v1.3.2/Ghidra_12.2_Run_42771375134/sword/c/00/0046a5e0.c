/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0046a5e0; name: FUN_0046a5e0
 */


undefined8 FUN_0046a5e0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_2 * (param_3 + 3U >> 2);
  iVar1 = uVar2 * 0x20;
  if (iVar1 != (int)param_1[1]) {
    if ((int)param_1[1] != 0) {
      if (*param_1 != 0) {
        FUN_004047f0(*(undefined4 *)PTR_DAT_02712e28);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    lVar3 = FUN_00404750(*(undefined4 *)PTR_DAT_02712e28,iVar1,0x10);
    *param_1 = lVar3;
    if (lVar3 == 0) {
      return 2;
    }
    *(int *)(param_1 + 1) = iVar1;
    param_1[2] = lVar3;
    param_1[3] = lVar3 + (ulong)((uVar2 & 0x7ffffff) << 4);
  }
  return 1;
}


