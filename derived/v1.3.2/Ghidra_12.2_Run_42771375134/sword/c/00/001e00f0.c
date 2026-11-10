/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e00f0; name: FUN_001e00f0
 */


void FUN_001e00f0(long *param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_2 + 0xb) & 0xf) * 8 + 0x30) +
              param_2;
  }
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = *(uint *)(param_1 + 1);
  }
  else {
    param_3 = *(long *)(PTR_DAT_02711068 + (ulong)(*(byte *)(param_3 + 0xb) & 0xf) * 8 + 0x30) +
              param_3;
    uVar1 = *(uint *)(param_1 + 1);
  }
  if ((uVar1 >> 0x1e == 3) || ((uVar1 >> 0x1e == 2 && (*(char *)(*param_1 + 0x1fb9) != '\0')))) {
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)FUN_001d1a00(*param_1,uVar1 >> 0x18 & 0xf);
      param_1[2] = (long)plVar2;
    }
    *plVar2 = param_2;
    plVar2[1] = param_3;
    FUN_001d1850(*param_1,param_1);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 1;
  }
  else {
    FUN_003c15d0(param_1 + 3);
    FUN_003c1510(param_1 + 3,param_2,param_3);
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return;
}


