/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121ae00; name: FUN_0121ae00
 */


void FUN_0121ae00(Uuid *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  nn::oe::GetPseudoDeviceId(param_1);
  puVar1 = PTR_DAT_02710878;
  auVar2 = FUN_01025b70(*(undefined8 *)PTR_DAT_02710878);
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar2;
  auVar2 = FUN_01025c00(*(undefined8 *)puVar1);
  if ((auVar2._0_8_ & 0xff) != 0) {
    *(long *)(param_1 + 0x20) = auVar2._8_8_;
  }
  return;
}


