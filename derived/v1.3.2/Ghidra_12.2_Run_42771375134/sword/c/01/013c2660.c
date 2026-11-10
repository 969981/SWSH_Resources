/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2660; name: FUN_013c2660
 */


void FUN_013c2660(long param_1,byte param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  byte local_38;
  
  uVar2 = 4;
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    return;
  default:
    goto switchD_013c2698_caseD_1;
  case 2:
    uVar2 = 3;
    if ((param_2 & 1) == 0) {
      uVar2 = 5;
    }
    break;
  case 6:
    break;
  case 7:
    uVar2 = 3;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar2;
switchD_013c2698_caseD_1:
  FUN_01302c30(auStack_50);
  local_3c = 1;
  local_38 = param_2 & 1;
  uVar1 = FUN_013c2760(param_1);
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_013c2110(*(undefined8 *)(param_1 + 0x68),auStack_50,uVar1);
  }
  pcVar3 = *(code **)(param_1 + 0x1b8);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    (*pcVar3)(param_1 + 0x1d0);
  }
  *(long *)(param_1 + 0x1d0) = param_1;
  *(undefined1 **)(param_1 + 0x1b0) = &LAB_013c36a0;
  *(undefined1 **)(param_1 + 0x1b8) = &LAB_013c36b0;
  *(undefined1 **)(param_1 + 0x1c0) = &LAB_013c36c0;
  *(undefined1 **)(param_1 + 0x1c8) = &LAB_013c36d0;
  FUN_01302cd0(auStack_50);
  return;
}


