/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c7640; name: FUN_014c7640
 */


ulong FUN_014c7640(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long local_48;
  
  lVar1 = FUN_014cd1e0(*(undefined8 *)PTR_DAT_02710890,param_3);
  if (lVar1 != 0) {
    uVar2 = FUN_0077e740(lVar1,param_4,param_2);
    return uVar2;
  }
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,param_3,0,
               *(undefined8 *)(param_1 + 0x220),0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_48;
  lVar1 = 0;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x60,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar1 = *(long *)(param_1 + 0x68);
  }
  plVar4 = *(long **)(param_1 + 0x220);
  uVar5 = *(undefined8 *)(lVar1 + 400);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar4;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x1d0,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_0077e290(lVar3,uVar5);
  *(long **)(lVar3 + 8) = plVar4;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x1d0;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar3 == 0) {
    uVar2 = FUN_0077e740(0,param_4,param_2);
  }
  else {
    plVar4 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar2 = FUN_0077e740(lVar3,param_4,param_2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  return uVar2 & 0xffffffff;
}


