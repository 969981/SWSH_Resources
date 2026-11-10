/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013224a0; name: FUN_013224a0
 */


void FUN_013224a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_28;
  
  plVar1 = (long *)(param_1 + 0x88);
  FUN_01320fc0(&local_28,plVar1);
  if (local_28 != 0) {
    uVar2 = FUN_01323dd0();
    if ((uVar2 & 1) != 0) {
      if (*(char *)(param_1 + 0x198) != '\0') {
        *(undefined1 *)(param_1 + 0x198) = 0;
        FUN_012dc9c0(local_28,param_1 + 0x1a0);
      }
      FUN_013240a0(local_28,param_2);
    }
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  return;
}


