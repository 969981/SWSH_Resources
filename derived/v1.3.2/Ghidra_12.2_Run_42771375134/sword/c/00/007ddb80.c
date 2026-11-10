/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ddb80; name: FUN_007ddb80
 */


undefined8 FUN_007ddb80(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_02716758;
  if (*param_2 != 0) {
    if (*(ulong *)(param_1 + 0xf8) < 5) {
LAB_007ddc38:
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
      (**(code **)(*(long *)*param_2 + 0x30))();
      FUN_007ddfe0(param_1 + 0xb0,param_2);
      return *(undefined8 *)(param_1 + 0x50);
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    do {
      if ((*(long *)puVar2 == 0) || (*(long *)(*(long *)puVar2 + 0xf8) == 0)) goto LAB_007ddc38;
      FUN_007dd970(param_1);
      nn::os::SleepThread(100000000);
      uVar1 = *(int *)(param_1 + 0x60) + 1;
      *(uint *)(param_1 + 0x60) = uVar1;
    } while (uVar1 < 0x3a99);
    puVar3 = (undefined8 *)*param_2;
    *param_2 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*(long *)param_2[1] + 0x18))((long *)param_2[1],puVar3,param_2[2],param_2[3]);
    }
  }
  return 0;
}


