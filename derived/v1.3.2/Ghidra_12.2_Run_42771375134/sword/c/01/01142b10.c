/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01142b10; name: FUN_01142b10
 */


void FUN_01142b10(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long local_70 [3];
  long local_58;
  long local_50 [3];
  long local_38;
  
  lVar2 = FUN_00ffa440(*(undefined8 *)(param_1 + 0x60));
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    FUN_006cf0c0(local_70,lVar2 + 0x5c0);
    FUN_006cf0c0(local_50,param_1 + 0x5c0);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    bVar1 = local_50[0] == local_70[0];
  }
  *(bool *)(param_1 + 0x6e1) = bVar1;
  uVar3 = FUN_00ffdef0(param_1 + 0x100,&DAT_021659b8);
  FUN_016b2da0(uVar3,*(byte *)(param_1 + 0x6e1) & *(byte *)(param_1 + 0x6e0) &
                     *(byte *)(param_1 + 0x6e2));
  return;
}


