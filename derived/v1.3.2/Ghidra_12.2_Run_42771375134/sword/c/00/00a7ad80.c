/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a7ad80; name: FUN_00a7ad80
 */


void FUN_00a7ad80(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_LAB_027195f0;
  switch(param_2) {
  case 1:
    break;
  default:
    goto switchD_00a7ada4_caseD_2;
  case 3:
    puVar1 = PTR_LAB_027195f8;
    break;
  case 6:
    puVar1 = PTR_LAB_02719600;
    break;
  case 0xc:
    puVar1 = PTR_LAB_02719608;
    break;
  case 0xd:
    puVar1 = PTR_LAB_02719610;
    break;
  case 0xe:
    puVar1 = PTR_LAB_02719618;
  }
  *(undefined **)(param_1 + 0x1790) = puVar1;
  *(undefined8 *)(param_1 + 0x1798) = 0;
switchD_00a7ada4_caseD_2:
  return;
}


