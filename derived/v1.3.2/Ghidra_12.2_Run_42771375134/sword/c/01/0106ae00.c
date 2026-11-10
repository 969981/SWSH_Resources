/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ae00; name: FUN_0106ae00
 */


void FUN_0106ae00(int *param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_02710910;
  if ((param_2 & 1) == 0) {
    if (param_1[0xb] != 4) {
      param_1[0xb] = 4;
      if (*param_1 == 3) {
        lVar2 = *(long *)PTR_DAT_02710910;
        goto LAB_0106ae78;
      }
      if (*param_1 == 2) {
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
  }
  else if (param_1[0xb] != 3) {
    param_1[0xb] = 3;
    lVar2 = *(long *)puVar1;
LAB_0106ae78:
    *(undefined4 *)(lVar2 + 0x85c0) = 0x3a83126f;
    return;
  }
  return;
}


