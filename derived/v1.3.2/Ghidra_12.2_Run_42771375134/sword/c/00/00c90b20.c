/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c90b20; name: FUN_00c90b20
 */


undefined8 FUN_00c90b20(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long *local_58;
  long *local_50;
  long local_48;
  long local_38;
  
  uVar4 = *(uint *)((long)param_1 + 0x3a4);
  if (uVar4 < 4 || uVar4 == 6) {
    uVar2 = 1;
  }
  else {
    if (uVar4 == 5) {
      lVar3 = (**(code **)(*param_1 + 0x168))();
      if (lVar3 != 0) {
        local_38 = 0;
        FUN_00c77260(lVar3,&local_38);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
        local_48 = 0;
        FUN_00c77360(lVar3,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
      }
      lVar3 = 0;
      do {
        FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar3 + 0x2e3));
        FUN_00c825a0(&local_50);
        if (local_50 != (long *)0x0) {
          (**(code **)(local_50[9] + 0x18))();
          local_50 = (long *)0x0;
        }
        lVar3 = lVar3 + 0xc;
      } while (lVar3 != 0xc0);
      lVar3 = 0;
      uVar4 = 1;
      do {
        uVar2 = FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar3 + 0x2e3));
        FUN_00c825a0(&local_50);
        FUN_00c825f0(&local_58,uVar2);
        if (local_50 != (long *)0x0) {
          uVar1 = (**(code **)(*local_50 + 0x88))();
          uVar4 = uVar4 & uVar1;
        }
        if (local_58 != (long *)0x0) {
          uVar1 = (**(code **)(*local_58 + 0x88))();
          uVar4 = uVar4 & uVar1;
          if (local_58 != (long *)0x0) {
            (**(code **)(local_58[9] + 0x18))();
            local_58 = (long *)0x0;
          }
        }
        if (local_50 != (long *)0x0) {
          (**(code **)(local_50[9] + 0x18))();
          local_50 = (long *)0x0;
        }
        lVar3 = lVar3 + 0xc;
      } while (lVar3 != 0xc0);
      if (uVar4 != 0) {
        *(undefined4 *)((long)param_1 + 0x3a4) = 3;
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


