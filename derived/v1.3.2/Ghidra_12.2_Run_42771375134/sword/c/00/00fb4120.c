/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb4120; name: FUN_00fb4120
 */


void FUN_00fb4120(long param_1,uint param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    param_2 = param_2 & 1;
    FUN_0078aad0(*(undefined8 *)(param_1 + 0xc0),param_2,0);
    FUN_0078aad0(*(undefined8 *)(param_1 + 0xb0),param_2,0);
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_0078aad0(*(long *)(param_1 + 0xb8),param_2,0);
      return;
    }
    break;
  case 1:
    FUN_0078aad0(*(undefined8 *)(param_1 + 0xc0),param_2 & 1,0);
    return;
  case 2:
    FUN_0078aad0(*(undefined8 *)(param_1 + 0xb0),param_2 & 1,0);
    return;
  case 3:
    if (*(long *)(param_1 + 0xb8) != 0) {
      FUN_0078aad0(*(long *)(param_1 + 0xb8),param_2 & 1,0);
      return;
    }
  }
  return;
}


