/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8af0; name: FUN_005b8af0
 */


undefined8
FUN_005b8af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5,uint param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_005b82f0(*(undefined8 *)(param_5 + 0x40),*(undefined8 *)(param_5 + 0x48),param_6 & 1);
  if (-1 < (int)uVar2) {
    lVar1 = param_5 + (long)(*(int *)(param_5 + 0x50) % 0x11) * 4;
    uVar2 = 0;
    *(undefined4 *)(lVar1 + 1000) = param_1;
    *(undefined4 *)(lVar1 + 0x42c) = param_2;
    *(undefined4 *)(lVar1 + 0x470) = param_3;
    *(undefined4 *)(lVar1 + 0x4b4) = param_4;
    *(undefined1 *)(param_5 + 0x54) = 1;
  }
  return uVar2;
}


