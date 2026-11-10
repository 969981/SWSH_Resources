/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e1d90; name: FUN_006e1d90
 */


undefined4 FUN_006e1d90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  
  lVar1 = param_1 + 0x160;
  FUN_006e3110(&local_38,lVar1);
  if (local_38 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x78) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x68);
    }
    uVar5 = *puVar2;
    lVar4 = FUN_006e2ec0(lVar1,uVar5);
    if (lVar4 != 0) {
      FUN_006e3010(lVar1,uVar5,param_2);
      param_3 = *(long *)(param_1 + 0x188) + param_3;
      lVar1 = *(long *)(param_1 + 0x180);
      if (param_3 <= *(long *)(param_1 + 0x180)) {
        lVar1 = param_3;
      }
      uVar3 = 0;
      *(long *)(param_1 + 0x188) = lVar1;
      goto joined_r0x006e1e44;
    }
  }
  uVar3 = FUN_006e5790(param_1 + 0x90,param_2,param_3);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x98);
joined_r0x006e1e44:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return uVar3;
}


