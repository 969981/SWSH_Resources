/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a6c20; name: FUN_008a6c20
 */


void FUN_008a6c20(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_66;
  undefined8 local_60;
  ulong local_58;
  short local_50;
  undefined1 local_4e;
  undefined8 local_48;
  
  local_4e = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x101;
  plVar4 = *(long **)(param_1 + 0x150);
  lVar3 = *(long *)(param_1 + 0x170);
  local_48 = param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50 = (ushort)(param_3 & 1) << 8;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_0077eb10(lVar3,&local_48,*(undefined8 *)(param_1 + 0x158));
  FUN_014c62d0(*(undefined8 *)(*(long *)(param_1 + 0x148) + 0x5d8),*(undefined8 *)(param_1 + 0x160),
               *(undefined8 *)(param_1 + 0x158));
  local_60 = *(undefined8 *)(param_1 + 0x160);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  local_68 = 1;
  local_66 = 0xffff;
  local_98 = 0;
  uStack_90 = 0;
  plVar5 = *(long **)(param_1 + 8);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x80,8);
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_0077d050(lVar2,0x40);
  *(long **)(lVar2 + 8) = plVar5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x80;
  *(undefined8 *)(lVar2 + 0x20) = 8;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_a8 = 0x5da573220eaf9be8;
  FUN_0077eb10(lVar3,&local_a8,*(undefined8 *)(param_1 + 0x158));
  local_a0 = *(undefined8 *)(param_1 + 0x158);
  local_a8 = 0x5da574220eaf9d9b;
  FUN_0077eb10(lVar3,&local_a8,lVar2);
  local_98 = lVar2;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_60,&local_a0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


