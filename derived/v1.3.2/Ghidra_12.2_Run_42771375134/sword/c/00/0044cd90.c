/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044cd90; name: FUN_0044cd90
 */


void FUN_0044cd90(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[0x15];
  *param_1 = (long)(PTR_DAT_02712ff8 + 0x10);
  puVar1 = PTR_DAT_02712a90;
  lVar3 = lVar2;
  if ((int)param_1[0x16] != 0) {
    do {
      if (*(long *)(lVar3 + 0x18) != 0) {
        FUN_00404870(*(undefined4 *)puVar1);
        *(undefined8 *)(lVar3 + 0x18) = 0;
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      lVar2 = param_1[0x15];
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar2 + (ulong)*(uint *)(param_1 + 0x16) * 0x28);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar2);
    param_1[0x15] = 0;
    *(undefined4 *)((long)param_1 + 0xb4) = 0;
  }
  if (param_1[6] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[6] = 0;
  }
  param_1[7] = 0;
  if (param_1[8] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[8] = 0;
  }
  param_1[9] = 0;
  if (param_1[10] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[10] = 0;
  }
  param_1[0xb] = 0;
  if (param_1[0xc] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xc] = 0;
  }
  param_1[0xd] = 0;
  if (param_1[0xe] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0xe] = 0;
  }
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x10] = 0;
  }
  param_1[0x11] = 0;
  if (param_1[0x12] != 0) {
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    param_1[0x12] = 0;
  }
  param_1[0x13] = 0;
  FUN_004635e0(param_1);
  return;
}


