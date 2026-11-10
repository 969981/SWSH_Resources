/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be070; name: FUN_003be070
 */


void FUN_003be070(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  if (*param_1 != 0) {
    FUN_003bf980();
  }
  lVar1 = param_1[0x16];
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0xc) = *(byte *)(lVar1 + 0xc) | 4;
    if ((param_2 & 1) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0;
    }
    if ((param_3 & 1) != 0) {
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined4 *)(lVar1 + 0x38) = 0;
    }
  }
  return;
}


