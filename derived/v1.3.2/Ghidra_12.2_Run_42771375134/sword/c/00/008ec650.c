/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ec650; name: FUN_008ec650
 */


undefined4 FUN_008ec650(undefined1 param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x1000;
  switch(param_1) {
  case 1:
  case 6:
    uVar2 = 0x800;
    if (param_2 != '\n') {
      uVar2 = 0x1000;
    }
    uVar1 = 0x1800;
    break;
  case 2:
  case 5:
    uVar2 = 0x1800;
    if (param_2 != '\n') {
      uVar2 = 0x1000;
    }
    uVar1 = 0x800;
    break;
  default:
    goto switchD_008ec674_caseD_3;
  }
  if (param_2 != '\t') {
    uVar1 = uVar2;
  }
switchD_008ec674_caseD_3:
  return uVar1;
}


