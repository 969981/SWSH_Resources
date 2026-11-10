/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895370; name: FUN_00895370
 */


void FUN_00895370(long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long local_80;
  char *local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  long local_48;
  
  *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  puVar2 = (undefined8 *)(**(code **)param_2[1])(param_2 + 1);
  if (((*PTR_DAT_02710500 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02710500), iVar1 != 0))
  {
    uVar3 = FUN_00102930();
    *(undefined8 *)PTR_DAT_02710508 = uVar3;
    __cxa_guard_release(PTR_DAT_02710500);
  }
  plVar5 = (long *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      if (puVar2 == (undefined8 *)PTR_DAT_02710508) {
        plVar5 = param_2;
        goto LAB_008953fc;
      }
      puVar2 = (undefined8 *)*puVar2;
    } while (puVar2 != (undefined8 *)0x0);
    plVar5 = (long *)0x0;
  }
LAB_008953fc:
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x108,8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  FUN_00774aa0(uVar3,plVar5);
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  lVar4 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  if (lVar4 != 0) {
    FUN_00775140(lVar4);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),lVar4,*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(param_1 + 0x88));
    uVar3 = *(undefined8 *)(param_1 + 0x70);
  }
  *(long **)(param_1 + 0x78) = param_2;
  *(undefined8 *)(param_1 + 0x80) = 0x108;
  *(undefined8 *)(param_1 + 0x88) = 8;
  FUN_00775460(uVar3,param_3,param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  FUN_0010d170(&local_48,"bin/sound/NX64/wwise/bank/");
  FUN_00a83620(&local_80,&local_48);
  FUN_00775d00(uVar3,&local_80);
  if ((local_68 != 0) && (local_80 != 0)) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = (char *)0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  local_60 = 0;
  local_58 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_80 = 0x4326bef60cb284a4;
  local_78 = "English(US)";
  local_70 = (undefined1 *)0xb;
  local_68 = 0;
  FUN_00775cb0(*(undefined8 *)(param_1 + 0x70),&local_80);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return;
}


