/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c42f20; name: FUN_00c42f20
 */


void FUN_00c42f20(char *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_50;
  char local_48 [12];
  undefined8 local_3c;
  
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1cec0(&local_50,puVar3 + -10);
        goto joined_r0x00c42fd4;
      }
    }
  }
  FUN_00c1cec0(&local_50,0);
joined_r0x00c42fd4:
  if ((local_50 != 0) && (puVar3 = *(undefined8 **)(local_50 + 0x60), puVar3 != (undefined8 *)0x0))
  {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00c1bbc0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00bdc2d0(local_48,puVar3 + -10);
        goto joined_r0x00c4305c;
      }
    }
  }
  FUN_00bdc2d0(local_48,0);
joined_r0x00c4305c:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  if (local_48[0] != '\0') {
    puVar3 = &local_3c;
    if (*(char *)(param_2 + 0xa0) != '\0') {
      puVar3 = (undefined8 *)((ulong)local_48 | 4);
    }
    *(undefined8 *)(param_1 + 4) = *puVar3;
    *param_1 = '\x01';
    param_1 = local_48;
  }
  *param_1 = '\0';
  return;
}


