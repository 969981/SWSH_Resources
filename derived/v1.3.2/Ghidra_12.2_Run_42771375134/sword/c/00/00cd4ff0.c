/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd4ff0; name: FUN_00cd4ff0
 */


void FUN_00cd4ff0(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0xd0) + 0x60);
  (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined1 *)(param_1 + 0xf0));
  uVar4 = FUN_008783b0(param_3);
  uVar3 = FUN_008783c0(param_3);
  FUN_014b37e0(uVar4,uVar3,0,0);
  FUN_00cce110(*(undefined8 *)(param_1 + 0x78),param_3,*(undefined1 *)(param_1 + 0xf0));
  FUN_00ccfaa0(*(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0xf0),0);
  cVar1 = *(char *)(param_1 + 0xf0);
  *(char *)(param_1 + 0xf0) = cVar1 + '\x01';
  if ((byte)(cVar1 + 1U) < 4) {
    FUN_00cd4e50(param_1,param_2);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    lVar9 = *(long *)(param_1 + 0xb0);
    if (lVar9 == 0) {
      FUN_00ccea80(uVar8,0);
    }
    else {
      plVar6 = (long *)(lVar9 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      FUN_00ccea80(uVar8,lVar9);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    FUN_00ccf420(*(undefined8 *)(param_1 + 0x78),param_2);
    lVar9 = *(long *)(param_1 + 200);
    bVar2 = *(byte *)(param_1 + 0xf0);
    lVar7 = *(long *)(lVar9 + (ulong)bVar2 * 0x18 + 0x18);
    local_60 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar9 = lVar9 + (ulong)bVar2 * 0x18;
    local_58 = *(undefined8 *)(lVar9 + 0x20);
    uStack_50 = *(undefined8 *)(lVar9 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x78);
    iVar5 = FUN_0077d480(lVar7);
    plVar6 = (long *)(undefined1 *)0x0;
    if (iVar5 != 0) {
      plVar6 = &local_60;
    }
    FUN_00ccf8e0(uVar8,plVar6,
                 *(undefined4 *)
                  (*(long *)(param_1 + 0xd0) + (ulong)*(byte *)(param_1 + 0xf0) * 4 + 0x98));
    FUN_00ccfaa0(*(undefined8 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0xf0),1);
    if ((param_4 & 1) != 0) {
      FUN_01182090(*(undefined8 *)(*(long *)(param_1 + 200) + 0x10),
                   *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x26b4));
    }
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
  }
  FUN_006cf0a0(&local_60,&DAT_02643648);
  FUN_016d3620(&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


