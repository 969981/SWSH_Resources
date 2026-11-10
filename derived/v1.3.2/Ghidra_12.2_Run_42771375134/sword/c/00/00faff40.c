/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faff40; name: FUN_00faff40
 */


void FUN_00faff40(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_70;
  long local_68;
  
  puVar1 = PTR_DAT_02710860;
  lVar4 = 0;
  param_1 = param_1 + 0xc00;
  do {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x1e0,0x10);
    if (lVar3 == 0) {
      (**(code **)(*param_2 + 0xb8))(param_2);
    }
    FUN_00fb0b00(lVar3,param_2);
    *(long **)(lVar3 + 8) = param_2;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x1e0;
    *(undefined8 *)(lVar3 + 0x20) = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + lVar4) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + lVar4) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + lVar4) = 0;
    }
    *(long *)(param_1 + lVar4) = lVar3;
    local_68 = *param_3;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_00fb0b70(lVar3,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    local_70 = *(long *)(param_1 + lVar4);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_01025970(&local_70,param_4);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x80);
  return;
}


