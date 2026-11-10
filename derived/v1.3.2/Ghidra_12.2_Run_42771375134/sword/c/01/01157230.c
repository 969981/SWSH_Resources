/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01157230; name: FUN_01157230
 */


void FUN_01157230(undefined8 *param_1,long param_2)

{
  if ((*(long *)(param_2 + 0xa0) == 0) || (*(long *)(*(long *)(param_2 + 0xa0) + 0x708) == 0)) {
    *param_1 = 0xcbf29ce484222645;
    param_1[1] = &DAT_01d38550;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  FUN_0103e780();
  FUN_0103eaa0(param_1,*(undefined8 *)(*(long *)(param_2 + 0xa0) + 0x708));
  return;
}


