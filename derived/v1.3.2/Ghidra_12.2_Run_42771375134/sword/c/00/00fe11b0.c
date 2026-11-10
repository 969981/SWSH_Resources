/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe11b0; name: FUN_00fe11b0
 */


void FUN_00fe11b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar6 = param_2[2];
  *(undefined8 *)(param_1 + 0x7f8) = param_2[1];
  *(undefined8 *)(param_1 + 0x800) = uVar6;
  *(undefined8 *)(param_1 + 0x7f0) = uVar1;
  uVar5 = param_2[3];
  uVar1 = param_2[5];
  uVar6 = param_2[6];
  *(undefined8 *)(param_1 + 0x810) = param_2[4];
  *(undefined8 *)(param_1 + 0x820) = uVar6;
  *(undefined8 *)(param_1 + 0x818) = uVar1;
  *(undefined8 *)(param_1 + 0x808) = uVar5;
  uVar6 = param_2[8];
  uVar1 = param_2[9];
  uVar5 = param_2[10];
  *(undefined8 *)(param_1 + 0x828) = param_2[7];
  *(undefined8 *)(param_1 + 0x840) = uVar5;
  *(undefined8 *)(param_1 + 0x838) = uVar1;
  *(undefined8 *)(param_1 + 0x830) = uVar6;
  uVar1 = FUN_0103bd80(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0));
  uVar6 = FUN_00ff93d0(param_1);
  FUN_0168b110(param_1 + 0x40,uVar6,uVar1,0);
  uVar1 = FUN_0103bd80(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),param_2 + 4);
  uVar6 = FUN_00ff93d0(param_1);
  FUN_0168b110(param_1 + 0x410,uVar6,uVar1,0);
  *(undefined1 *)(param_1 + 0x7d8) = 0;
  uVar1 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  plVar2 = (long *)FUN_00ff93d0(param_1);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN_0077d050(lVar4,0xd);
  *(long **)(lVar4 + 8) = plVar2;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x848) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x848) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x848) = 0;
  }
  *(long *)(param_1 + 0x848) = lVar4;
  return;
}


