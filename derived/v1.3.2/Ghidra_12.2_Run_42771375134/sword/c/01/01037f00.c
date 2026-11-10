/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01037f00; name: FUN_01037f00
 */


void FUN_01037f00(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_40;
  long local_38;
  
  plVar5 = (long *)param_1[1];
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar5;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x250,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_014c5570(lVar3,plVar5);
  *(long **)(lVar3 + 8) = plVar5;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x250;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0xbb] != 0) {
    (**(code **)(*(long *)(param_1[0xbb] + 0x48) + 0x18))();
    param_1[0xbb] = 0;
  }
  param_1[0xbb] = lVar3;
  uVar4 = *(undefined8 *)(param_1[0xc] + 0xb8);
  uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  local_38 = 0;
  FUN_01683be0(&local_40,uVar4,uVar1,param_1 + 0xc1,&local_38,0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (param_1[0xba] != 0) {
    (**(code **)(*(long *)(param_1[0xba] + 0x48) + 0x18))();
    param_1[0xba] = 0;
  }
  lVar2 = param_1[0xbb];
  param_1[0xba] = local_40;
  if (lVar2 != 0) {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar3 = *(long *)(local_40 + 0xa8);
  *(long *)(local_40 + 0xa8) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  lVar2 = FUN_0167b6b0(param_1[0x56],&DAT_02162ba8);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  }
  return;
}


