/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a8750; name: FUN_004a8750
 */


void FUN_004a8750(ulong param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_02712da8;
  if ((param_1 & 0xff9c0000) == 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,*param_2);
    return;
  }
  uVar2 = *param_2;
  FUN_004c1060(uVar2,PTR_PTR_02712da8);
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1,uVar2);
  return;
}


