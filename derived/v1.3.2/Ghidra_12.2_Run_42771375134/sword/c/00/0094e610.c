/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e610; name: FUN_0094e610
 */


void FUN_0094e610(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_2 = 0;
  uVar1 = FUN_009424e0(param_1,*param_3);
  if (((param_3[3] != '\0') || (uVar2 = FUN_008e1600(uVar1), (uVar2 & 1) == 0)) &&
     (uVar2 = FUN_008e1570(uVar1), (uVar2 & 1) == 0)) {
    FUN_0094e680(param_1,param_3);
    *param_2 = 1;
  }
  return;
}


