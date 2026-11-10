/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad40c0; name: FUN_00ad40c0
 */


void FUN_00ad40c0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  if (0xf < *(uint *)(param_1 + 0x5a0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)(param_1 + 0x3c0);
  uVar2 = *(undefined8 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x5a0) * 0x20 + 0xb8);
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_00d6e8d0(*(undefined8 *)(lVar1 + 0x508),param_3,param_2,uVar2,1);
    return;
  }
  if (*(int *)(param_1 + 0x4d0) == 1) {
    uVar3 = *(undefined8 *)(lVar1 + 0x508);
    FUN_00ad4320(local_60,"bin/chara/data/");
  }
  else {
    if (*(int *)(param_1 + 0x4d0) != 2) {
      return;
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x508);
    FUN_00ad41f0(local_60,"bin/pokemon/");
  }
  FUN_00d6e8c0(uVar3,param_2,local_60,uVar2);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


