/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768950; name: FUN_00768950
 */


void FUN_00768950(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar1 = PTR_DAT_02710860;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x80) == 0)) {
    lVar2 = FUN_00769420(auStack_28,0);
  }
  else {
    lVar2 = FUN_00769420(auStack_28,*(undefined8 *)(lVar2 + *(long *)(lVar2 + 0x80) * 8 + -8));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(long *)(param_1 + 0x10) = lVar2;
  FUN_00769860(lVar2);
  return;
}


