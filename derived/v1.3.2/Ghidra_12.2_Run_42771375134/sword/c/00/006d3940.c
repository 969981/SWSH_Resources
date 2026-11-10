/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d3940; name: FUN_006d3940
 */


void FUN_006d3940(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar6 = *(long **)(*(long *)PTR_DAT_02715188 + 0x28);
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2a0,8);
    if (lVar3 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_006d46b0(lVar3,param_1);
    *(long **)(lVar3 + 8) = plVar6;
    *(long *)(lVar3 + 0x10) = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 0x2a0;
    *(undefined8 *)(lVar3 + 0x20) = 8;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    FUN_006d1120(lVar3);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *(long *)(param_1 + 8) = lVar3;
  }
  iVar1 = *(int *)(param_1 + 0x15c) + 1;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(int *)(param_1 + 0x15c) = iVar1;
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar4 = *param_2;
    lVar2 = *(long *)(param_1 + 0x10);
    *(int *)(lVar2 + 0x368) = iVar1;
    *(undefined8 *)(lVar2 + 0x360) = uVar4;
    if (1 < *(uint *)(param_1 + 0x158)) {
      lVar2 = 3;
      do {
        uVar4 = *param_2;
        lVar3 = *(long *)(param_1 + lVar2 * 8);
        *(undefined4 *)(lVar3 + 0x368) = *(undefined4 *)(param_1 + 0x15c);
        *(undefined8 *)(lVar3 + 0x360) = uVar4;
        uVar5 = lVar2 - 1;
        lVar2 = lVar2 + 1;
      } while (uVar5 < (ulong)(long)*(int *)(param_1 + 0x158));
    }
  }
  FUN_006d3b00(param_1);
  FUN_006d36a0(param_1);
  FUN_006d5d10(*(undefined8 *)(param_1 + 0x10),param_1);
  if (*(char *)(param_1 + 0x161) != '\0') {
    while (*(char *)(param_1 + 0x160) == '\0') {
      FUN_006d6040(*(undefined8 *)(param_1 + 0x10));
    }
  }
  FUN_006d55b0(param_1 + 0x60);
  FUN_006d3b00(param_1);
  FUN_006d36a0(param_1);
  return;
}


