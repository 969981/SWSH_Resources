/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00602520; name: FUN_00602520
 */


ulong FUN_00602520(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  
  iVar6 = 1;
  if (param_1 < 0) {
    iVar6 = -1;
  }
  iVar1 = -iVar6;
  if (-1 < param_2) {
    iVar1 = iVar6;
  }
  uVar4 = -param_3;
  if (-1 < (long)param_3) {
    uVar4 = param_3;
  }
  iVar6 = -iVar1;
  if (-1 < (long)param_3) {
    iVar6 = iVar1;
  }
  if (uVar4 == 0) {
    uVar4 = 0xffffffff80000001;
    if (-1 < iVar6) {
      uVar4 = 0x7fffffff;
    }
    return uVar4;
  }
  lVar2 = -param_2;
  if (-1 < param_2) {
    lVar2 = param_2;
  }
  lVar3 = -param_1;
  if (-1 < param_1) {
    lVar3 = param_1;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = (ulong)(lVar2 * lVar3) / uVar4;
  }
  uVar4 = -uVar5;
  if (-1 < iVar6) {
    uVar4 = uVar5;
  }
  return uVar4;
}


