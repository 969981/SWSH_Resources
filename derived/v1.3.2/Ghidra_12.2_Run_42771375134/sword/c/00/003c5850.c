/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c5850; name: FUN_003c5850
 */


void FUN_003c5850(float param_1,float param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_3 + 0x22);
  bVar2 = 2;
  if (DAT_01d4c18c <= param_1 && DAT_01d4c18c <= param_2) {
    bVar2 = 0;
  }
  if (bVar2 != (bVar1 & 2)) {
    if (DAT_01d4c18c <= param_1 && DAT_01d4c18c <= param_2) {
      if ((bVar1 >> 2 & 1) != 0) {
        FUN_003dffd0(*(undefined8 *)(param_3 + 0x18),param_3);
        bVar1 = *(byte *)(param_3 + 0x22);
      }
      *(byte *)(param_3 + 0x22) = bVar1 & 0xfd;
    }
    else {
      *(byte *)(param_3 + 0x22) = bVar1 | 2;
      if ((*(byte *)(*(long *)(param_3 + 0x1c) + 0x25) >> 6 & 1) != 0) {
        FUN_003dff80(*(undefined8 *)(param_3 + 0x18),param_3);
      }
    }
  }
  *param_3 = param_1;
  param_3[1] = param_2;
  return;
}


