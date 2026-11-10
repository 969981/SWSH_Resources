/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6b50; name: FUN_006b6b50
 */


void FUN_006b6b50(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_006b9b40(*(undefined8 *)(param_2 + 0xf0));
  if ((uVar1 & 1) != 0) {
    FUN_006b9e50(param_1,*(undefined8 *)(param_2 + 0xf0));
  }
  if (*(long *)(param_2 + 0x118) == 0) goto LAB_006b6bbc;
  FUN_006b8160(param_1);
  if (*(long *)(param_2 + 0x118) == 0) goto LAB_006b6bbc;
  uVar1 = FUN_006b81e0();
  if ((uVar1 & 1) != 0) goto LAB_006b6bbc;
  *(undefined8 *)(param_2 + 0x118) = 0;
  for (param_2 = *(long *)(param_2 + 0x110); param_2 != 0; param_2 = *(long *)(param_2 + 0x110)) {
    FUN_006b6750(param_1,param_2,1);
LAB_006b6bbc:
  }
  return;
}


