/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b94e0; name: FUN_007b94e0
 */


void FUN_007b94e0(long *param_1,uint *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long *local_90 [2];
  long alStack_80 [4];
  long *local_60;
  undefined8 *local_50;
  long local_48;
  long local_40;
  
  if (*param_2 == 0) {
    FUN_007b7f20(param_1);
    return;
  }
  if (3 < (*param_2 >> 0xd & 0x1f) - 1) {
    FUN_007b9320(param_1);
    return;
  }
  FUN_007b9eb0(local_90,param_1 + 0x16);
  param_1[0x13] = 0;
  param_1[0x1f] = 0;
  (**(code **)(*param_1 + 200))(param_1);
  if (local_48 != 0) {
    lVar3 = local_48 << 3;
    puVar2 = local_50;
    do {
      FUN_007b7810(param_1,*puVar2);
      lVar3 = lVar3 + -8;
      puVar2 = puVar2 + 1;
    } while (lVar3 != 0);
  }
  if (local_40 != 0) {
    (**(code **)(*local_90[0] + 0x18))(local_90[0],local_50,local_40 << 3,8);
  }
  if (alStack_80 == local_60) {
    pcVar1 = *(code **)(*local_60 + 0x20);
  }
  else {
    if (local_60 == (long *)0x0) {
      return;
    }
    pcVar1 = *(code **)(*local_60 + 0x28);
  }
  (*pcVar1)();
  return;
}


