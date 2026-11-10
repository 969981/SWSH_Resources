/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014acd80; name: FUN_014acd80
 */


void FUN_014acd80(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  local_60 = 0xf4e5d3f7efb5e54d;
  local_58 = "projection_effect_col";
  local_50 = 0x15;
  local_48 = 0;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x1f0,0x10);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  FUN_006fbcf0(uVar1,param_1 + 0x670,&local_60);
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  lVar2 = *(long *)(param_1 + 0x780);
  *(undefined8 *)(param_1 + 0x780) = uVar1;
  if (lVar2 != 0) {
    FUN_00784490(lVar2);
    (**(code **)(**(long **)(param_1 + 0x788) + 0x18))
              (*(long **)(param_1 + 0x788),lVar2,*(undefined8 *)(param_1 + 0x790),
               *(undefined8 *)(param_1 + 0x798));
  }
  *(long **)(param_1 + 0x788) = param_2;
  *(undefined8 *)(param_1 + 0x790) = 0x1f0;
  *(undefined8 *)(param_1 + 0x798) = 0x10;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    FUN_006e2100(*(long *)(param_1 + 0x18),param_1 + 0x10);
    lVar2 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  return;
}


