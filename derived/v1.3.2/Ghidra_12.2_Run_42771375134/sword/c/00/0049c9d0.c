/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049c9d0; name: FUN_0049c9d0
 */


void FUN_0049c9d0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                 ulong param_5)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  size_t __n;
  undefined8 *__dest;
  undefined4 *apuStack_70 [4];
  
  uVar1 = *param_3;
  apuStack_70[3] = param_3 + 8;
  apuStack_70[1] = (undefined4 *)(PTR_DAT_02713380 + 0x10);
  ppuVar2 = apuStack_70 + 1;
  if ((param_5 & 1) == 0) {
    ppuVar2 = (undefined4 **)0x0;
  }
  if (param_3[0x14] != 0) {
    __n = (ulong)(uint)param_3[0x14] * 8;
    __dest = (undefined8 *)((long)apuStack_70 - (__n + 0xf & 0xffffffff0));
    apuStack_70[2] = (undefined4 *)param_4;
    memcpy(__dest,*(void **)(param_3 + 0x12),__n);
    do {
      FUN_0049ca90(param_1,param_2,*__dest,uVar1,param_4,ppuVar2);
      __n = __n - 8;
      __dest = __dest + 1;
    } while (__n != 0);
  }
  return;
}


