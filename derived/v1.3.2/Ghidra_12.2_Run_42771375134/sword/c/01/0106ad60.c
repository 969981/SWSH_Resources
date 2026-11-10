/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ad60; name: FUN_0106ad60
 */


void FUN_0106ad60(int *param_1,int param_2)

{
  int iVar1;
  
  if (*param_1 != param_2) {
    iVar1 = param_1[0xb];
    if (3 < param_1[0xb]) {
      iVar1 = param_2;
    }
    *param_1 = param_2;
    if (iVar1 == 3) {
      *(undefined4 *)(*(long *)PTR_DAT_02710910 + 0x85c0) = 0x3a83126f;
      return;
    }
    if (iVar1 == 2) {
      *(undefined4 *)(*(long *)PTR_DAT_02710910 + 0x85c0) = 0x3f4ccccd;
      return;
    }
    *(undefined4 *)(*(long *)PTR_DAT_02710910 + 0x85c0) = 0x3f800000;
    param_1[10] = 0;
    *(undefined8 *)((long)param_1 + 0x1d) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}


