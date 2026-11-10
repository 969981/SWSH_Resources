/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a5050; name: FUN_013a5050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013a5050(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long local_38;
  
  FUN_013a5170(&local_38);
  uVar2 = FUN_0130a600(local_38);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x5b0);
    if (lVar3 == 0) {
      bVar1 = *(int *)(param_2 + 0x14) != (int)_DAT_00000084;
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      bVar1 = *(int *)(param_2 + 0x14) != (int)*(short *)(lVar3 + 0x84);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (bVar1) {
    lVar3 = *(long *)(param_1 + 0x5b0);
    if (lVar3 == 0) {
      FUN_007a24a0(_DAT_000002a0,param_3,1);
    }
    else {
      plVar4 = (long *)(lVar3 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_007a24a0(*(undefined8 *)(lVar3 + 0x2a0),param_3,1);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  return;
}


