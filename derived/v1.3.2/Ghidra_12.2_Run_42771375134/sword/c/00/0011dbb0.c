/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011dbb0; name: FUN_0011dbb0
 */


void FUN_0011dbb0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if ((*(byte *)((long)param_2 + 0xb) & 1) != 0) {
    if ((*(byte *)((long)param_2 + 0xb) >> 1 & 1) == 0) {
      puVar1 = (undefined8 *)*param_2;
      if (*(char *)((long)puVar1 + 0x21) == '\x01') {
        uVar3 = *(undefined8 *)(param_1 + 0x668);
        *(int *)(param_1 + 0x65c) = *(int *)(param_1 + 0x65c) + -1;
        plVar2 = (long *)(param_1 + 0x668);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x430);
        *(int *)(param_1 + 0x424) = *(int *)(param_1 + 0x424) + -1;
        plVar2 = (long *)(param_1 + 0x430);
      }
      *puVar1 = uVar3;
      *plVar2 = (long)puVar1;
    }
    *param_2 = 0;
    *(undefined1 *)((long)param_2 + 0xb) = 0;
  }
  return;
}


