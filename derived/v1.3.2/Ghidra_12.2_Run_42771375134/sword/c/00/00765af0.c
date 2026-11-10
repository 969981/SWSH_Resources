/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00765af0; name: FUN_00765af0
 */


void FUN_00765af0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1[3] = 0x40000;
  *param_1 = param_2;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x47] = 0x100;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (lVar2 == 0) {
    param_1[0x55] = 0;
    return;
  }
  uVar3 = 0;
  if (*(long *)(lVar2 + 0x80) != 0) {
    uVar3 = *(undefined8 *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8);
  }
  param_1[0x55] = uVar3;
  return;
}


