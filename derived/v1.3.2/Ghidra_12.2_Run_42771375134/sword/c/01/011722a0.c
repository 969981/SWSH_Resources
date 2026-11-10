/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011722a0; name: FUN_011722a0
 */


void FUN_011722a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 local_38;
  
  uVar3 = *(undefined8 *)PTR_DAT_027104b0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_01172660();
    lVar1 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x80);
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar1 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar1 + *(ulong *)(lVar1 + 0x80) * 8) = plVar5;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + 1;
  lVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,0x380,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_01175550(lVar2,*(undefined8 *)(param_1 + 0x80),0x65);
  *(long **)(lVar2 + 8) = plVar5;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x380;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(lVar1 + 0x80) = *(long *)(lVar1 + 0x80) + -1;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(long *)(param_1 + 0xa8) = lVar2;
  lVar1 = FUN_007b5710(uVar3);
  if (*(long *)(lVar1 + 0x48) != 0) {
    lVar2 = *(long *)(lVar1 + 0x48) << 3;
    puVar4 = *(undefined8 **)(lVar1 + 0x40);
    do {
      FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a0),*puVar4);
      lVar2 = lVar2 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar2 != 0);
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  lVar1 = *(long *)(lVar2 + 0x100);
  *(long *)(lVar2 + 0x100) = lVar1 + 1;
  FUN_01176570(&local_38,lVar2 + 0xd0,lVar1,0,0);
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(undefined8 *)(param_1 + 0xb0) = local_38;
  lVar2 = *(long *)(param_1 + 0xa8);
  lVar1 = *(long *)(lVar2 + 0x100);
  *(long *)(lVar2 + 0x100) = lVar1 + 1;
  FUN_01176570(&local_38,lVar2 + 0xd0,lVar1,0,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0xb8) = local_38;
  FUN_011739c0(*(undefined8 *)(param_1 + 0xa8),0,0);
  *(long *)(*(long *)(param_1 + 0xa8) + 0x2c0) = param_1 + 0x60;
  lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2a8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x168) = param_1 + 0x68;
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  return;
}


