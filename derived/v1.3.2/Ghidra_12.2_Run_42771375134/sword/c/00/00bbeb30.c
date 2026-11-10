/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbeb30; name: FUN_00bbeb30
 */


void FUN_00bbeb30(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_28;
  
  lVar4 = *(long *)(param_1 + 0x2b0);
  *(undefined1 *)(param_1 + 0x630) = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_28 = 0xe74343968b0f16e6;
  FUN_0167b9b0(lVar4,&local_28,0);
  local_28 = 0xe74344968b0f1899;
  FUN_0167b9b0(lVar4,&local_28,0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_28 = FUN_016b8190();
  uVar3 = (uint)((ulong)local_28 >> 0x20);
  uVar1 = uVar3 - 2;
  if (1 < uVar3) {
    if ((int)local_28 == 0) {
      if ((int)uVar1 < 6) {
        uVar2 = 1;
        goto LAB_00bbec08;
      }
    }
    else if (uVar1 < 5) {
      uVar2 = 0;
      goto LAB_00bbec08;
    }
  }
  uVar2 = 2;
LAB_00bbec08:
  FUN_00bc3280(param_1,uVar2,1);
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_28);
    return;
  case 1:
    FUN_00bbc160(param_1,&local_28);
    return;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_28);
    return;
  default:
    FUN_00bbcd10(param_1,&local_28);
    return;
  }
}


