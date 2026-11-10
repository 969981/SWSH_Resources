/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb00d0; name: FUN_00cb00d0
 */


void FUN_00cb00d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  *param_1 = 0;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 3:
    FUN_00cb10a0(&local_18,param_2,3,*(undefined4 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x28)
                 ,*(undefined8 *)(param_3 + 0x30));
    break;
  case 4:
    FUN_00cb1690(&local_18,param_2,4,*(undefined4 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x28)
                 ,*(undefined8 *)(param_3 + 0x30));
    break;
  case 5:
    FUN_00cb1bf0(&local_18,param_2,5,*(undefined4 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x28)
                );
    break;
  case 6:
    FUN_00cb21b0(&local_18,param_2,6,*(undefined4 *)(param_3 + 0x18),param_3 + 0x28,
                 *(undefined4 *)(param_3 + 0x38));
    break;
  default:
    goto switchD_00cb0104_caseD_7;
  case 9:
    FUN_00c9d7d0(&local_18,param_2,9,*(undefined4 *)(param_3 + 0x18),param_3 + 0x28);
    break;
  case 0xb:
    FUN_00c9dde0(&local_18,param_2,0xb,*(undefined4 *)(param_3 + 0x18),param_3 + 0x28);
    break;
  case 0xc:
    FUN_00cb2760(&local_18,param_2,0xc,*(undefined4 *)(param_3 + 0x18),param_3 + 0x30,param_3 + 0x38
                );
  }
  *param_1 = local_18;
switchD_00cb0104_caseD_7:
  return;
}


