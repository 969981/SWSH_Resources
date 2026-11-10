/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885df0; name: FUN_00885df0
 */


void FUN_00885df0(long param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  short *psVar2;
  
  uVar1 = FUN_0087f600(param_2,param_3);
  memcpy((void *)(param_1 + 0xe),(void *)(*(long *)PTR_DAT_02717418 + (uVar1 & 0xffffffff) * 0x104),
         0x104);
  uVar1 = 0;
  psVar2 = (short *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = param_2;
  *(short *)(param_1 + 0xc) = (short)param_3;
  do {
    if ((psVar2[-1] == -1) && (*psVar2 == -1)) break;
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 2;
  } while (uVar1 < 0x41);
  *(char *)(param_1 + 0x112) = (char)uVar1;
  return;
}


