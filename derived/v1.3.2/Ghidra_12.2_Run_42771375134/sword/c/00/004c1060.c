/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c1060; name: FUN_004c1060
 */


void FUN_004c1060(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(long *)(param_1 + 0x48) = 0;
  return;
}


