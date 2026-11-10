/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217f10; name: FUN_00217f10
 */


void FUN_00217f10(undefined8 *param_1,long *param_2)

{
  uint uVar1;
  
  if ((*(char *)((long)param_1 + 10) != '\0') && (1 < *(ushort *)(param_1 + 1))) {
    uVar1 = *(ushort *)(param_1 + 1) - 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    (**(code **)(*param_2 + 8))(param_2,*param_1,(uVar1 | uVar1 >> 0x10) * 8 + 8);
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 10) = 1;
  return;
}


