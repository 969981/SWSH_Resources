/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5c370; name: FUN_00e5c370
 */


undefined8 FUN_00e5c370(long param_1,long *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_38;
  
  puVar4 = *(undefined8 **)(*param_2 + 0x60) + -10;
  (**(code **)**(undefined8 **)(*param_2 + 0x60))();
  uVar2 = FUN_00e5d3d0();
  local_38 = *param_2;
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  cVar1 = *(char *)(puVar4 + 0x166);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00fa3020(&local_38,param_1 + 0xc50,1,cVar1 == '\0');
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0xc60) = *(int *)(param_1 + 0xc60) + -1;
    if ((param_3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0xc64) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}


