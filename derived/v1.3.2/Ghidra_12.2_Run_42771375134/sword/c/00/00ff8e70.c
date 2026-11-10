/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8e70; name: FUN_00ff8e70
 */


void FUN_00ff8e70(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *local_128 [4];
  undefined8 *local_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  FUN_010201f0(local_128);
  FUN_00ffac20(*(undefined8 *)(param_1 + 0x60),param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = FUN_00ffaa70(*(undefined8 *)(param_1 + 0x60));
  ppuVar1 = local_128;
  if ((uVar4 & 1) == 0) {
    ppuVar1 = param_2;
  }
  FUN_00ffac20(uVar2,ppuVar1);
  FUN_00ffac20(*(undefined8 *)(param_1 + 0x70),local_128);
  puVar3 = local_c8;
  local_c8 = (undefined8 *)0x0;
  local_128[0] = PTR_DAT_02710a38 + 0x10;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*local_c0 + 0x18))(local_c0,puVar3,uStack_b8,local_b0);
  }
  puVar3 = local_e8;
  local_e8 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*local_e0 + 0x18))(local_e0,puVar3,uStack_d8,local_d0);
  }
  puVar3 = local_108;
  local_108 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3);
    (**(code **)(*local_100 + 0x18))(local_100,puVar3,uStack_f8,local_f0);
  }
  return;
}


