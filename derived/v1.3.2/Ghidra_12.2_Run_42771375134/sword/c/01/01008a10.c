/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01008a10; name: FUN_01008a10
 */


void FUN_01008a10(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long local_38;
  
  plVar4 = *(long **)(param_1 + 0x70);
  if (plVar4 != (long *)0x0) {
LAB_01008a38:
    do {
      if ((char)plVar4[0x2c] != '\0') {
        if (plVar4[0xb] == 0) {
          plVar4[0xb] = 0;
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) break;
          goto LAB_01008a38;
        }
        FUN_006e2100(plVar4[0xb],plVar4 + 10);
        lVar2 = plVar4[0xb];
        plVar4[0xb] = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
    puVar1 = PTR_DAT_02710788;
    plVar4 = *(long **)(param_1 + 0x70);
    if (plVar4 != (long *)0x0) {
      if ((param_3 & 1) == 0) {
        do {
          if ((char)plVar4[0x2c] != '\0') {
            FUN_00a8ba70(&local_38,*(undefined8 *)puVar1,0,plVar4 + 4,0,param_2,0);
            if (plVar4[0xb] != 0) {
              (**(code **)(*(long *)(plVar4[0xb] + 0x48) + 0x18))();
              plVar4[0xb] = 0;
            }
            lVar2 = local_38;
            plVar4[0xb] = local_38;
            if (local_38 != 0) {
              plVar3 = (long *)(local_38 + 0x48);
              (**(code **)(*plVar3 + 0x10))(plVar3);
              if ((plVar4[0xc] != 0) || (plVar4[0x1c] != 0)) {
                FUN_006e1e70(lVar2,plVar4 + 10,1);
              }
              FUN_006e1be0(lVar2);
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          if ((char)plVar4[0x2c] != '\0') {
            FUN_00a8ba70(&local_38,*(undefined8 *)puVar1,1,plVar4 + 4,0,param_2,0);
            if (plVar4[0xb] != 0) {
              (**(code **)(*(long *)(plVar4[0xb] + 0x48) + 0x18))();
              plVar4[0xb] = 0;
            }
            lVar2 = local_38;
            plVar4[0xb] = local_38;
            if (local_38 != 0) {
              plVar3 = (long *)(local_38 + 0x48);
              (**(code **)(*plVar3 + 0x10))(plVar3);
              if ((plVar4[0xc] != 0) || (plVar4[0x1c] != 0)) {
                FUN_006e1e70(lVar2,plVar4 + 10,1);
              }
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
  }
  return;
}


