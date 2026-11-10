/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b8660; name: FUN_011b8660
 */


void FUN_011b8660(long *param_1)

{
  long lVar1;
  
  if ((*param_1 != 0) && (lVar1 = *(long *)(*param_1 + 0x60), lVar1 != 0)) {
    FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  }
  if ((param_1[1] != 0) && (lVar1 = *(long *)(param_1[1] + 0x60), lVar1 != 0)) {
    FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  }
  if ((param_1[2] != 0) && (lVar1 = *(long *)(param_1[2] + 0x60), lVar1 != 0)) {
    FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  }
  if ((param_1[3] != 0) && (lVar1 = *(long *)(param_1[3] + 0x60), lVar1 != 0)) {
    FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  }
  if ((param_1[4] != 0) && (lVar1 = *(long *)(param_1[4] + 0x60), lVar1 != 0)) {
    FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  }
  if ((param_1[5] == 0) || (lVar1 = *(long *)(param_1[5] + 0x60), lVar1 == 0)) {
    return;
  }
  FUN_0154b770(*(undefined4 *)(lVar1 + 0xc));
  return;
}


