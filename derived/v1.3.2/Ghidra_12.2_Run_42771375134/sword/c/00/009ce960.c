/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ce960; name: FUN_009ce960
 */


void FUN_009ce960(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auStack_38 [8];
  
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x100);
  *param_2 = *(undefined8 *)(param_1 + 0xf0);
  *(char *)((long)param_2 + 0x13) = (char)*(undefined4 *)(param_1 + 0x114);
  *(char *)((long)param_2 + 0x12) = (char)*(undefined4 *)(param_1 + 0x110);
  *(short *)((long)param_2 + 0xc) = (short)*(undefined4 *)(param_1 + 0x104);
  *(short *)((long)param_2 + 0xe) = (short)*(undefined4 *)(param_1 + 0x108);
  *(short *)(param_2 + 2) = (short)*(undefined4 *)(param_1 + 0x10c);
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  *(undefined2 *)(lVar2 + 0x3cc) = *(undefined2 *)(param_1 + 0x124);
  *(undefined4 *)(lVar2 + 0x3c8) = uVar1;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined4 *)(param_1 + 0x126);
  *(undefined2 *)(lVar2 + 0x3dc) = *(undefined2 *)(param_1 + 0x12a);
  *(undefined4 *)(lVar2 + 0x3d8) = uVar1;
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar2 + 0x9e8) == 0) {
    lVar2 = FUN_008ea4d0(auStack_38,*(undefined8 *)(param_1 + 0x18));
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar3 + 0x9e8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar3 + 0x9e8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar3 + 0x9e8) = 0;
    }
    *(long *)(lVar3 + 0x9e8) = lVar2;
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(lVar2 + 0x420);
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x420);
  }
  if (lVar3 == 0) {
    plVar4 = *(long **)(param_1 + 0x18);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar4;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0x90,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0xb8))(plVar4);
    }
    FUN_00883c20(lVar3,*(undefined8 *)(param_1 + 0x18));
    *(long **)(lVar3 + 8) = plVar4;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x90;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar2 + 0x420) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0x420) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + 0x420) = 0;
    }
    *(long *)(lVar2 + 0x420) = lVar3;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  FUN_01524f20(*(undefined8 *)(lVar2 + 0x9e0),param_1 + 300);
  FUN_01524f20(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x9e8),param_1 + 0x23c);
  FUN_00885160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x418),param_1 + 0x2410);
  FUN_00885160(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x420),param_1 + 0x2c30);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x3bb) = 1;
  return;
}


