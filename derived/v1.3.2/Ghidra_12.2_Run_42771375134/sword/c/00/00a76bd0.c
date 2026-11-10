/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a76bd0; name: FUN_00a76bd0
 */


void FUN_00a76bd0(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar2 = FUN_00d6ee60(*(undefined8 *)(param_1 + 0x508),param_3);
  local_48 = 0;
  local_50 = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar4 == 0) {
    FUN_0101cb00(0,&local_50);
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_0101cb00(lVar4,&local_50);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  puVar5 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
  uVar1 = *puVar5;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = param_2;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,0x710,0x10);
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_00adae20(lVar3,param_1,param_2,&local_50,(long)puVar5 + (ulong)uVar1);
  *(long **)(lVar3 + 8) = param_2;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x710;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb90) = 0;
  }
  *(long *)(param_1 + 0xb90) = lVar3;
  FUN_00adaee0(lVar3,uVar2,2,0);
  return;
}


