/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040b770; name: FUN_0040b770
 */


void FUN_0040b770(long param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x38) = param_2;
  if (param_4 < iVar1) {
    dVar3 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
    dVar3 = ((double)(param_4 - iVar1) * DAT_01cd51e8) / dVar3;
    dVar2 = 0.5;
    if (dVar3 <= 0.0) {
      dVar2 = -0.5;
    }
    *(int *)(param_1 + 0x38) = (int)(dVar2 + dVar3) + param_2;
    param_4 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x3c) = param_3;
  *(int *)(param_1 + 0x34) = param_4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 2;
  return;
}


