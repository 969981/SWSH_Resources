/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00767f00; name: FUN_00767f00
 */


void FUN_00767f00(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[5] = 0x8000;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined8 *)((long)param_1 + 0x2ac) = 0x20000bb80;
  param_1[0x57] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar2 == 0) {
    param_1[0x58] = 0;
    return;
  }
  uVar3 = 0;
  if (*(long *)(lVar2 + 0x80) != 0) {
    uVar3 = *(undefined8 *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
  }
  param_1[0x58] = uVar3;
  return;
}


