/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00499eb0; name: FUN_00499eb0
 */


void FUN_00499eb0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  FUN_00499fe0(param_1,&local_60);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (*(uint *)(param_1 + 0x38) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x38) * 0x28;
    do {
      FUN_0049f990(puVar1);
      puVar1 = puVar1 + 5;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
  }
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x38) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x38) * 0x28;
      do {
        (**(code **)*puVar1)(puVar1);
        lVar2 = lVar2 + -0x28;
        puVar1 = puVar1 + 5;
      } while (lVar2 != 0);
      puVar1 = *(undefined8 **)(param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar1);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined **)(param_1 + 0x20) = PTR_DAT_02713370 + 0x10;
  return;
}


