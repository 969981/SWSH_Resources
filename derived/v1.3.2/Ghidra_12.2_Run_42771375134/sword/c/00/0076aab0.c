/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076aab0; name: FUN_0076aab0
 */


void FUN_0076aab0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x60) = 0x20000;
  *(long *)(param_1 + 0x30) = param_3;
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x40) = param_4;
  *(undefined8 *)(param_1 + 0x48) = param_5;
  *(undefined8 *)(param_1 + 0x50) = param_6;
  *(undefined8 *)(param_1 + 0x58) = param_7;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x4d8) = 1;
  }
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x4d9) = 1;
  }
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x580) = 0;
    return;
  }
  uVar2 = 0;
  if (*(long *)(lVar1 + 0x80) != 0) {
    uVar2 = *(undefined8 *)(lVar1 + *(long *)(lVar1 + 0x80) * 8 + -8);
  }
  *(undefined8 *)(param_1 + 0x580) = uVar2;
  return;
}


