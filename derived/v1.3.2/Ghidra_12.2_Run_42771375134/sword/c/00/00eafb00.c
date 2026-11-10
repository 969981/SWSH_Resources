/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eafb00; name: FUN_00eafb00
 */


undefined8 FUN_00eafb00(long param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long local_28;
  
  puVar3 = *(undefined8 **)(*param_2 + 0x60) + -10;
  (**(code **)**(undefined8 **)(*param_2 + 0x60))();
  uVar2 = FUN_00e5d3d0();
  local_28 = *param_2;
  if ((uVar2 & 1) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  cVar1 = *(char *)(puVar3 + 0x166);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00fa3020(&local_28,param_1 + 0x6c0,4,cVar1 == '\0');
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x700) = *(int *)(param_1 + 0x700) + -1;
  *(undefined4 *)(param_1 + 0x690) = 0x5a;
  return 1;
}


