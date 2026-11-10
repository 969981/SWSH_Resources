/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006025a0; name: FUN_006025a0
 */


ulong FUN_006025a0(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = 1;
  if (param_1 < 0) {
    iVar5 = -1;
  }
  uVar3 = -param_2;
  if (-1 < (long)param_2) {
    uVar3 = param_2;
  }
  iVar1 = -iVar5;
  if (-1 < (long)param_2) {
    iVar1 = iVar5;
  }
  if (uVar3 == 0) {
    uVar3 = 0xffffffff80000001;
    if (-1 < iVar1) {
      uVar3 = 0x7fffffff;
    }
    return uVar3;
  }
  lVar2 = -param_1;
  if (-1 < param_1) {
    lVar2 = param_1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = ((uVar3 >> 1) + lVar2 * 0x10000) / uVar3;
  }
  uVar3 = -uVar4;
  if (-1 < iVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}


