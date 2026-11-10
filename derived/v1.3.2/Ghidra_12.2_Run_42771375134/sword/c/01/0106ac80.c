/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ac80; name: FUN_0106ac80
 */


void FUN_0106ac80(int *param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = param_1[0xb];
  if (3 < param_1[0xb]) {
    iVar1 = *param_1;
  }
  if (iVar1 == 1) {
    lVar2 = *(long *)PTR_DAT_02710910;
    dVar4 = (double)*(long *)(lVar2 + 0x1e0) / DAT_01cd5058;
    iVar1 = param_1[8];
    param_1[8] = iVar1 + 1;
    dVar3 = *(double *)(param_1 + 4) + dVar4;
    *(double *)(param_1 + 2) = dVar4;
    *(double *)(param_1 + 4) = dVar3;
    dVar4 = DAT_01cd5160;
    if (3 < iVar1) {
      dVar3 = dVar3 / 5.0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[8] = 0;
      *(double *)(param_1 + 6) = dVar3;
      dVar3 = dVar3 / dVar4;
      if (DAT_01cd5330 <= dVar3) {
        *(undefined4 *)(lVar2 + 0x85c0) = 0x3f4ccccd;
        *(undefined1 *)(param_1 + 9) = 1;
        param_1[10] = 0;
        return;
      }
      if ((dVar3 <= DAT_01cd5448) && (iVar1 = param_1[10], param_1[10] = iVar1 + 1, 0x1c < iVar1)) {
        *(undefined4 *)(lVar2 + 0x85c0) = 0x3f800000;
        *(undefined1 *)(param_1 + 9) = 0;
      }
    }
  }
  return;
}


