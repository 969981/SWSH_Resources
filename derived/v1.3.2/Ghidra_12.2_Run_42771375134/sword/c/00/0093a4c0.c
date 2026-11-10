/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093a4c0; name: FUN_0093a4c0
 */


void FUN_0093a4c0(long param_1,undefined2 *param_2)

{
  uint uVar1;
  
  if (*(char *)(param_2 + 2) != '\0') {
    FUN_00918050(*(undefined8 *)(param_1 + 0x18),param_2[3],0xb7,*param_2,0);
  }
  uVar1 = FUN_00888fc0(param_2[1]);
  FUN_00918050(*(undefined8 *)(param_1 + 0x18),param_2[4],0x97,*param_2,uVar1 & 1);
  if (*(char *)(param_2 + 2) == '\0') {
    return;
  }
  FUN_00918050(*(undefined8 *)(param_1 + 0x18),param_2[5],0xb8,*param_2);
  return;
}


