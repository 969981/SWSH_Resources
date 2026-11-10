/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c946b0; name: FUN_00c946b0
 */


void FUN_00c946b0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *local_48;
  long *local_38;
  
  if (((param_2 & 1) == 0) || (1 < *(int *)(param_1 + 0x3a4) - 1U)) {
    FUN_00c90b20(param_1);
    lVar2 = 0;
    if ((param_2 & 1) == 0) {
      do {
        uVar1 = FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),
                             *(undefined1 *)(param_1 + 0x2e3 + lVar2));
        FUN_00c825a0(&local_38);
        FUN_00c825f0(&local_48,uVar1);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x68))();
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x68))();
        }
        FUN_00c82750(uVar1);
        if (local_48 != (long *)0x0) {
          (**(code **)(local_48[9] + 0x18))();
          local_48 = (long *)0x0;
        }
        if (local_38 != (long *)0x0) {
          (**(code **)(local_38[9] + 0x18))();
          local_38 = (long *)0x0;
        }
        lVar2 = lVar2 + 0xc;
      } while (lVar2 != 0xc0);
    }
    else {
      do {
        uVar1 = FUN_00c834c0(*(undefined8 *)(param_1 + 0x270),
                             *(undefined1 *)(param_1 + 0x2e3 + lVar2));
        FUN_00c825a0(&local_38);
        FUN_00c825f0(&local_48,uVar1);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x60))();
        }
        if ((local_48 != (long *)0x0) &&
           ((**(code **)(*local_48 + 0x60))(), local_48 != (long *)0x0)) {
          (**(code **)(local_48[9] + 0x18))();
          local_48 = (long *)0x0;
        }
        if (local_38 != (long *)0x0) {
          (**(code **)(local_38[9] + 0x18))();
          local_38 = (long *)0x0;
        }
        lVar2 = lVar2 + 0xc;
      } while (lVar2 != 0xc0);
    }
    if ((param_2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x3a4) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x3a4) = 6;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x39d) = 1;
  }
  return;
}


