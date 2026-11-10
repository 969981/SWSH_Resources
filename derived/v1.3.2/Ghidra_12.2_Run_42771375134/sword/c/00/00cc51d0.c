/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cc51d0; name: FUN_00cc51d0
 */


void FUN_00cc51d0(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  *param_1 = 0;
  if (((*(long *)(param_2 + 0x78) != 0) && (*(long *)(param_2 + 0x80) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x80) + 0x54) != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x78);
    local_30 = *(long *)(param_2 + 0x80);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
    }
    FUN_00c7a4e0(&local_28,uVar1,&local_30);
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    lVar2 = local_28;
    local_28 = 0;
    *param_1 = lVar2;
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return;
}


