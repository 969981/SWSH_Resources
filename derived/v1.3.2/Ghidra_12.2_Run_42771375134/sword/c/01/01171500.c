/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01171500; name: FUN_01171500
 */


void FUN_01171500(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_38;
  
  uVar5 = *(undefined8 *)PTR_DAT_027104b0;
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_01172660();
    lVar2 = *(long *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x80);
  lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar7;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0x380,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar7 + 0xb8))(plVar7);
  }
  FUN_01175550(lVar3,*(undefined8 *)(param_1 + 0x80),100);
  *(long **)(lVar3 + 8) = plVar7;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x380;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(long *)(param_1 + 0xa8) = lVar3;
  lVar2 = FUN_007b5710(uVar5);
  if (*(long *)(lVar2 + 0x48) != 0) {
    puVar6 = *(undefined8 **)(lVar2 + 0x40);
    iVar4 = 0;
    lVar2 = *(long *)(lVar2 + 0x48) << 3;
    do {
      bVar1 = FUN_007b5850(*puVar6);
      if (bVar1 < 2) {
        FUN_007a1ff0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x2a0),*puVar6);
        iVar4 = iVar4 + 1;
      }
      puVar6 = puVar6 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
    if (iVar4 == 2) {
      lVar3 = *(long *)(param_1 + 0xa8);
      lVar2 = *(long *)(lVar3 + 0x100);
      *(long *)(lVar3 + 0x100) = lVar2 + 1;
      FUN_01176570(&local_38,lVar3 + 0xd0,lVar2,0,0);
      if (*(long *)(param_1 + 0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
      *(undefined8 *)(param_1 + 0xb0) = local_38;
      lVar3 = *(long *)(param_1 + 0xa8);
      lVar2 = *(long *)(lVar3 + 0x100);
      *(long *)(lVar3 + 0x100) = lVar2 + 1;
      FUN_01176570(&local_38,lVar3 + 0xd0,lVar2,0,0);
      if (*(long *)(param_1 + 0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      *(undefined8 *)(param_1 + 0xb8) = local_38;
      FUN_011739c0(*(undefined8 *)(param_1 + 0xa8),0,1);
      *(long *)(*(long *)(param_1 + 0xa8) + 0x2c0) = param_1 + 0x60;
      lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2a8);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x168) = param_1 + 0x68;
      }
      *(undefined1 *)(param_1 + 0x91) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0x14;
  return;
}


