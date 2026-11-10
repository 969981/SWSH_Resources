/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e2770; name: FUN_010e2770
 */


undefined8 FUN_010e2770(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_38;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x60);
  plVar2 = *(long **)(param_1 + 0x28);
  lVar5 = *(long *)PTR_DAT_02724648;
  *(long **)(lVar5 + 0x10) = plVar2;
  *(ulong *)(lVar5 + 0x20) = uVar4;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar4,8);
  *(long **)(lVar5 + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    (**(code **)(**(long **)(lVar5 + 0x10) + 0xb8))();
    plVar2 = *(long **)(lVar5 + 0x18);
  }
  FUN_00760770(plVar2,plVar2 + 0x18,uVar4 - 0xc0,0);
  puVar1 = PTR_DAT_02710518;
  *(undefined1 *)(plVar2 + 0x17) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = (long)(puVar1 + 0xe8);
  *(long **)(lVar5 + 8) = plVar2;
  *(long **)(param_1 + 0x68) = plVar2;
  lVar5 = (**(code **)(*plVar2 + 0x10))(plVar2,0x68,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_0076b600(lVar5);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  lVar3 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar5;
  if (lVar3 != 0) {
    FUN_010e2e50(lVar3);
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),lVar3,*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(param_1 + 0x88));
    lVar5 = *(long *)(param_1 + 0x70);
  }
  *(long **)(param_1 + 0x78) = plVar2;
  *(undefined8 *)(param_1 + 0x80) = 0x68;
  *(undefined8 *)(param_1 + 0x88) = 8;
  *(undefined4 *)(*(long *)(lVar5 + 0x58) + 0x140) = *(undefined4 *)(param_1 + 100);
  FUN_0076b9b0(&local_38,*(undefined8 *)(param_1 + 0x70),param_1 + 0x30);
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(undefined8 *)(param_1 + 0x90) = local_38;
  FUN_00761e80();
  FUN_00761eb0(*(undefined8 *)(param_1 + 0x90));
  return 0;
}


